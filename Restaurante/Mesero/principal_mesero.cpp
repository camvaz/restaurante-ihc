#include "principal_mesero.h"
#include "ui_principal_mesero.h"


Principal_Mesero::Principal_Mesero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal_Mesero)
{
    ui->setupUi(this);
    //METODO QUE CARGA LAS IMAGENES
    //CargarImagenes();
    //idmesa=0;

}


Principal_Mesero::Principal_Mesero(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal_Mesero)
{
    ui->setupUi(this);
    ui->paginas->setCurrentIndex(0);
    identifier = id;
    //METODO QUE CARGA LAS IMAGENES
    CargarImagenes();
    mesasEstado();
    //qDebug()<<"id mesero: "<<identifier.toInt();
    idmesa=0;

    advertencia=new mensaje();

    ui->ticket->setStyleSheet("background-color: #F1F1F1");
    ui->orden->setStyleSheet("background-color: #C92531; border: 1px solid #7C1709; color: white;");
    ui->mesas->setStyleSheet("background-color: #C92531; border: 1px solid #7C1709;");

}


Principal_Mesero::~Principal_Mesero()
{

    delete ui;
}

//Metodo para limpiar los layouts
//usar cuando se crean objetos como en los menus
void clearLayout(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearLayout(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}


//METODO QUE CARGA IMAGENES DEL MENU
void Principal_Mesero::CargarImagenes(){
    QString ruta;
    ruta="C:/Imagenes tamaño pequeño/verduras quemadas idk";QIcon parilla(ruta);ui->parilla->setIcon(parilla);
    ruta="C:/Imagenes tamaño pequeño/ensalada";QIcon ensalada(ruta);ui->ensalada->setIcon(ensalada);
    ruta="C:/Imagenes tamaño pequeño/pasta2";QIcon mar(ruta);ui->mar->setIcon(mar);
    ruta="C:/Imagenes tamaño pequeño/camaroncio";QIcon sopa(ruta);ui->sopa->setIcon(sopa);
    ruta="C:/Imagenes tamaño pequeño/molletito";QIcon entrada(ruta);ui->entrada->setIcon(entrada);
    ruta="C:/Imagenes tamaño pequeño/ensalada2";QIcon guarnicio(ruta);ui->guarnicion->setIcon(guarnicio);
    ruta="C:/Imagenes tamaño pequeño/frutas";QIcon reposteria(ruta);ui->reposteria->setIcon(reposteria);
    ruta="C:/Imagenes tamaño pequeño/potato&burger";QIcon infantil(ruta);ui->infantil->setIcon(infantil);

    //BEBIDAS
    ruta="C:/Imagenes tamaño pequeño/bebidaNaranja";QIcon cocte(ruta);ui->coctel->setIcon(cocte);
    ruta="C:/Imagenes tamaño pequeño/vino";QIcon vino(ruta);ui->vino->setIcon(vino);

    //MESAS
    QString mesa;
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_1(mesa);ui->mesa_1->setIcon(mesas_1);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_2(mesa);ui->mesa_2->setIcon(mesas_2);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_3(mesa);ui->mesa_3->setIcon(mesas_3);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_4(mesa);ui->mesa_4->setIcon(mesas_4);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_5(mesa);ui->mesa_5->setIcon(mesas_5);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_6(mesa);ui->mesa_6->setIcon(mesas_6);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_7(mesa);ui->mesa_7->setIcon(mesas_7);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_8(mesa);ui->mesa_8->setIcon(mesas_8);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_9(mesa);ui->mesa_9->setIcon(mesas_9);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_10(mesa);ui->mesa_10->setIcon(mesas_10);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_11(mesa);ui->mesa_11->setIcon(mesas_11);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_12(mesa);ui->mesa_12->setIcon(mesas_12);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_13(mesa);ui->mesa_13->setIcon(mesas_13);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_14(mesa);ui->mesa_14->setIcon(mesas_14);
     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_15(mesa);ui->mesa_15->setIcon(mesas_15);

     //TIPOS DE VINOS

     QString vinos;
     vinos="C:/Imagenes tamaño pequeño/argentina";QIcon boton_argentinos(vinos);ui->argentinos->setIcon(boton_argentinos);
     vinos="C:/Imagenes tamaño pequeño/mexico";QIcon boton_mexicanos(vinos);ui->mexicanos->setIcon(boton_mexicanos);
     vinos="C:/Imagenes tamaño pequeño/internacional";QIcon boton_internacionales(vinos);ui->otro_paises->setIcon(boton_internacionales);
     vinos="C:/Imagenes tamaño pequeño/chile";QIcon boton_chilesnos(vinos);ui->chilenos->setIcon(boton_chilesnos);
     vinos="C:/Imagenes tamaño pequeño/vinoEspumoso";QIcon boton_espumoso(vinos);ui->espumuso->setIcon(boton_espumoso);
     vinos="C:/Imagenes tamaño pequeño/vinoRosado";QIcon boton_rosado(vinos);ui->rosado->setIcon(boton_rosado);
     vinos="C:/Imagenes tamaño pequeño/vinoBlanco";QIcon boton_blanco(vinos);ui->blanco->setIcon(boton_blanco);
     vinos="C:/Imagenes tamaño pequeño/spain";QIcon boton_spain(vinos);ui->espanol->setIcon(boton_spain);
     vinos="C:/Imagenes tamaño pequeño/vinoPostre";QIcon boton_vinpostres(vinos);ui->postre->setIcon(boton_vinpostres);
     vinos="C:/Imagenes tamaño pequeño/vinoBlanco-Mexicano";QIcon boton_mexblaco(vinos);ui->blanco_mexi->setIcon(boton_mexblaco);

     //BOTONES
     QString botones;
     botones="C:/Imagenes tamaño pequeño/bebidas";QIcon boton_bebidas(botones);ui->bebidas->setIcon(boton_bebidas);
     botones="C:/Imagenes tamaño pequeño/Buscar Mesas";QIcon boton_menu(botones);ui->mesas->setIcon(boton_menu);
     botones="C:/Imagenes tamaño pequeño/Platillos";QIcon boton_comida(botones);ui->comanda->setIcon(boton_comida);
     botones="C:/Imagenes tamaño pequeño/Ordenes";QIcon boton_comanda(botones);ui->cuenta->setIcon(boton_comanda);

     QString pedido;
     pedido="C:/Imagenes tamaño pequeño/pedido";
     QPixmap pedidos(pedido);

      ui->mesa_1->setEnabled(false);ui->mesa_2->setEnabled(false);ui->mesa_3->setEnabled(false);ui->mesa_4->setEnabled(false);
      ui->mesa_5->setEnabled(false);ui->mesa_6->setEnabled(false);ui->mesa_7->setEnabled(false);ui->mesa_8->setEnabled(false);
      ui->mesa_9->setEnabled(false);ui->mesa_10->setEnabled(false);ui->mesa_11->setEnabled(false);ui->mesa_12->setEnabled(false);
      ui->mesa_13->setEnabled(false);ui->mesa_14->setEnabled(false);ui->mesa_15->setEnabled(false);
}

void Principal_Mesero::mesasEstado(){

  QString mesa,estado,imagen;
  QSqlQuery mesas;
    for(int i=1; i<=15; i++){
        QString numMesa = QString::number(i);
        mesa="select *from mesa where idMesa='"+numMesa+"' and Usuario_idUsuario='"+identifier+"'";
       // qDebug()<<mesa;
        mesas.exec(mesa);
        mesas.first();
        mesas.next();
        estado=mesas.value(3).toString();
        switch (i) {
        case 1:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_1->setIcon(mesas_1);
               ui->mesa_1->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_1(imagen);
                ui->mesa_1->setIcon(mesas_1);
                ui->mesa_1->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucuia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_1(imagen);
                ui->mesa_1->setIcon(mesas_1);
                 ui->mesa_1->setEnabled(true);
             }
            break;
        case 2:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_2->setIcon(mesas_1);
               ui->mesa_2->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_2->setIcon(mesas_2);
                 ui->mesa_2->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_2->setIcon(mesas_2);
                 ui->mesa_2->setEnabled(true);
             }


            break;
        case 3:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_3->setIcon(mesas_1);
               ui->mesa_3->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_3->setIcon(mesas_2);
                 ui->mesa_3->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_3->setIcon(mesas_2);
                 ui->mesa_3->setEnabled(true);
             }

            break;

        case 4:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_4->setIcon(mesas_1);
              ui->mesa_4->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_4->setIcon(mesas_2);
                 ui->mesa_4->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_4->setIcon(mesas_2);
                 ui->mesa_4->setEnabled(true);
             }
            break;
        case 5:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_5->setIcon(mesas_1);
               ui->mesa_5->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_5->setIcon(mesas_2);
                 ui->mesa_5->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_5->setIcon(mesas_2);
                ui->mesa_5->setEnabled(true);
             }
            break;
        case 6:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_6->setIcon(mesas_1);
               ui->mesa_6->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_6->setIcon(mesas_2);
                ui->mesa_6->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_6->setIcon(mesas_2);
                 ui->mesa_6->setEnabled(true);
             }
            break;
        case 7:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_7->setIcon(mesas_1);
               ui->mesa_7->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_7->setIcon(mesas_2);
             ui->mesa_7->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_7->setIcon(mesas_2);
                 ui->mesa_7->setEnabled(true);
             }
            break;
        case 8:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_8->setIcon(mesas_1);
               ui->mesa_8->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_8->setIcon(mesas_2);
                 ui->mesa_8->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_8->setIcon(mesas_2);
                 ui->mesa_8->setEnabled(true);
             }
            break;
        case 9:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_9->setIcon(mesas_1);
               ui->mesa_9->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_9->setIcon(mesas_2);
                 ui->mesa_9->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_9->setIcon(mesas_2);
                 ui->mesa_9->setEnabled(true);
             }
            break;
        case 10:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_10->setIcon(mesas_1);
               ui->mesa_10->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_10->setIcon(mesas_2);
             ui->mesa_10->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_10->setIcon(mesas_2);
                 ui->mesa_10->setEnabled(true);
             }
            break;
        case 11:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_11->setIcon(mesas_1);
               ui->mesa_11->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_11->setIcon(mesas_2);
                 ui->mesa_11->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_11->setIcon(mesas_2);
                 ui->mesa_11->setEnabled(true);
             }
            break;
        case 12:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_12->setIcon(mesas_1);
               ui->mesa_12->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_12->setIcon(mesas_2);
                 ui->mesa_12->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_12->setIcon(mesas_2);
                 ui->mesa_12->setEnabled(true);
             }
            break;
        case 13:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_13->setIcon(mesas_1);
               ui->mesa_13->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
               ui->mesa_13->setIcon(mesas_2);
                 ui->mesa_13->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_13->setIcon(mesas_2);
                 ui->mesa_13->setEnabled(true);
             }
            break;
        case 14:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_14->setIcon(mesas_1);
               ui->mesa_14->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_14->setIcon(mesas_2);
                 ui->mesa_14->setEnabled(true);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_14->setIcon(mesas_2);
                 ui->mesa_14->setEnabled(true);
             }
            break;
        case 15:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_15->setIcon(mesas_1);
               ui->mesa_15->setEnabled(true);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_15->setIcon(mesas_2);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_15->setIcon(mesas_2);
                 ui->mesa_15->setEnabled(true);
             }
            break;

        }

    }

}



