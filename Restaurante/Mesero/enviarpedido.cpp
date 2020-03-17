#include "enviarpedido.h"
#include "ui_enviarpedido.h"

EnviarPedido::EnviarPedido(QString numMesa,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnviarPedido)
{
    ui->setupUi(this);
    NumMesa=numMesa;
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
    close();

}
