#include "elementostatus.h"
#include "ui_elementostatus.h"

ElementoStatus::ElementoStatus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ElementoStatus)
{
    ui->setupUi(this);
}

ElementoStatus::~ElementoStatus()
{
    delete ui;
}

void ElementoStatus::platilloListo(QString id){
    qDebug()<<"Paltillo: "<<id;
    QString pedido;
    QSqlQuery enviar;
    pedido="update Comanda_has_Platillo set estadoPlatillo=3 where idComanda='"+id+"'";
    enviar.exec(pedido);
    enviar.next();
}

void ElementoStatus::editaLabels(QString nomPlato,QString idComanda,QString mesa){

    ui->label_2->setText(nomPlato);
    ui->label_3->setText("Lista");
    ui->lblID->hide();
    ui->lblID->setText(idComanda);
    ui->label_mesa->setText(mesa);

   //qDebug()<<mesa;

}

void ElementoStatus::on_btnActo_clicked()
{
    qDebug()<<"entre";

    platilloListo(ui->lblID->text());

}