//SLOT DE PLATILLOS
void Principal_Mesero::on_parilla_clicked()
{
    clearLayout(ui->menuParrila1);
    ui->paginas->setCurrentIndex(2);

    //joaquin codigo
    QString parrilla;
    QSqlQuery parrilla1;
    parrilla="select *from Platillos where idCategoriaMenu=2;";
    parrilla1.exec(parrilla);
    int Cr=0;
    while(parrilla1.next())
    {
        //QLabel *espacio1=new QLabel();
        //espacio1->setFixedSize(QSize(10,10));
        //espacio1->setStyleSheet("background-color:rgb(201, 37, 49)");

        //QLabel *espacio2=new QLabel();
        //espacio2->setFixedSize(QSize(10,10));
        //espacio2->setStyleSheet("background-color:rgb(201, 37, 49)");

        //QLabel *espacio3=new QLabel();
        //espacio3->setFixedSize(QSize(10,10));
        //espacio3->setStyleSheet("background-color:rgb(201, 37, 49)");

        //QLabel *espacio4=new QLabel();
        //espacio4->setFixedSize(QSize(10,10));
        //espacio4->setStyleSheet("background-color:rgb(201, 37, 49)");

       tarjetaPlatillo *parilla=new tarjetaPlatillo();
       parilla->llenar(parrilla1.value(1).toString(),parrilla1.value(2).toString(),parrilla1.value(0).toString(),numMesa,"2");
       //ui->menuParrila1->addWidget(espacio1,Cr,0);
       ui->menuParrila1->addWidget(parilla, Cr, 1, Qt::AlignTop);
         //seguna columna
        if(!parrilla1.next())
        {

        }
        else{

        //ui->menuParrila1->addWidget(espacio2,Cr,2);
        tarjetaPlatillo *parilla=new tarjetaPlatillo();
        parilla->llenar(parrilla1.value(1).toString(),parrilla1.value(2).toString(),parrilla1.value(0).toString(),numMesa,"2");
        ui->menuParrila1->addWidget(parilla,Cr,2, Qt::AlignTop);


        //tercera columna
        if(!parrilla1.next())
        {
            QLabel *espacio=new QLabel();
            espacio->setFixedSize(QSize(150,10));
            //ui->menuParrila1->addWidget(espacio,Cr,2);
            Cr=Cr+3;
        }
        else{
        //ui->menuParrila1->addWidget(espacio3,Cr,4);
        tarjetaPlatillo *parilla=new tarjetaPlatillo();
        parilla->llenar(parrilla1.value(1).toString(),parrilla1.value(2).toString(),parrilla1.value(0).toString(),numMesa,"2");
        ui->menuParrila1->addWidget(parilla,Cr,3, Qt::AlignTop);

        if(!parrilla1.next())
        {
            QLabel *espacio=new QLabel();
            espacio->setFixedSize(QSize(150,10));
            //ui->menuParrila1->addWidget(espacio,Cr,3);
            Cr=Cr+4;
        }
        else{
        //ui->menuParrila1->addWidget(espacio4,Cr,6);
                tarjetaPlatillo *parilla=new tarjetaPlatillo();
                parilla->llenar(parrilla1.value(1).toString(),parrilla1.value(2).toString(),parrilla1.value(0).toString(),numMesa,"2");
                ui->menuParrila1->addWidget(parilla,Cr,4, Qt::AlignTop);
                Cr=Cr+5;
         }
        }
      }
    }
}

