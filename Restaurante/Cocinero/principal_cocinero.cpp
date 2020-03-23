#include "principal_cocinero.h"
#include "ui_principal_cocinero.h"
#include "elementocola.h"

principal_cocinero::principal_cocinero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_cocinero)
{
    ui->setupUi(this);
}

principal_cocinero::principal_cocinero(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_cocinero)
{
    ui->setupUi(this);
    identifier = id;
    MostrarOrdenes();
}

principal_cocinero::~principal_cocinero()
{
    delete ui;
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

void principal_cocinero::MostrarOrdenes(){

    qDebug()<<"entre";
    clearLayout2(ui->observarPlatillos);
    QString ordenes,nombre,descripcion,cantidad,idComanda;
    QSqlQuery queryOrden;
    int row=0;
    ordenes="select p.Nombre,cp.describcion,cp.cantidad,cp.idComanda  from  Comanda_has_Platillo as cp inner join"
         " Platillos as p on cp.idPlatillo=p.idPlatillo where cp.categoria<9 and cp.estadoPlatillo=1;";

    //qDebug()<<ordenes;

    queryOrden.exec(ordenes);
    while(queryOrden.next()){
        qDebug()<<"entre2";
        nombre=queryOrden.value(0).toString();
        descripcion=queryOrden.value(1).toString();
        cantidad=queryOrden.value(2).toString();
        idComanda=queryOrden.value(3).toString();
        elementoCola *platillo = new elementoCola();
        platillo->editaLabels(nombre, cantidad, descripcion,idComanda);
        ui->observarPlatillos->addWidget(platillo,row,1,1, Qt::AlignTop);
     row++;
    }


}
