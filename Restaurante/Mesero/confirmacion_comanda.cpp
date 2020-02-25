#include "confirmacion_comanda.h"
#include "ui_confirmacion_comanda.h"

confirmacion_comanda::confirmacion_comanda(QString id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmacion_comanda)
{
    ui->setupUi(this);
    QString ruta;
    //ruta="C:/Imagenes tamaño pequeño/pasta2";QPixmap mar(ruta);ui->lbl_img_platillo->setPixmap(mar);
    ruta="C:/Imagenes tamaño pequeño/bebidaNaranja";QPixmap mar(ruta);ui->lbl_img_platillo->setPixmap(mar);
    ruta="C:/Imagenes tamaño pequeño/menos";QIcon menos(ruta);ui->btn_menos->setIcon(menos);
    ruta="C:/Imagenes tamaño pequeño/mas";QIcon mas(ruta);ui->btn_mas->setIcon(mas);

    idPlatillos=id;
    qDebug()<<"hola: "<<idPlatillos;


}

confirmacion_comanda::~confirmacion_comanda()
{
    delete ui;
}


void confirmacion_comanda::on_btn_aceptar_clicked()
{

     qDebug()<<"hola: "<<idPlatillos;
    QSqlQuery query;
    QString busqueda,categotia;

    busqueda="select *from Platillos where idPlatillo='"+idPlatillos+"'";
    qDebug()<<busqueda;
    query.exec(busqueda);
    query.next();

    qDebug()<<"id Platillo: "<<query.value(0).toString();
    qDebug()<<"Nombre: "<<query.value(1).toString();
    qDebug()<<"Tiempo: "<<query.value(3).toString();
    qDebug()<<"Categoria: "<<query.value(4).toString();


   // if()


}