void Principal_Mesero::on_ensalada_clicked()
{
    clearLayout(ui->menuEnsalada);
    ui->paginas->setCurrentIndex(3);

    //joaquin codigo

    QString ensalada;
    QSqlQuery ensalada1;
    ensalada="select *from Platillos where idCategoriaMenu=5;";
    ensalada1.exec(ensalada);

    int Cr=0;

    while(ensalada1.next())
    {
         //espacio->setStyleSheet("background-color:rgb(201, 37, 49)");

         tarjetaPlatillo *ensalada=new tarjetaPlatillo();
         ensalada->llenar(ensalada1.value(1).toString(),ensalada1.value(2).toString(),ensalada1.value(0).toString(),numMesa,"5");
         ui->menuEnsalada->addWidget(ensalada,Cr,0, Qt::AlignTop);

        //seguna columna
        if(!ensalada1.next())
        {

        }
        else {

        tarjetaPlatillo *ensalada=new tarjetaPlatillo();
        ensalada->llenar(ensalada1.value(1).toString(),ensalada1.value(2).toString(),ensalada1.value(0).toString(),numMesa,"5");
        ui->menuEnsalada->addWidget(ensalada,Cr,1, Qt::AlignTop);

        if(!ensalada1.next())
        {
            QLabel *espacio=new QLabel();
            espacio->setFixedSize(QSize(150,10));
            ui->menuEnsalada->addWidget(espacio,Cr,2, Qt::AlignTop);
            Cr=Cr+3;
        }
        else
            {


        tarjetaPlatillo *ensalada=new tarjetaPlatillo();
        ensalada->llenar(ensalada1.value(1).toString(),ensalada1.value(2).toString(),ensalada1.value(0).toString(),numMesa,"5");
        ui->menuEnsalada->addWidget(ensalada,Cr,2);

        if(!ensalada1.next())
        {
            QLabel *espacio=new QLabel();
            espacio->setFixedSize(QSize(150,10));
            ui->menuEnsalada->addWidget(espacio,Cr,3, Qt::AlignTop);
            Cr=Cr+4;
        }
        else
               {

                tarjetaPlatillo *ensalada=new tarjetaPlatillo();
                ensalada->llenar(ensalada1.value(1).toString(),ensalada1.value(2).toString(),ensalada1.value(0).toString(),numMesa,"5");
                ui->menuEnsalada->addWidget(ensalada,Cr,3, Qt::AlignTop);

                Cr=Cr+5;

               }


            }


        }
    }


}

void Principal_Mesero::on_mar_clicked()
{
    clearLayout(ui->menuMar);
    ui->paginas->setCurrentIndex(4);

    //joaquin codigo

    QString mar;
    QSqlQuery mar1;
    mar="select *from Platillos where idCategoriaMenu=3;";
    mar1.exec(mar);

    int Cr=0;

    while(mar1.next())
    {

        tarjetaPlatillo *una=new tarjetaPlatillo();
        una->llenar(mar1.value(1).toString(),mar1.value(2).toString(),mar1.value(0).toString(),numMesa,"3");
        ui->menuMar->addWidget(una,Cr,0, Qt::AlignTop);


        //seguna columna
        if(!mar1.next())
        {

        }
        else {


        tarjetaPlatillo *dos=new tarjetaPlatillo();
        dos->llenar(mar1.value(1).toString(),mar1.value(2).toString(),mar1.value(0).toString(),numMesa,"3");
        ui->menuMar->addWidget(dos,Cr,1, Qt::AlignTop);


        if(!mar1.next())
        {
            QLabel *espacio=new QLabel();
            espacio->setFixedSize(QSize(150,10));
             ui->menuMar->addWidget(espacio,Cr,2, Qt::AlignTop);
            Cr=Cr+3;
        }
        else {
        tarjetaPlatillo *dos=new tarjetaPlatillo();
        dos->llenar(mar1.value(1).toString(),mar1.value(2).toString(),mar1.value(0).toString(),numMesa,"3");
        ui->menuMar->addWidget(dos,Cr,2, Qt::AlignTop);

        if(!mar1.next())
        {
            QLabel *espacio=new QLabel();
            espacio->setFixedSize(QSize(150,10));
             ui->menuMar->addWidget(espacio,Cr,3, Qt::AlignTop);
            Cr=Cr+4;
        }
        else {

        tarjetaPlatillo *dos=new tarjetaPlatillo();
        dos->llenar(mar1.value(1).toString(),mar1.value(2).toString(),mar1.value(0).toString(),numMesa,"3");
        ui->menuMar->addWidget(dos,Cr,3, Qt::AlignTop);

        Cr=Cr+5;

        }

        }

        }
    }

}

