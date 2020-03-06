#include "tarjetaplatillo.h"
#include "ui_tarjetaplatillo.h"

tarjetaPlatillo::tarjetaPlatillo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tarjetaPlatillo)
{
    ui->setupUi(this);
}

tarjetaPlatillo::~tarjetaPlatillo()
{
    delete ui;
}

void tarjetaPlatillo::llenar(QString nombre, QString precio, QString id,QString numMesa)
{
    ui->nombrePro->setPlainText(nombre);
    ui->idPro->setText(id);
    ui->Precio->setText(precio);
    //qDebug()<<"num mesa: "<<numMesa;
    nummesa=numMesa;
}

void tarjetaPlatillo::orden(QString id)
{
    QSqlQuery platillo;
    QString  busPlatillo;
    busPlatillo="select *from Platillos where idPlatillo='"+id+"'";

    platillo.exec(busPlatillo);
    platillo.next();

     //qDebug()<<"id Platillo: "<<platillo.value(0).toString();
     //qDebug()<<"Nombre: "<<platillo.value(1).toString();
     //qDebug()<<"Tiempo: "<<platillo.value(3).toString();
     //qDebug()<<"Categoria: "<<platillo.value(4).toString();

     comanda=new confirmacion_comanda(id,nummesa);
     comanda->setModal(true);
     comanda->show();

}

void tarjetaPlatillo::on_pushButton_clicked()
{
    orden(ui->idPro->text());
}
