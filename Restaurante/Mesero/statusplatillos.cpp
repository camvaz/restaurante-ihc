#include "statusplatillos.h"
#include "ui_statusplatillos.h"

statusPlatillos::statusPlatillos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::statusPlatillos)
{
    ui->setupUi(this);

    MostrarOrdenes();
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(hora()));
    timer->start(1000);
}

statusPlatillos::~statusPlatillos()
{
    delete ui;
}

void statusPlatillos::hora(){
        QTime time=QTime::currentTime();
        QString time_text=time.toString("h:m:s ap");

        if((time.second() % 2)==0){
        MostrarOrdenes();
        }
}

void clearLayout4(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearLayout4(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}

void statusPlatillos::MostrarOrdenes(){

    clearLayout4(ui->observarPlatillos);
    QString ordenes,nombre,idComanda,mesa;
    QSqlQuery queryOrden;

    QString ordenes2,descripcion,cantidad;
    QSqlQuery queryOrden2;

    int row=0;

    ordenes="select pl.Nombre,cp.describcion,cp.cantidad,cp.idComanda,m.idMesa from Mesa as m inner join  Pedido as p on m.idMesa=p.Mesa_idMesa inner join "
            " Comanda_has_Platillo as cp on  p.idPedido=cp.idPedido "
            "inner join Platillos as pl on cp.idPlatillo=pl.idPlatillo where cp.categoria<9 and cp.estadoPlatillo=2;";

    //qDebug()<<ordenes;

    queryOrden.exec(ordenes);
    while(queryOrden.next()){

        nombre=queryOrden.value(0).toString();
        idComanda=queryOrden.value(3).toString();
        mesa=queryOrden.value(4).toString();
        ElementoStatus *platillo = new ElementoStatus();
        platillo->editaLabels(nombre,idComanda,mesa);
        ui->observarPlatillos->addWidget(platillo,row,1,Qt::AlignTop);

     row++;
    }


    ordenes="select c.Nombre,cp.describcion,cp.cantidad,cp.idComanda from  Comanda_has_Platillo as cp inner join"
            " Cocteles as c on cp.idPlatillo=c.idBebida where cp.categoria=9 and cp.estadoPlatillo=1";

    queryOrden.exec(ordenes);

    ordenes2="select  v.Nombre,cp.describcion,cp.cantidad,cp.idComanda from  Comanda_has_Platillo as cp inner join"
             " Vinos as v on cp.idPlatillo=v.idBebida where cp.categoria=10 and  cp.estadoPlatillo=1";

    queryOrden2.exec(ordenes2);

    while(queryOrden.next()){

        nombre=queryOrden.value(0).toString();
        idComanda=queryOrden.value(3).toString();
         //qDebug()<<"coctel"<<nombre<<descripcion<<cantidad<<idComanda;
         ElementoStatus *platillo = new ElementoStatus();
        platillo->editaLabels(nombre,idComanda,"1");
        ui->observarPlatillos->addWidget(platillo,row,1,Qt::AlignTop);
     row++;

    }

    while(queryOrden2.next()){

        nombre=queryOrden2.value(0).toString();
        idComanda=queryOrden2.value(3).toString();
        //qDebug()<<"vinos"<<nombre<<descripcion<<cantidad<<idComanda;
        ElementoStatus *bebida = new ElementoStatus();
        bebida->editaLabels(nombre,idComanda,"2");
        ui->observarPlatillos->addWidget(bebida,row,1,Qt::AlignTop);
        row++;
    }
}