void Principal_Mesero::on_sopa_clicked()
{
    clearLayout(ui->menuSopa);
    ui->paginas->setCurrentIndex(5);
    //joaquin codigo

    QString sopa;
    QSqlQuery sopa1;
    sopa="select *from Platillos where idCategoriaMenu=6;";
    sopa1.exec(sopa);

    int Cr=0;

    while(sopa1.next())
    {

        tarjetaPlatillo *sopa=new tarjetaPlatillo();
        sopa->llenar(sopa1.value(1).toString(),sopa1.value(2).toString(),sopa1.value(0).toString(),numMesa,"6");
        ui->menuSopa->addWidget(sopa,Cr,0, Qt::AlignTop);
        //ui->menuSopa->addWidget(espacio,Cr,1);

        //seguna columna
        if(!sopa1.next())
        {

        }
        else {

        tarjetaPlatillo *sopa=new tarjetaPlatillo();
        sopa->llenar(sopa1.value(1).toString(),sopa1.value(2).toString(),sopa1.value(0).toString(),numMesa,"6");
        ui->menuSopa->addWidget(sopa,Cr,1, Qt::AlignTop);
   // Cr=Cr+2;
        if(!sopa1.next())
        {
            /*QLabel *espacio=new QLabel();
            espacio->setFixedSize(QSize(150,10));
             ui->menuMar->addWidget(espacio,Cr,2, Qt::AlignTop);
        */

        }
        else {


        tarjetaPlatillo *sopa=new tarjetaPlatillo();
        sopa->llenar(sopa1.value(1).toString(),sopa1.value(2).toString(),sopa1.value(0).toString(),numMesa,"6");
        ui->menuSopa->addWidget(sopa,Cr,2, Qt::AlignTop);
       //  Cr=Cr+3;
        if(!sopa1.next())
        {
           /* QLabel *espacio=new QLabel();
            espacio->setFixedSize(QSize(150,10));
             ui->menuMar->addWidget(espacio,Cr,3, Qt::AlignTop);
             */

        }
        else {


        tarjetaPlatillo *sopa=new tarjetaPlatillo();
        sopa->llenar(sopa1.value(1).toString(),sopa1.value(2).toString(),sopa1.value(0).toString(),numMesa,"6");
        ui->menuSopa->addWidget(sopa,Cr,3, Qt::AlignTop);

           }

        }

      }
      Cr=1;
    }


}

void Principal_Mesero::on_entrada_clicked(){

     clearLayout(ui->menuEntradas);
     ui->paginas->setCurrentIndex(6);

     QString entradas;             QSqlQuery QslEntradas;
     entradas="select *from Platillos where idCategoriaMenu=1;";
     QslEntradas.exec(entradas);
     int Cr=0;

     while(QslEntradas.next())
     {


         tarjetaPlatillo *entrada=new tarjetaPlatillo();
         entrada->llenar(QslEntradas.value(1).toString(),QslEntradas.value(2).toString(),QslEntradas.value(0).toString(),numMesa,"1");
         ui->menuEntradas->addWidget(entrada,Cr,0, Qt::AlignTop);


         if(!QslEntradas.next())
     {


       }else {
        //seguna columna
             tarjetaPlatillo *entrada=new tarjetaPlatillo();
             entrada->llenar(QslEntradas.value(1).toString(),QslEntradas.value(2).toString(),QslEntradas.value(0).toString(),numMesa,"1");
             ui->menuEntradas->addWidget(entrada,Cr,1, Qt::AlignTop);



            if(!QslEntradas.next())
        {
                QLabel *espacio=new QLabel();
                espacio->setFixedSize(QSize(150,10));
                ui->menuEntradas->addWidget(espacio,Cr,2, Qt::AlignTop);
                 Cr=Cr+3;
          }else {
           //seguna columna
                tarjetaPlatillo *entrada=new tarjetaPlatillo();
                entrada->llenar(QslEntradas.value(1).toString(),QslEntradas.value(2).toString(),QslEntradas.value(0).toString(),numMesa,"1");
                ui->menuEntradas->addWidget(entrada,Cr,2, Qt::AlignTop);


                if(!QslEntradas.next())
            {
                    QLabel *espacio=new QLabel();
                    espacio->setFixedSize(QSize(150,10));
                    ui->menuEntradas->addWidget(espacio,Cr,3, Qt::AlignTop);
                     Cr=Cr+4;
              }else {
               //seguna columna


                    tarjetaPlatillo *entrada=new tarjetaPlatillo();
                    entrada->llenar(QslEntradas.value(1).toString(),QslEntradas.value(2).toString(),QslEntradas.value(0).toString(),numMesa,"1");
                    ui->menuEntradas->addWidget(entrada,Cr,3, Qt::AlignTop);
                   Cr=Cr+5;
                   }

               }
            }

     }

}

