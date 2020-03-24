#include "principal_cocinero.h"
#include "ui_principal_cocinero.h"


principal_cocinero::principal_cocinero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_cocinero)
{
    ui->setupUi(this);
    //MostrarOrdenes();
}

principal_cocinero::principal_cocinero(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_cocinero)
{
    ui->setupUi(this);
    identifier = id;
    MostrarOrdenes();

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(hora()));
    timer->start(1000);
}

principal_cocinero::~principal_cocinero()
{
    delete ui;
}

void principal_cocinero::hora(){
        QTime time=QTime::currentTime();
        QString time_text=time.toString("h:m:s ap");

        if((time.second() % 2)==0){
        MostrarOrdenes();
        }
}

void clearLayout3(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearLayout3(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}

void principal_cocinero::MostrarOrdenes(){
    clearLayout3(ui->observarPlatillos);
    QString ordenes,nombre,descripcion,cantidad,idComanda;
    QSqlQuery queryOrden;
    int row=0;
    ordenes="select p.Nombre,cp.describcion,cp.cantidad,cp.idComanda  from  Comanda_has_Platillo as cp inner join"
         " Platillos as p on cp.idPlatillo=p.idPlatillo where cp.categoria<9 and cp.estadoPlatillo=1;";

    //qDebug()<<ordenes;

    queryOrden.exec(ordenes);
    while(queryOrden.next()){

        nombre=queryOrden.value(0).toString();
        descripcion=queryOrden.value(1).toString();
        cantidad=queryOrden.value(2).toString();
        idComanda=queryOrden.value(3).toString();

        elementoCola *platillo = new elementoCola();

        platillo->editaLabels(nombre, cantidad, descripcion,idComanda);
        ui->observarPlatillos->addWidget(platillo,row,1,Qt::AlignTop);

     row++;
    }
}
