#include "principal_cajero.h"
#include "ui_principal_cajero.h"
#include <QDebug>

principal_cajero::principal_cajero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_cajero)
{
    ui->setupUi(this);
}

principal_cajero::principal_cajero(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_cajero)
{
    ui->setupUi(this);
    identifier = id;
    ui->setupUi(this);

    MostrarOrdenes();
    ui->comboBox->addItem("1");
    ui->comboBox->addItem("2");
    ui->comboBox->addItem("3");
    ui->comboBox->addItem("4");
    ui->comboBox->addItem("5");
    ui->comboBox->addItem("6");
    ui->comboBox->addItem("7");
    ui->comboBox->addItem("8");
    ui->comboBox->addItem("9");
    ui->comboBox->addItem("10");
    ui->comboBox->addItem("11");
    ui->comboBox->addItem("12");
    ui->comboBox->addItem("13");
    ui->comboBox->addItem("14");
    ui->comboBox->addItem("15");

    qDebug()<<ui->comboBox->currentText();
}

principal_cajero::~principal_cajero()
{
    delete ui;
}

void principal_cajero::on_btn_consulta_clicked(){
    qDebug()<<"funciono perra te amo";
    return;
}



void principal_cajero::clearLayout(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearLayout(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}

void principal_cajero::MostrarOrdenes(){

    clearLayout(ui->observarPlatillos);
    QString ordenes,nombre,idComanda,mesa;
    QSqlQuery queryOrden,queryOrden2,queryOrden3;

    QString ordenes2,ordenes3,descripcion,cantidad;

    int row=0;

    //PARA PLATILLOS
    ordenes="select pl.Nombre,cp.describcion,cp.cantidad,cp.idComanda,m.idMesa from Mesa as m inner join  Pedido as p on m.idMesa=p.Mesa_idMesa inner join "
            " Comanda_has_Platillo as cp on  p.idPedido=cp.idPedido "
            "inner join Platillos as pl on cp.idPlatillo=pl.idPlatillo where cp.categoria<9 and cp.estadoPlatillo=2";

    queryOrden.exec(ordenes);

    while(queryOrden.next()){
        qDebug()<<"Platillo";
        nombre=queryOrden.value(0).toString();
        idComanda=queryOrden.value(3).toString();
        mesa=queryOrden.value(4).toString();
        ElementoStatus *platillo = new ElementoStatus();
        platillo->editaLabels(nombre,idComanda,mesa);
        ui->observarPlatillos->addWidget(platillo,row,1,Qt::AlignTop);

     row++;
    }

    // PARA COCTELES
    ordenes2="select c.Nombre,cp.describcion,cp.cantidad,cp.idComanda,m.idMesa from Mesa as m inner join  Pedido as p on m.idMesa=p.Mesa_idMesa inner join  Comanda_has_Platillo as cp on  p.idPedido=cp.idPedido "
             "inner join Cocteles as c on cp.idPlatillo=c.idBebida where cp.categoria=9 and cp.estadoPlatillo=2;";
    queryOrden2.exec(ordenes2);

    while(queryOrden2.next()){
        qDebug()<<"coctel";
        nombre=queryOrden2.value(0).toString();
        idComanda=queryOrden2.value(3).toString();
        mesa=queryOrden2.value(4).toString();
         //qDebug()<<"coctel"<<nombre<<descripcion<<cantidad<<idComanda;
         ElementoStatus *platillo = new ElementoStatus();
        platillo->editaLabels(nombre,idComanda,mesa);
        ui->observarPlatillos->addWidget(platillo,row,1,Qt::AlignTop);
     row++;

    }

    //PARA VINOS
    ordenes3="select v.Nombre,cp.describcion,cp.cantidad,cp.idComanda,m.idMesa from Mesa as m inner join  Pedido as p on m.idMesa=p.Mesa_idMesa inner join  Comanda_has_Platillo as cp on  p.idPedido=cp.idPedido "
             "inner join Vinos as v on cp.idPlatillo=v.idBebida where cp.categoria=10 and  cp.estadoPlatillo=2;";

     queryOrden3.exec(ordenes3);

    while(queryOrden3.next()){
    qDebug()<<"Vinos";
        nombre=queryOrden3.value(0).toString();
        idComanda=queryOrden3.value(3).toString();
        mesa=queryOrden3.value(4).toString();
        //qDebug()<<"vinos"<<nombre<<descripcion<<cantidad<<idComanda;
        ElementoStatus *bebida = new ElementoStatus();
        bebida->editaLabels(nombre,idComanda,mesa);
        ui->observarPlatillos->addWidget(bebida,row,1,Qt::AlignTop);
        row++;
    }
}