void Principal_Mesero::on_guarnicion_clicked(){
    ui->paginas->setCurrentIndex(7);
    clearLayout(ui->menuSopa);
    QString guarni;             QSqlQuery QslGuarni;
    guarni="select *from Platillos where idCategoriaMenu=7;";
    QslGuarni.exec(guarni);
    int Cr=0;

    while (QslGuarni.next())
  {

        tarjetaPlatillo *guarnicion=new tarjetaPlatillo();
        guarnicion->llenar(QslGuarni.value(1).toString(),QslGuarni.value(2).toString(),QslGuarni.value(0).toString(),numMesa,"7");
        ui->menuGuarnicion->addWidget(guarnicion,Cr,0, Qt::AlignTop);


        //seguna columna
        if(!QslGuarni.next())
        {

        }
        else {

            tarjetaPlatillo *guarnicion=new tarjetaPlatillo();
            guarnicion->llenar(QslGuarni.value(1).toString(),QslGuarni.value(2).toString(),QslGuarni.value(0).toString(),numMesa,"7");
            ui->menuGuarnicion->addWidget(guarnicion,Cr,1, Qt::AlignTop);


            if(!QslGuarni.next())
            {
                QLabel *espacio=new QLabel();
                espacio->setFixedSize(QSize(150,10));
                ui->menuGuarnicion->addWidget(espacio,Cr,2, Qt::AlignTop);
                Cr=Cr+3;
            }
            else {


                tarjetaPlatillo *guarnicion=new tarjetaPlatillo();
                guarnicion->llenar(QslGuarni.value(1).toString(),QslGuarni.value(2).toString(),QslGuarni.value(0).toString(),numMesa,"7");
                ui->menuGuarnicion->addWidget(guarnicion,Cr,2, Qt::AlignTop);


                if(!QslGuarni.next())
                {
                    QLabel *espacio=new QLabel();
                    espacio->setFixedSize(QSize(150,10));
                    ui->menuGuarnicion->addWidget(espacio,Cr,3, Qt::AlignTop);
                    Cr=Cr+4;
                }
                else {

                    tarjetaPlatillo *guarnicion=new tarjetaPlatillo();
                    guarnicion->llenar(QslGuarni.value(1).toString(),QslGuarni.value(2).toString(),QslGuarni.value(0).toString(),numMesa,"7");
                    ui->menuGuarnicion->addWidget(guarnicion,Cr,3, Qt::AlignTop);

                    Cr=Cr+5;

                }

            }
        }

    }

}

void Principal_Mesero::on_reposteria_clicked(){
    ui->paginas->setCurrentIndex(8);
    clearLayout(ui->menuReposteria);

    QString postres;             QSqlQuery QslPostres;
    postres="select *from Platillos where idCategoriaMenu=4;";
    QslPostres.exec(postres);
    int Cr=0;

    while(QslPostres.next()){


        tarjetaPlatillo *postres=new tarjetaPlatillo();
        postres->llenar(QslPostres.value(1).toString(),QslPostres.value(2).toString(),QslPostres.value(0).toString(),numMesa,"4");
        ui->menuReposteria->addWidget(postres,Cr,0, Qt::AlignTop);



        if(!QslPostres.next()){

      }else {
       //seguna columna


            tarjetaPlatillo *postres=new tarjetaPlatillo();
            postres->llenar(QslPostres.value(1).toString(),QslPostres.value(2).toString(),QslPostres.value(0).toString(),numMesa,"4");
            ui->menuReposteria->addWidget(postres,Cr,1, Qt::AlignTop);


            if(!QslPostres.next()){


                QLabel *espacio=new QLabel();
                espacio->setFixedSize(QSize(150,10));
                 //ui->menuReposteria->addWidget(espacio,Cr,2, Qt::AlignTop);

                Cr=Cr+3;

          }else {
           //seguna columna

                tarjetaPlatillo *postres=new tarjetaPlatillo();
                postres->llenar(QslPostres.value(1).toString(),QslPostres.value(2).toString(),QslPostres.value(0).toString(),numMesa,"4");
                ui->menuReposteria->addWidget(postres,Cr,2, Qt::AlignTop);



                if(!QslPostres.next()){


                    QLabel *espacio=new QLabel();
                    espacio->setFixedSize(QSize(150,10));
                     //ui->menuReposteria->addWidget(espacio,Cr,3, Qt::AlignTop);

                    Cr=Cr+4;

              }else {
               //seguna columna
                    tarjetaPlatillo *postres=new tarjetaPlatillo();
                    postres->llenar(QslPostres.value(1).toString(),QslPostres.value(2).toString(),QslPostres.value(0).toString(),numMesa,"4");
                    ui->menuReposteria->addWidget(postres,Cr,3, Qt::AlignTop);

                    Cr=Cr+5;
                   }

               }
        }

    }

}

void Principal_Mesero::on_infantil_clicked(){

    clearLayout(ui->menuInfantil);
    ui->paginas->setCurrentIndex(9);
    QString infantil;             QSqlQuery QslInfantil;
    infantil="select *from Platillos where idCategoriaMenu=8;";
    QslInfantil.exec(infantil);
    int Cr=0;

    while (QslInfantil.next()) {


        tarjetaPlatillo *infatil=new tarjetaPlatillo();
        infatil->llenar(QslInfantil.value(1).toString(),QslInfantil.value(2).toString(),QslInfantil.value(0).toString(),numMesa,"8");
        ui->menuInfantil->addWidget(infatil,Cr,0, Qt::AlignTop);

        //seguna columna
        if(!QslInfantil.next())
        {

        }
        else {


            tarjetaPlatillo *infatil=new tarjetaPlatillo();
            infatil->llenar(QslInfantil.value(1).toString(),QslInfantil.value(2).toString(),QslInfantil.value(0).toString(),numMesa,"8");
            ui->menuInfantil->addWidget(infatil,Cr,1, Qt::AlignTop);



         if(!QslInfantil.next())
         {

             QLabel *espacio=new QLabel();
             espacio->setFixedSize(QSize(150,10));

             //ui->menuInfantil->addWidget(espacio,Cr,2, Qt::AlignTop);
             Cr=Cr+3;
         }
         else {


             tarjetaPlatillo *infatil=new tarjetaPlatillo();
             infatil->llenar(QslInfantil.value(1).toString(),QslInfantil.value(2).toString(),QslInfantil.value(0).toString(),numMesa,"8");
             ui->menuInfantil->addWidget(infatil,Cr,2, Qt::AlignTop);


             if(!QslInfantil.next())
             {

                 QLabel *espacio=new QLabel();
                 espacio->setFixedSize(QSize(150,10));

                 //ui->menuInfantil->addWidget(espacio,Cr,3, Qt::AlignTop);
                 Cr=Cr+4;
             }
             else {

                 tarjetaPlatillo *infatil=new tarjetaPlatillo();
                 infatil->llenar(QslInfantil.value(1).toString(),QslInfantil.value(2).toString(),QslInfantil.value(0).toString(),numMesa,"8");
                 ui->menuInfantil->addWidget(infatil,Cr,3, Qt::AlignTop);
                Cr=Cr+5;


             }

         }

        }


    }


}

