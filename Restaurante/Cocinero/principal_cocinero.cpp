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


void principal_cocinero::MostrarOrdenes(){

    QString ordenes,nombre,descripcion,cantidad;
    QSqlQuery queryOrden;
    int row=0;
    ordenes="select p.Nombre,cp.describcion,cp.cantidad from  Comanda_has_Platillo as cp inner join"
         " Platillos as p on cp.idPlatillo=p.idPlatillo where cp.categoria<9 and cp.estadoPlatillo=1;";

    queryOrden.exec(ordenes);


    while(queryOrden.next()){

        nombre=queryOrden.value(0).toString();
        descripcion=queryOrden.value(1).toString();
        cantidad=queryOrden.value(2).toString();

        elementoCola *platillo = new elementoCola();
        platillo->editaLabels(nombre, cantidad, descripcion);

     //QLabel *titulo=new QLabel();
     //titulo->setText(nombre+"                           "+descripcion+"                          "+"x"+cantidad);
     //QPushButton *boton=new  QPushButton();

     //boton->setText(nombre+"                           "+descripcion+"                          "+"x"+cantidad);
     //boton->setStyleSheet("background-color: blue");
     //boton->setIconSize(QSize(15,15));
     //ui->observarPlatillos->addWidget(titulo,row,1,1,Qt::AlignTop);
     ui->observarPlatillos->addWidget(platillo,row,1,1, Qt::AlignTop);
     //ui->pedidos->addWidget(Cantidad,row,2,Qt::AlignTop);

     row++;

    }


}
