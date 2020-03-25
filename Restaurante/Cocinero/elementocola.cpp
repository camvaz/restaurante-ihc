#include "elementocola.h"
#include "ui_elementocola.h"


elementoCola::elementoCola(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::elementoCola)
{
    ui->setupUi(this);

}

elementoCola::~elementoCola()
{
    delete ui;
}

void elementoCola::platilloListo(QString id){
   //qDebug()<<"Paltillo: "<<id;
    QString pedido;
    QSqlQuery enviar;
    pedido="update Comanda_has_Platillo set estadoPlatillo=2 where idComanda='"+id+"'";
    enviar.exec(pedido);
    enviar.next();
}

void elementoCola::editaLabels(QString nomPlato, QString cant, QString comentarios,QString idComanda){

    ui->lblPlatillo->setText(nomPlato);
    ui->lblCantidad->setText(cant);
    ui->lblComentario->setText(comentarios);
    ui->idcomanda->hide();
    ui->idcomanda->setText(idComanda);
   // qDebug()<<idComanda;
}

void elementoCola::on_btnPlatillo_clicked()
{
    platilloListo(ui->idcomanda->text());

}