void Principal_Mesero::on_coctel_clicked(){
    ui->paginas->setCurrentIndex(11);
    clearLayout(ui->menuCoteles);
    QString coctel;             QSqlQuery QslCoctel;
    coctel="select *from Cocteles";
    QslCoctel.exec(coctel);
    int Cr=0;
    int cr=0;

    while (QslCoctel.next()) {
     if(QslCoctel.value(4).toInt()==1){

         //qDebug()<<"con alcohol";


        QLabel *espacio=new QLabel();
        espacio->setFixedSize(QSize(150,10));
        //espacio->setStyleSheet("background-color:rgb(201, 37, 49)");


        tarjetaPlatillo *coctel=new tarjetaPlatillo();
        coctel->llenar(QslCoctel.value(1).toString(),QslCoctel.value(2).toString(),QslCoctel.value(0).toString(),numMesa,"9");
        ui->menuCoteles->addWidget(coctel,Cr,0, Qt::AlignTop);
        //ui->menuCoteles->addWidget(espacio,Cr,1, Qt::AlignTop);


    }else {

            tarjetaPlatillo *coctel=new tarjetaPlatillo();
            coctel->llenar(QslCoctel.value(1).toString(),QslCoctel.value(2).toString(),QslCoctel.value(0).toString(),numMesa,"9");
            ui->menuCoteles->addWidget(coctel,cr,2, Qt::AlignTop);

            cr++;
         }
     Cr++;
      }

    }


void Principal_Mesero::on_vino_clicked()
{
    ui->paginas->setCurrentIndex(12);

}

//SLOT DE MENU DE NAVEGACION
void Principal_Mesero::on_comanda_clicked()
{
    //aqui le movi para que me dejara usarla 0 por 1 y viceversa
    //agrego joaquin
    clearLayout(ui->menuParrila1);
    clearLayout(ui->menuMar);
    clearLayout(ui->menuSopa);
    clearLayout(ui->menuEnsalada);
    clearLayout(ui->menuEntradas);
    clearLayout(ui->menuInfantil);
    clearLayout(ui->menuGuarnicion);
    clearLayout(ui->menuReposteria);
    //agrego joaquin
    if(idmesa==0){
        advertencia->setModal(true);
        advertencia->show();
     qDebug()<<"seleciona una mesa";
    }if(idmesa==1){
        ui->comanda->setStyleSheet("background-color:rgb(201, 37, 49)");
         ui->bebidas->setStyleSheet("background-color:#1d1d1d");
         ui->mesas->setStyleSheet("background-color:#1d1d1d");
          ui->cuenta->setStyleSheet("background-color:#1d1d1d");
        ui->paginas->setCurrentIndex(1);
    }

}

void Principal_Mesero::on_mesas_clicked(){
    mesasEstado();
    ui->paginas->setCurrentIndex(0);
    ui->comanda->setStyleSheet("background-color:#1d1d1d");
    ui->bebidas->setStyleSheet("background-color:#1d1d1d");
    ui->cuenta->setStyleSheet("background-color:#1d1d1d");
    ui->mesas->setStyleSheet("background-color:rgb(201, 37, 49)");
}

void Principal_Mesero::on_bebidas_clicked()
{ 
    //codigo agregado joaquin
    clearLayout(ui->menuVinos);
     clearLayout(ui->menuCoteles);
     if(idmesa==0){
         advertencia->setModal(true);
         advertencia->show();
      qDebug()<<"seleciona una mesa";

     }if(idmesa==1){
         ui->comanda->setStyleSheet("background-color:#1d1d1d");
         ui->bebidas->setStyleSheet("background-color:rgb(201, 37, 49)");
         ui->mesas->setStyleSheet("background-color:#1d1d1d");
         ui->cuenta->setStyleSheet("background-color:#1d1d1d");
         ui->paginas->setCurrentIndex(10);
     }

}


void Principal_Mesero::EliminarPlatillo(QString id){

    QString eliminar;
    QSqlQuery QsqlEliminar;

    eliminar="DELETE FROM Comanda_has_Platillo where idComanda='"+id+"'";

    QsqlEliminar.exec(eliminar);
    QsqlEliminar.next();
    clearLayout(ui->pedidos);
    mostrarPedido();
}

