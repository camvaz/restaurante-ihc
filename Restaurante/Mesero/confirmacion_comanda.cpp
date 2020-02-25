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

    comandaPedido();

}

confirmacion_comanda::~confirmacion_comanda()
{
    delete ui;
}


void confirmacion_comanda::comandaPedido(){

   qDebug()<<"id comanda desde dialogo: "<<idPlatillos;
   QSqlQuery query;
   QString busqueda,categoria,ruta,nombre,tiempo;

   busqueda="select *from Platillos where idPlatillo='"+idPlatillos+"'";

   query.exec(busqueda);
   query.next();


   nombre=query.value(1).toString();
   tiempo=query.value(3).toString();
   categoria=query.value(4).toString();

   qDebug()<<"id Platillo: "<<query.value(0).toString();
   qDebug()<<"Nombre: "<<nombre;
   qDebug()<<"Tiempo: "<<tiempo;
   qDebug()<<"Categoria: "<<categoria;






   //entradas
    if(categoria=="1")
   {

    ruta="C:/Imagenes tamaño pequeño/molletito";QPixmap entrada(ruta);ui->lbl_img_platillo->setPixmap(entrada);


   }

    //parilla
    if(categoria=="2")
   {
   ruta="C:/Imagenes tamaño pequeño/verduras quemadas idk";QPixmap parilla(ruta);ui->lbl_img_platillo->setPixmap(parilla);

    }

    //mar
    if(categoria=="3")
   {

   ruta="C:/Imagenes tamaño pequeño/pasta2";QPixmap mar(ruta);ui->lbl_img_platillo->setPixmap(mar);


   }

    //postres
    if(categoria=="4")
   {

        ruta="C:/Imagenes tamaño pequeño/frutas";QPixmap reposteria(ruta);ui->lbl_img_platillo->setPixmap(reposteria);

   }

    //ensaladas
    if(categoria=="5")
   {
  ruta="C:/Imagenes tamaño pequeño/ensalada";QPixmap ensalada(ruta);ui->lbl_img_platillo->setPixmap(ensalada);


   }

    //sopas
    if(categoria=="6")
   {

     ruta="C:/Imagenes tamaño pequeño/camaroncio";QPixmap sopa(ruta);ui->lbl_img_platillo->setPixmap(sopa);

   }

    //guarniciones
    if(categoria=="7")
   {

   ruta="C:/Imagenes tamaño pequeño/ensalada2";QPixmap guarnicio(ruta);ui->lbl_img_platillo->setPixmap(guarnicio);

   }


    //infantil
    if(categoria=="8")
    {

        ruta="C:/Imagenes tamaño pequeño/potato&burger";QPixmap infantil(ruta);ui->lbl_img_platillo->setPixmap(infantil);

    }



}

void confirmacion_comanda::on_btn_aceptar_clicked()
{



}
