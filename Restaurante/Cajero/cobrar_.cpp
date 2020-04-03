#include "cobrar_.h"
#include "ui_cobrar_.h"
#include <QDebug>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QUrl>
#include <QPainter>
#include <QTextDocument>
#include <QDesktopServices>
#include <QFileDialog>
#include <QString>

cobrar_::cobrar_(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cobrar_)
{
    ui->setupUi(this);
}

cobrar_::cobrar_(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cobrar_)
{
    ui->setupUi(this);
    identifier = id;
    ui->Table_platillos_Activos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tabla_platillos = new QSqlRelationalTableModel(this);
    tabla_platillos->setTable("tic");
    tabla_platillos->select();
    ui->Table_platillos_Activos->setModel(tabla_platillos);
    tabla_platillos->setHeaderData(tabla_platillos->fieldIndex("cantidad"),Qt::Horizontal,"Cantidad");
    tabla_platillos->setHeaderData(tabla_platillos->fieldIndex("idComanda"),Qt::Horizontal,"Clave");
    tabla_platillos->setHeaderData(tabla_platillos->fieldIndex("idMesa"),Qt::Horizontal,"# Mesa");
    tabla_platillos->setHeaderData(tabla_platillos->fieldIndex("precio"),Qt::Horizontal,"Precio");
    tabla_platillos->setHeaderData(tabla_platillos->fieldIndex("nom"),Qt::Horizontal,"Platillo");
    ui->Table_platillos_Activos->hideColumn(0);
    ui->Table_platillos_Activos->hideColumn(1);
    ui->btn_Cobrar->hide();

}


cobrar_::~cobrar_()
{
    delete ui;
}


void cobrar_::on_btn_agregar_clicked()
{
    qDebug()<<"Hello World!;";
    QModelIndex Idx = ui->Table_platillos_Activos->currentIndex();
    QString t="";
    if(Idx.row()>=0){
        int respuesta = QMessageBox::question(this,"Advertencia",
                                              "¿Quiere Agregar el ticket a la cuenta seleccionada?");
        if(respuesta == QMessageBox::No)
            return;


        QSqlQuery query;
        QSqlQuery query1;
        float total = 1;
        //total means cantidad
        query.prepare("insert into TICKET (ID_comanda,id_platillo,nombre,subtotal,total) "
                      "select idComanda,IDP,nom,precio,cantidad from tic where idComanda='"+tabla_platillos->record(Idx.row()).value("idComanda").toString()+"'");
        if(query.exec()){
            while (query.next())
                total = total + query.value(3).toFloat();
            query1.prepare("update TICKET set pagado = 0 where ID_comanda='"+tabla_platillos->record(Idx.row()).value("idComanda").toString()+"'");
            t.setNum(total);
        }else{
            qDebug()<<query.lastError();
            return;
        }
        if(query1.exec())
            QMessageBox::information(this,"Operacion Aceptada","\nSe ha aceptado el platillo a la cuenta seleccionada.\n");
        else
            qDebug()<<query1.lastError();

    }
    tabla_platillos->select();

    ui->table_ticket->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    tabla_tic = new QSqlRelationalTableModel(this);
    tabla_tic->setTable("pagar_t");
    tabla_tic->select();
    ui->table_ticket->setModel(tabla_tic);
    tabla_tic->setHeaderData(tabla_tic->fieldIndex("nombre"),Qt::Horizontal,"Platillo");
    tabla_tic->setHeaderData(tabla_tic->fieldIndex("precio"),Qt::Horizontal,"Precio");
    tabla_tic->setHeaderData(tabla_tic->fieldIndex("total"),Qt::Horizontal,"Cantidad");

    ui->btn_Cobrar->show();
    ui->COBRAR->setText(t);

}

void cobrar_::on_btn_cancelar_clicked()
{
    qDebug()<<"Hello World!;...";
    ui->table_ticket->hideColumn(0);
    ui->table_ticket->hideColumn(1);
    ui->table_ticket->hideColumn(2);
    ui->table_ticket->hideColumn(5);

}

void cobrar_::on_btn_Cobrar_clicked()
{
    qDebug()<<"Hello World!123456789";
     QMessageBox::information(this,"Operacion Aceptada","\nImprimiendo el ticket.\n");
     QString tabla = crear_ticket();

     QString html          =
                 "<STYLE type='text/css'>"
                    " #logo {text-align: center; margin-bottom: 10px;}"

                     "H1.miclase { border-top: 2px solid  #196A73; "
                         "border-bottom: 2px solid #196A73;"
                         "color:#196A73;"
                         "font-size: 2.4em;"
                         "line-height: 1.4em;"
                         "font-weight: normal;"
                         "text-align: center;"
                         "margin: 0 0 20px 0;"
                         "background: url(dimension.png);"
                         "}"
                     "#cuerpo{"
                      "  font-size:12px;"
                      "   font-family:Tahoma;"
                     "}"
                     "#fecha{"
                         "text-align: right;"
                         "font-size:12px;"
                         "font-family:Tahoma;"
                     "}"
              "</STYLE>"
                 "<header>"
                     "<div id='logo'>"
                      "   <img src='log.png'>"
                     "</div>"
                 "</header>"
                 "<h1 class ='miclase'>GRACIAS POR SU COMPRA</h1>"
                 "<div id = 'fecha'>""</div>"
             "<div id = 'cuerpo'>"
              "   <p> </p>"
              "   <p>Presente ticket no genera cargos por impresion, no es un comprobante fiscal.</p>"
              "   <p></p>"
               "  <center><p>"+tabla+"</p></center>"

                 "</div>";
     QTextDocument document;
     document.setHtml(html);
     QString filename="/home/roberthlml/Reportex.pdf";
     //QString filename="C:/Imagenes tamaño pequeño/ticket.pdf";
     QPrinter printer(QPrinter::PrinterResolution);
     printer.setOutputFormat(QPrinter::PdfFormat);
     printer.setPaperSize(QPrinter::A4);
     printer.setOutputFileName(filename);
     document.print(&printer);
     QDesktopServices::openUrl(QUrl::fromLocalFile("/home/roberthlml/Reportex.pdf"));
}

QString cobrar_::crear_ticket(){
    QString dato1,dato2,dato3,tabla;
    int auxtotal,total = 0;
    tabla = "<table border='1'>";
    tabla += "<tr><td>Platillo</td><td>Precio</td><td>Cantidad</td> </tr>";
    QSqlQuery query;
    query.prepare("select * from pagar_t ");
    query.exec();
    while (query.next()){
        dato1 = query.value("nombre").toString();
        dato2 = query.value("subtotal").toString();
        dato3 = query.value("total").toString();
        auxtotal = dato2.toInt();
        tabla += "<tr><td> "+ dato1 +" </td> <td>" + dato2 + "</td><td> " + dato3 + "</td> </tr>";
        total += auxtotal;
    }
    QString aux = QString::number(total);
    tabla += "</table>";
    tabla += "<center><h1>TOTAL: " + aux +"</h1></center>";
    return tabla;
}