void Principal_Mesero::mostrarPedido(){

    qDebug()<<"numero de mesa: "<<numMesa;
     ui->numMesa->setText(numMesa);

    //clearLayout(ui->pedidos);
    QString busqueda,fecha,cantidad,nombre,numPedido,id,icono,categoria,checkCategoria,estadoPlatillo,idComanda;
    QSqlQuery resultado,querycantidad,querycategoria,Querypedido;
    int row=0;

   checkCategoria="select * from Pedido as p inner join Comanda_has_Platillo as cp on "
                  "p.idPedido=cp.idPedido where p.Mesa_idMesa='"+numMesa+"'";

   Querypedido.exec(checkCategoria);

   while(Querypedido.next()){

       id=Querypedido.value(7).toString();
       categoria=Querypedido.value(10).toString();

       qDebug()<<"id del platillo: "<<id<<" -- "<<"categoria del platillo: "<<categoria;

       if(categoria<="8" && categoria!="10" && categoria!="9")
       {
           busqueda="select p.idPedido,pl.Nombre,p.fecha,cp.cantidad,cp.estadoPlatillo,cp.idComanda from Pedido as p inner join Comanda_has_Platillo as cp on p.idPedido=cp.idPedido"
                    " inner join Platillos as pl on pl.idPlatillo=cp.idPlatillo where p.Mesa_idMesa='"+numMesa+"' and p.estado='1' and pl.idPlatillo='"+id+"'";

          resultado.exec(busqueda);
          resultado.next();
          qDebug()<<"platillo";

          numPedido=resultado.value(0).toString();
          nombre=resultado.value(1).toString();
          cantidad=resultado.value(3).toString();
          fecha=resultado.value(2).toString();
          estadoPlatillo=resultado.value(4).toString();
          idComanda=resultado.value(5).toString();

          qDebug()<<"idcomanda: "<<idComanda;
          qDebug()<<"numero de pedido: "<<numPedido;
          qDebug()<<"nombre del platillo: "<<nombre;
          qDebug()<<"cantidad: "<<cantidad;
          qDebug()<<"fecha: "<<fecha;

          ui->fecha->setText(fecha);
          ui->numComanda->setText(numPedido);


          QFont f( "MS Shell Dlg 2", 11, QFont::Normal);

          QLabel *nomPlatillo=new QLabel;
          nomPlatillo->setText(nombre);
          nomPlatillo->setStyleSheet("color: white");
          nomPlatillo->setFont(f);

          QLabel *Cantidad=new QLabel;
          Cantidad->setText("x"+cantidad);
          Cantidad->setAlignment(Qt::AlignRight);
          Cantidad->setStyleSheet("color: white");
          Cantidad->setFont(f);
      row++;
      if(estadoPlatillo=="0")
      {
          QPushButton *cancelar= new QPushButton;
          icono="C:/Imagenes tamaño pequeño/cross";
          QIcon canc(icono);
          cancelar->setIcon(canc);
          cancelar->setMaximumWidth(50);
          cancelar->setMinimumWidth(50);
          cancelar->setIconSize(QSize(15,15));
          cancelar->setStyleSheet("background-color: transparent");
          ui->pedidos->addWidget(cancelar,row,3,Qt::AlignTop);
          connect(cancelar,&QPushButton::clicked,[=](){emit EliminarPlatillo(idComanda);});
      }
          ui->pedidos->addWidget(nomPlatillo,row,0,Qt::AlignTop);
          ui->pedidos->addWidget(Cantidad,row,2,Qt::AlignTop);


       }if(categoria=="9"){

           qDebug()<<"es un coctel";

           busqueda="select c.Nombre,cp.cantidad,cp.estadoPlatillo,cp.idComanda from Pedido as p inner join "
                    "Comanda_has_Platillo as cp on p.idPedido=cp.idPedido inner"
                    " join Cocteles as c on cp.idPlatillo=c.idBebida where p.Mesa_idMesa='"+numMesa+"' and p.estado='1' and cp.categoria='9' and c.idBebida='"+id+"'";
           resultado.exec(busqueda);
           resultado.next();

           nombre=resultado.value(0).toString();
           cantidad=resultado.value(1).toString();
           estadoPlatillo=resultado.value(2).toString();
           idComanda=resultado.value(3).toString();

           qDebug()<<"idcomanda: "<<idComanda;
           qDebug()<<"nombre del platillo: "<<nombre;
          qDebug()<<"cantidad: "<<cantidad;
           QFont f( "MS Shell Dlg 2", 11, QFont::Normal);

           QLabel *nomPlatillo=new QLabel;
           nomPlatillo->setText(nombre);
           nomPlatillo->setStyleSheet("color: white");
           nomPlatillo->setFont(f);

           QLabel *Cantidad=new QLabel;
           Cantidad->setText("x"+cantidad);
           Cantidad->setAlignment(Qt::AlignRight);
           Cantidad->setStyleSheet("color: white");
           Cantidad->setFont(f);

       if(estadoPlatillo=="0")
       {
           QPushButton *cancelar= new QPushButton;
           icono="C:/Imagenes tamaño pequeño/cross";
           QIcon canc(icono);
           cancelar->setIcon(canc);
           cancelar->setMaximumWidth(50);
           cancelar->setMinimumWidth(50);
           cancelar->setIconSize(QSize(15,15));
           cancelar->setStyleSheet("background-color: transparent");
           ui->pedidos->addWidget(cancelar,row,3,Qt::AlignTop);
           connect(cancelar,&QPushButton::clicked,[=](){emit EliminarPlatillo(idComanda);});
       }
           ui->pedidos->addWidget(nomPlatillo,row,0,Qt::AlignTop);
           ui->pedidos->addWidget(Cantidad,row,2,Qt::AlignTop);


       } if(categoria=="10"){
           qDebug()<<"es un vino";

  busqueda="select v.Nombre,cp.cantidad,cp.estadoPlatillo,cp.idComanda from Pedido as p inner join Comanda_has_Platillo as cp "
           "on p.idPedido=cp.idPedido inner join Vinos as v "
           "on cp.idPlatillo=v.idBebida where p.Mesa_idMesa='"+numMesa+"' and p.estado='1' and cp.categoria='10' and v.idBebida='"+id+"'";
          // qDebug()<<busqueda;

           resultado.exec(busqueda);
           resultado.next();

           nombre=resultado.value(0).toString();
           cantidad=resultado.value(1).toString();
           estadoPlatillo=resultado.value(2).toString();
           idComanda=resultado.value(3).toString();

           qDebug()<<"idcomanda: "<<idComanda;
           qDebug()<<"nombre del platillo: "<<nombre;
           qDebug()<<"cantidad: "<<cantidad;

           QFont f( "MS Shell Dlg 2", 11, QFont::Normal);

           QLabel *nomPlatillo=new QLabel;
           nomPlatillo->setText(nombre);
           nomPlatillo->setStyleSheet("color: white");
           nomPlatillo->setFont(f);

           QLabel *Cantidad=new QLabel;
           Cantidad->setText("x"+cantidad);
           Cantidad->setAlignment(Qt::AlignRight);
           Cantidad->setStyleSheet("color: white");
           Cantidad->setFont(f);

      if(estadoPlatillo=="0")
      {
           QPushButton *cancelar= new QPushButton;
           icono="C:/Imagenes tamaño pequeño/cross";
           QIcon canc(icono);
           cancelar->setIcon(canc);
           cancelar->setMaximumWidth(50);
           cancelar->setMinimumWidth(50);
           cancelar->setIconSize(QSize(15,15));
           cancelar->setStyleSheet("background-color: transparent");
           ui->pedidos->addWidget(cancelar,row,3,Qt::AlignTop);
           connect(cancelar,&QPushButton::clicked,[=](){emit EliminarPlatillo(idComanda);});
      }
           ui->pedidos->addWidget(nomPlatillo,row,0,Qt::AlignTop);
           ui->pedidos->addWidget(Cantidad,row,2,Qt::AlignTop);

       }
        row++;
    }
}

