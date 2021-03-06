#include "enviarpedido.h"
#include "ui_enviarpedido.h"
#include <Mesero/principal_mesero.h>


EnviarPedido::EnviarPedido(QString numMesa,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnviarPedido)
{
    ui->setupUi(this);
    NumMesa=numMesa;
    QString imagen;
    imagen="C:/Imagenes tamaño pequeño/Advertencia";
    QPixmap adver(imagen);
   ui->Advertencia_2->setPixmap(adver);
}

EnviarPedido::~EnviarPedido()
{
    delete ui;
}

void EnviarPedido::on_cancelar_clicked()
{
    close();
}

void EnviarPedido::on_enviar_clicked()
{
    QString pedido;
    QSqlQuery enviar;
    pedido="UPDATE Pedido as p inner join "
    "Comanda_has_Platillo as cp on p.idPedido=cp.idPedido set cp.estadoPlatillo=1 WHERE p.Mesa_idMesa='"+NumMesa+"'";
    enviar.exec(pedido);
    enviar.next();
    qDebug()<<"actualizado"<<NumMesa;
    //static Principal_Mesero obj;
    //obj.mostrarPedido();
    close();

}
