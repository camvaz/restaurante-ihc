#include "principal_bartender.h"
#include "ui_principal_bartender.h"

principal_bartender::principal_bartender(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_bartender)
{
    ui->setupUi(this);

}

principal_bartender::principal_bartender(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_bartender)
{
    ui->setupUi(this);
    identifier = id;
    MostrarOrdenes();

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(hora()));
    timer->start(1000);

}

principal_bartender::~principal_bartender()
{
    delete ui;
}


void principal_bartender::hora(){
        QTime time=QTime::currentTime();
        QString time_text=time.toString("h:m:s ap");

        if((time.second() % 2)==0){
        MostrarOrdenes();
        }
}

void clearLayout2(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearLayout2(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}


void principal_bartender::MostrarOrdenes(){

   clearLayout2(ui->observarbar);

    QString ordenes,ordenes2,nombre,descripcion,cantidad,idComanda;
    QSqlQuery queryOrden,queryOrden2;
    int row=0;

    ordenes="select c.Nombre,cp.describcion,cp.cantidad,cp.idComanda from  Comanda_has_Platillo as cp inner join"
            " Cocteles as c on cp.idPlatillo=c.idBebida where cp.categoria=9 and cp.estadoPlatillo=1";

    queryOrden.exec(ordenes);

    ordenes2="select  v.Nombre,cp.describcion,cp.cantidad,cp.idComanda from  Comanda_has_Platillo as cp inner join"
             " Vinos as v on cp.idPlatillo=v.idBebida where cp.categoria=10 and  cp.estadoPlatillo=1";

    queryOrden2.exec(ordenes2);

    while(queryOrden.next()){

        nombre=queryOrden.value(0).toString();
        descripcion=queryOrden.value(1).toString();
        cantidad=queryOrden.value(2).toString();
        idComanda=queryOrden.value(3).toString();
         //qDebug()<<"coctel"<<nombre<<descripcion<<cantidad<<idComanda;
         elementoCola *bebida = new elementoCola();
        bebida->editaLabels(nombre, cantidad, descripcion,idComanda);
        ui->observarbar->addWidget(bebida,row,1,Qt::AlignTop);
     row++;

    }

    while(queryOrden2.next()){

        nombre=queryOrden2.value(0).toString();
        descripcion=queryOrden2.value(1).toString();
        cantidad=queryOrden2.value(2).toString();
        idComanda=queryOrden2.value(3).toString();

        //qDebug()<<"vinos"<<nombre<<descripcion<<cantidad<<idComanda;
        elementoCola *bebida = new elementoCola();
        bebida->editaLabels(nombre, cantidad, descripcion,idComanda);
        ui->observarbar->addWidget(bebida,row,1,Qt::AlignTop);
        row++;
    }
}