void Principal_Mesero::on_cuenta_clicked()
{
    clearLayout(ui->pedidos);
    qDebug()<<"hola";
    if(idmesa==0){
     advertencia->setModal(true);
     advertencia->show();
     qDebug()<<"seleciona una mesa";
    }
    //SI LA MESA ESTA SELECCIONADA SE ACEPTA EL IF
    if(idmesa==1)
    {
        ui->comanda->setStyleSheet("background-color:#1d1d1d");
        ui->bebidas->setStyleSheet("background-color:#1d1d1d ");
        ui->mesas->setStyleSheet("background-color:#1d1d1d");
        ui->cuenta->setStyleSheet("background-color:rgb(201, 37, 49)");

        QString mesa,estado;
        QSqlQuery mesas;
        mesa="select *from mesa where idMesa='"+numMesa+"'";
        mesas.exec(mesa);
        mesas.next();
        estado=mesas.value(3).toString();


        //SI ESTA OCUPADA MOSTRAMOS LO QUE A PEDIDO
        if(estado=="ocupado"){
         mostrarPedido();
         }
        ui->paginas->setCurrentIndex(13);

    }

}

void Principal_Mesero::on_mesa_1_clicked()
{
    clearLayout(ui->pedidos);
  idmesa=1;
  numMesa="1";
  qDebug()<<"numero de mesa:"<<numMesa;
  QString mesa,estado;
  QSqlQuery mesas;
  mesa="select *from mesa where idMesa=1";
  mesas.exec(mesa);
  mesas.next();
  estado=mesas.value(3).toString();
  qDebug()<<estado;
  if(estado=="disponible"){
      qDebug()<<"mesa libre";
     ui->paginas->setCurrentIndex(1);
  }if(estado=="ocupado"){
      qDebug()<<"mesa ocupada";
      mostrarPedido();
       ui->paginas->setCurrentIndex(13);
   }if(estado=="sucia") {
      qDebug()<<"mesa sucuia";
   }

}

void Principal_Mesero::on_mesa_2_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="2";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=2";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_3_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="3";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=3";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }

}

void Principal_Mesero::on_mesa_4_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="4";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=4";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupada"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_5_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="5";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=5";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_6_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="6";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=6";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_7_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="7";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=7";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_8_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="8";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=8";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_9_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="9";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=9";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_10_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="10";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=10";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_11_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="11";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=11";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_12_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="12";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=12";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_13_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="13";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=13";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_14_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="14";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=14";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_15_clicked()
{
    clearLayout(ui->pedidos);
    idmesa=1;
    numMesa="15";
    qDebug()<<"numero de mesa:"<<numMesa;
    QString mesa,estado;
    QSqlQuery mesas;
    mesa="select *from mesa where idMesa=15";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();
    if(estado=="disponible"){
        qDebug()<<"mesa libre";
       ui->paginas->setCurrentIndex(1);
    }if(estado=="ocupado"){
        qDebug()<<"mesa ocupada";
        mostrarPedido();
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_chilenos_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="VINO CHILENO";
    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"'";
    QslVino.exec(vinos);

    int Cr=0;
    while(QslVino.next()){


       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

       ui->menuVinos->addWidget(vinos,Cr,0);

      if(!QslVino.next())
    {

    }
    else {


       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

       ui->menuVinos->addWidget(vinos,Cr,2);

    }

    Cr++;
    }
}

void Principal_Mesero::on_argentinos_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="VINO ARGENTINO";

    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){



       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);
       if(!QslVino.next())
     {

     }
     else {


        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }

}

void Principal_Mesero::on_mexicanos_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="VINO TINTO MEXICANO";

    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){


       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);
       if(!QslVino.next())
     {

     }
     else {


        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }
}

void Principal_Mesero::on_blanco_mexi_clicked()
{
    ui->paginas->setCurrentIndex(14);
    //clearLayout(ui->menuVinos);
    QString origen="VINO BLANCO MEXICANO";
    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){


       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);

       if(!QslVino.next())
     {

     }
     else {



        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }
}

void Principal_Mesero::on_otro_paises_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="TINTO DE OTROS PAISES";

    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){


       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);

       if(!QslVino.next())
     {

     }
     else {
        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }
}

void Principal_Mesero::on_espumuso_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="TINTO ESPUMOSO";
    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){


       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);

       if(!QslVino.next())
     {

     }
     else {


        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }
}

void Principal_Mesero::on_espanol_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="VINO TINTO ESPAÑOL";
    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){
       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);
       if(!QslVino.next())
     {

     }
     else {


        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }
}

void Principal_Mesero::on_blanco_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="VINO BLANCO";
    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){
       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);
       if(!QslVino.next())
     {

     }
     else {


        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }
}

void Principal_Mesero::on_rosado_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="VINO ROSADO";
    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){

       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);
       if(!QslVino.next())
     {

     }
     else {


        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }
}

void Principal_Mesero::on_postre_clicked()
{
    ui->paginas->setCurrentIndex(14);
    clearLayout(ui->menuVinos);
    QString origen="VINO DE POSTRE";
    QString vinos;
    QSqlQuery QslVino;
    vinos="select *from Vinos where OrigenVino='"+origen+"';";
     QslVino.exec(vinos);
    int Cr=0;
    while(QslVino.next()){


       tarjetaPlatillo *vinos=new tarjetaPlatillo();
       vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");
       ui->menuVinos->addWidget(vinos,Cr,0);
       if(!QslVino.next())
     {

     }
     else {
        tarjetaPlatillo *vinos=new tarjetaPlatillo();
        vinos->llenar(QslVino.value(1).toString(),QslVino.value(2).toString(),QslVino.value(0).toString(),numMesa,"10");

        ui->menuVinos->addWidget(vinos,Cr,2);

     }

     Cr++;
     }
}

void Principal_Mesero::on_orden_clicked()
{
   EnviarPedido  *enviar=new EnviarPedido(numMesa);
    enviar->setModal(true);
    enviar->show();


}
