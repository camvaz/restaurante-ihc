#include "cobrar_.h"
#include "ui_cobrar_.h"
#include <QDebug>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
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
}
