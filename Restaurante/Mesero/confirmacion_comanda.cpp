#include "confirmacion_comanda.h"
#include "ui_confirmacion_comanda.h"

confirmacion_comanda::confirmacion_comanda(QString id,QString numMesa,QString categoria,QWidget *parent) :
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

    nummesa=numMesa;
    Categoria=categoria;
    comandaPedido();
}

confirmacion_comanda::~confirmacion_comanda()
{
    delete ui;
}


void confirmacion_comanda::comandaPedido(){

  // qDebug()<<"id comanda desde dialogo: "<<idPlatillos;
   QSqlQuery query;
   QString busqueda,ruta,nombre,precio,menuCate,ingredientes,ingrediente1;


    if(Categoria<"9")
   {
       //EJECUTAR CUANDO LA CATEGORIA SEA DE 1 AL 9

       busqueda="select *from Platillos as p inner join ingredientes_platillo as ip  on p.idPlatillo=ip.idPlatillo "
        "inner join Ingredientes as i on ip.idIngrediente=i.idIngredientes where p.idPlatillo='"+idPlatillos+"'";


   }

        if(Categoria=="9")
        {
           //cocteles
        busqueda="select *from Cocteles as p inner join cocteles_ingredientes as ip  on p.idBebida=ip.idCoctel "
           "inner join Ingredientes as i on ip.idIngredientes=i.idIngredientes where p.idBebida='"+idPlatillos+"'";

        }

        if(Categoria=="10")
   {
        //vinos
         busqueda="select *from Vinos where idBebida='"+idPlatillos+"'";
         query.exec(busqueda);
         query.next();
        ingrediente1=query.value(6).toString();


   }

   query.exec(busqueda);
   query.next();

   nombre=query.value(1).toString();
   precio=query.value(2).toString();

   if(Categoria!="10"){
   ingrediente1=query.value(10).toString();
    }

   //qDebug()<<"id Platillo-->: "<<query.value(0).toString();
   qDebug()<<"Nombre-->: "<<nombre;
   qDebug()<<"precio-->: "<<precio;
   qDebug()<<"Categoria-->: "<<Categoria;
   //qDebug()<<"ingrediente2: "<<ingrediente1;

   if(Categoria!="2" && Categoria!="10"){
   while(query.next()){
       ingredientes+=query.value(10).toString()+"/";
   }
   //qDebug()<<"ingrediente: "<<ingredientes;
   ui->txt_ingredientes->setPlainText(ingredientes);
   }else {
    ui->txt_ingredientes->setPlainText(ingrediente1);
    }

   ui->lbl_nombre_Platillo->setText(nombre);
   ui->lbl_precio->setText(precio);


   //entradas
    if(Categoria=="1"){ruta="C:/Imagenes tamaño pequeño/molletito";QPixmap entrada(ruta);ui->lbl_img_platillo->setPixmap(entrada);
     ui->lbl_categoria->setText("Entradas");

    }

    //parilla
    if(Categoria=="2"){ruta="C:/Imagenes tamaño pequeño/verduras quemadas idk";QPixmap parilla(ruta);ui->lbl_img_platillo->setPixmap(parilla);
    ui->lbl_categoria->setText("Parilla");
    }

    //mar
    if(Categoria=="3"){ruta="C:/Imagenes tamaño pequeño/pasta2";QPixmap mar(ruta);ui->lbl_img_platillo->setPixmap(mar);
    ui->lbl_categoria->setText("Mar");
    }

    //postres
    if(Categoria=="4"){ruta="C:/Imagenes tamaño pequeño/frutas";QPixmap reposteria(ruta);ui->lbl_img_platillo->setPixmap(reposteria);
    ui->lbl_categoria->setText("Reposteria");
    }

    //ensaladas
    if(Categoria=="5"){ruta="C:/Imagenes tamaño pequeño/ensalada";QPixmap ensalada(ruta);ui->lbl_img_platillo->setPixmap(ensalada);
    ui->lbl_categoria->setText("Ensalada");
    }

    //sopas
    if(Categoria=="6"){ruta="C:/Imagenes tamaño pequeño/camaroncio";QPixmap sopa(ruta);ui->lbl_img_platillo->setPixmap(sopa);
    ui->lbl_categoria->setText("Sopas");
    }

    //guarniciones
    if(Categoria=="7"){ruta="C:/Imagenes tamaño pequeño/ensalada2";QPixmap guarnicio(ruta);ui->lbl_img_platillo->setPixmap(guarnicio);
    ui->lbl_categoria->setText("Guarnicion");
    }

    //infantil
    if(Categoria=="8"){ruta="C:/Imagenes tamaño pequeño/potato&burger";QPixmap infantil(ruta);ui->lbl_img_platillo->setPixmap(infantil);
    ui->lbl_categoria->setText("Infantil");
    }
    //cocteles
    if(Categoria=="9"){ruta="C:/Imagenes tamaño pequeño/bebidaNaranja";QPixmap coctel(ruta);ui->lbl_img_platillo->setPixmap(coctel);
    ui->lbl_categoria->setText("Cocteles");
    }
    //vinos
    if(Categoria=="10"){ruta="C:/Imagenes tamaño pequeño/vino";QPixmap vino(ruta);ui->lbl_img_platillo->setPixmap(vino);
    ui->lbl_categoria->setText("Vinos");
    }
}

void confirmacion_comanda::on_btn_aceptar_clicked()
{
  QString cantidad,pedido,pedidoActual,ulti,descripcion,mesa,estado;
  QSqlQuery queryPedido,queryComaPedi,queryUlti,queryUpdate,mesas;
  cantidad=ui->lbl_cantidad_platillo->text();
  descripcion=ui->plainTextEdit->toPlainText();

        /*
           qDebug()<<"cantidad:"<<cantidad;
           qDebug()<<"numero mesa: "<<nummesa;
           qDebug()<<"id comanda desde dialogo: "<<idPlatillos;
           qDebug()<<"Descripcion del platillo"<<descripcion;
          */
   mensajeCorfirmar *hola=new mensajeCorfirmar(ulti,idPlatillos,cantidad,descripcion,nummesa);
   hola->setModal(true);
   hola->show();


}

void confirmacion_comanda::on_btn_menos_clicked()
{
    QString numMen=ui->lbl_cantidad_platillo->text();
    int num=numMen.toInt();
    //qDebug()<<num;
    if(num!=1){
    num=num-1;
    QString numMenos=QString::number(num);
    ui->lbl_cantidad_platillo->setText(numMenos);
    }
}

void confirmacion_comanda::on_btn_mas_clicked()
{
    QString cantidad=ui->lbl_cantidad_platillo->text();
    //qDebug()<<cantidad.toInt();
    int numeroMas;
    numeroMas=cantidad.toInt()+1;
    //qDebug()<<"numn: "<<numeroMas;
    QString numMas=QString::number(numeroMas);
    ui->lbl_cantidad_platillo->setText(numMas);

}
