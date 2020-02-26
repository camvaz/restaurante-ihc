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
    identifier = id;
    //METODO QUE CARGA LAS IMAGENES
    CargarImagenes();
    mesasEstado();
    //qDebug()<<"id mesero: "<<identifier.toInt();
    idmesa=0;

    advertencia=new mensaje();


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
//     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_13(mesa);ui->mesa_13->setIcon(mesas_13);
//     mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_14(mesa);ui->mesa_14->setIcon(mesas_14);
 //    mesa="C:/Imagenes tamaño pequeño/meeting-black";QIcon mesas_15(mesa);ui->mesa_15->setIcon(mesas_15);

     //BOTONES
     QString botones;
     botones="C:/Imagenes tamaño pequeño/bebidas";QIcon boton_bebidas(botones);ui->bebidas->setIcon(boton_bebidas);
     botones="C:/Imagenes tamaño pequeño/Buscar Mesas";QIcon boton_menu(botones);ui->mesas->setIcon(boton_menu);
     botones="C:/Imagenes tamaño pequeño/Platillos";QIcon boton_comida(botones);ui->comanda->setIcon(boton_comida);
     botones="C:/Imagenes tamaño pequeño/Ordenes";QIcon boton_comanda(botones);ui->cuenta->setIcon(boton_comanda);

     QString pedido;
     pedido="C:/Imagenes tamaño pequeño/pedido";
     QPixmap pedidos(pedido);


}

void Principal_Mesero::mesasEstado(){

  QString mesa,estado,imagen;
  QSqlQuery mesas;
    for(int i=1; i<=15; i++){
        QString numMesa = QString::number(i);
        mesa="select *from mesa where idMesa='"+numMesa+"' and Usuario_idUsuario='"+identifier+"'";
       // qDebug()<<mesa;
        mesas.exec(mesa);
        mesas.next();
        estado=mesas.value(3).toString();
        switch (i) {
        case 1:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_1->setIcon(mesas_1);
            }if(estado=="ocupada"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_1(imagen);
                ui->mesa_1->setIcon(mesas_1);

             }if(estado=="sucia") {
                qDebug()<<"mesa sucuia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_1(imagen);
                ui->mesa_1->setIcon(mesas_1);
             }
            break;
        case 2:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_2->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_2->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_2->setIcon(mesas_2);
             }


            break;
        case 3:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_3->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_3->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_3->setIcon(mesas_2);
             }

            break;

        case 4:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_4->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_4->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_4->setIcon(mesas_2);
             }
            break;
        case 5:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_5->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_5->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_5->setIcon(mesas_2);
             }
            break;
        case 6:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_6->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_6->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_6->setIcon(mesas_2);
             }
            break;
        case 7:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_7->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_7->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_7->setIcon(mesas_2);
             }
            break;
        case 8:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_8->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_8->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_8->setIcon(mesas_2);
             }
            break;
        case 9:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_9->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_9->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_9->setIcon(mesas_2);
             }
            break;
        case 10:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_10->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_10->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_10->setIcon(mesas_2);
             }
            break;
        case 11:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_11->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_11->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_11->setIcon(mesas_2);
             }
            break;
        case 12:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
              ui->mesa_12->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
                ui->mesa_12->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
                ui->mesa_12->setIcon(mesas_2);
             }
            break;
        case 13:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
   //           ui->mesa_13->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
//                ui->mesa_13->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
  //              ui->mesa_13->setIcon(mesas_2);
             }
            break;
        case 14:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
    //          ui->mesa_14->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
      //          ui->mesa_14->setIcon(mesas_2);

             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
        //        ui->mesa_14->setIcon(mesas_2);
             }
            break;
        case 15:
            if(estado=="disponible"){
                qDebug()<<"mesa libre";
              imagen="C:/Imagenes tamaño pequeño/disponible";
              QIcon mesas_1(imagen);
          //    ui->mesa_15->setIcon(mesas_1);
            }if(estado=="ocupado"){
                qDebug()<<"mesa ocupada";
                imagen="C:/Imagenes tamaño pequeño/ocupada";
                QIcon mesas_2(imagen);
            //    ui->mesa_15->setIcon(mesas_2);
             }if(estado=="sucio") {
                qDebug()<<"mesa sucia";
                imagen="C:/Imagenes tamaño pequeño/sucia";
                QIcon mesas_2(imagen);
              //  ui->mesa_15->setIcon(mesas_2);
             }
            break;

        }

    }

}

void Principal_Mesero::orden(QString id)
{
    QSqlQuery platillo;
    QString  busPlatillo;
    busPlatillo="select *from Platillos where idPlatillo='"+id+"'";

    platillo.exec(busPlatillo);
    platillo.next();

     qDebug()<<"id Platillo: "<<platillo.value(0).toString();
     qDebug()<<"Nombre: "<<platillo.value(1).toString();
     qDebug()<<"Tiempo: "<<platillo.value(3).toString();
     qDebug()<<"Categoria: "<<platillo.value(4).toString();

     comanda=new confirmacion_comanda(id);
     comanda->setModal(true);
     comanda->show();

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

        QString *id=new QString(parrilla1.value(0).toString());

        QPushButton *agre=new QPushButton();
        agre->setText("Agregar");
        agre->setFixedSize(QSize(300,50));
        agre->setStyleSheet("background-color:rgb(201, 37, 49)");

       connect(agre,&QPushButton::clicked,[=](){emit orden(*id);});
       tarjetaPlatillo *parilla=new tarjetaPlatillo();
       parilla->llenar(parrilla1.value(1).toString(),parrilla1.value(2).toString(),parrilla1.value(0).toString());
       ui->menuParrila1->addWidget(parilla,Cr,0);


         //seguna columna
        if(!parrilla1.next())
        {

        }
        else{

        QString *id=new QString(parrilla1.value(0).toString());


        QPushButton *agre2=new QPushButton();
        agre2->setText("Agregar");
        agre2->setFixedSize(QSize(300,50));
        agre2->setStyleSheet("background-color:rgb(201, 37, 49)");

        connect(agre2,&QPushButton::clicked,[=](){emit orden(*id);});

        tarjetaPlatillo *parilla=new tarjetaPlatillo();
        parilla->llenar(parrilla1.value(1).toString(),parrilla1.value(2).toString(),parrilla1.value(0).toString());
        ui->menuParrila1->addWidget(parilla,Cr,2);

        Cr=Cr+3;
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


        QString *id=new QString(ensalada1.value(0).toString());
        //primera columna


        QPushButton *agre=new QPushButton();
        agre->setText("Agregar");
        agre->setFixedSize(QSize(300,50));
        agre->setStyleSheet("background-color:rgb(201, 37, 49)");
         connect(agre,&QPushButton::clicked,[=](){emit orden(*id);});
         tarjetaPlatillo *ensalada=new tarjetaPlatillo();
         ensalada->llenar(ensalada1.value(1).toString(),ensalada1.value(2).toString(),ensalada1.value(0).toString());
         ui->menuEnsalada->addWidget(ensalada,Cr,0);

        //seguna columna
        if(!ensalada1.next())
        {

        }
        else {

       QString *id=new QString(ensalada1.value(0).toString());


        QPushButton *agre2=new QPushButton();
        agre2->setText("Agregar");
        agre2->setFixedSize(QSize(300,50));
        agre2->setStyleSheet("background-color:rgb(201, 37, 49)");

        connect(agre2,&QPushButton::clicked,[=](){emit orden(*id);});
        tarjetaPlatillo *ensalada=new tarjetaPlatillo();
        ensalada->llenar(ensalada1.value(1).toString(),ensalada1.value(2).toString(),ensalada1.value(0).toString());
        ui->menuEnsalada->addWidget(ensalada,Cr,2);

        Cr=Cr+3;
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

       QString *id=new QString(mar1.value(0).toString());

       QPushButton *agre=new QPushButton();
        agre->setText("Agregar");
        agre->setFixedSize(QSize(300,50));
        agre->setStyleSheet("background-color:rgb(201, 37, 49)");

        connect(agre,&QPushButton::clicked,[=](){emit orden(*id);});
        tarjetaPlatillo *una=new tarjetaPlatillo();
        una->llenar(mar1.value(1).toString(),mar1.value(2).toString(),mar1.value(0).toString());
        ui->menuMar->addWidget(una,Cr,0);


        //seguna columna
        if(!mar1.next())
        {

        }
        else {

       QString *id=new QString(mar1.value(0).toString());

        QPushButton *agre2=new QPushButton();
        agre2->setText("Agregar");
        agre2->setFixedSize(QSize(300,50));
        agre2->setStyleSheet("background-color:rgb(201, 37, 49)");
        connect(agre2,&QPushButton::clicked,[=](){emit orden(*id);});

        tarjetaPlatillo *dos=new tarjetaPlatillo();
        dos->llenar(mar1.value(1).toString(),mar1.value(2).toString(),mar1.value(0).toString());
        ui->menuMar->addWidget(dos,Cr,2);
        Cr=Cr+3;

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
    sopa="select *from Platillos where idCategoriaMenu=5;";
    sopa1.exec(sopa);

    int Cr=0;

    while(sopa1.next())
    {
        QString *id=new QString(sopa1.value(0).toString());

        QPushButton *agre=new QPushButton();
        agre->setText("Agregar");
        agre->setFixedSize(QSize(300,50));
        agre->setStyleSheet("background-color:rgb(201, 37, 49)");

        connect(agre,&QPushButton::clicked,[=](){emit orden(*id);});
        tarjetaPlatillo *sopa=new tarjetaPlatillo();
        sopa->llenar(sopa1.value(1).toString(),sopa1.value(2).toString(),sopa1.value(0).toString());
        ui->menuSopa->addWidget(sopa,Cr,0);


        //seguna columna
        if(!sopa1.next())
        {

        }
        else {

        QString *id=new QString(sopa1.value(0).toString());

        QPushButton *agre2=new QPushButton();
        agre2->setText("Agregar");
        agre2->setFixedSize(QSize(300,50));
        agre2->setStyleSheet("background-color:rgb(201, 37, 49)");

        connect(agre2,&QPushButton::clicked,[=](){emit orden(*id);});
        tarjetaPlatillo *sopa=new tarjetaPlatillo();
        sopa->llenar(sopa1.value(1).toString(),sopa1.value(2).toString(),sopa1.value(0).toString());
        ui->menuSopa->addWidget(sopa,Cr,2);

        Cr=Cr+3;

        }
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

         QString *id=new QString(QslEntradas.value(0).toString());

         QPushButton *agregar1=new QPushButton();
         agregar1->setText("Agregar");
         agregar1->setFixedSize(QSize(80,25));
         agregar1->setStyleSheet("background-color:rgb(201, 37, 49)");

         connect(agregar1,&QPushButton::clicked,[=](){emit orden(*id);});
         tarjetaPlatillo *entrada=new tarjetaPlatillo();
         entrada->llenar(QslEntradas.value(1).toString(),QslEntradas.value(2).toString(),QslEntradas.value(0).toString());
         ui->menuEntradas->addWidget(entrada,Cr,0);


         if(!QslEntradas.next())
     {

       }else {
        //seguna columna

             QString *id=new QString(QslEntradas.value(0).toString());

             QPushButton *agregar2=new QPushButton();
             agregar2->setText("Agregar");
             agregar2->setFixedSize(QSize(80,25));
             agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");

             connect(agregar2,&QPushButton::clicked,[=](){emit orden(*id);});
             tarjetaPlatillo *entrada=new tarjetaPlatillo();
             entrada->llenar(QslEntradas.value(1).toString(),QslEntradas.value(2).toString(),QslEntradas.value(0).toString());
             ui->menuEntradas->addWidget(entrada,Cr,2);

            }
           Cr=Cr+5;
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
        QString *id=new QString(QslGuarni.value(0).toString());



        QPushButton *agregar=new QPushButton();
        agregar->setText("Agregar");
        agregar->setFixedSize(QSize(170,50));
        agregar->setStyleSheet("background-color:rgb(201, 37, 49)");

        connect(agregar,&QPushButton::clicked,[=](){emit orden(*id);});
        tarjetaPlatillo *guarnicion=new tarjetaPlatillo();
        guarnicion->llenar(QslGuarni.value(1).toString(),QslGuarni.value(2).toString(),QslGuarni.value(0).toString());
        ui->menuGuarnicion->addWidget(guarnicion,Cr,0);

        //seguna columna
        if(!QslGuarni.next())
        {

        }
        else {

            QString *id=new QString(QslGuarni.value(0).toString());


            QPushButton *agregar2=new QPushButton();
            agregar2->setText("Agregar");
            agregar2->setFixedSize(QSize(180,50));
            agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");

            connect(agregar2,&QPushButton::clicked,[=](){emit orden(*id);});
            tarjetaPlatillo *guarnicion=new tarjetaPlatillo();
            guarnicion->llenar(QslGuarni.value(1).toString(),QslGuarni.value(2).toString(),QslGuarni.value(0).toString());
            ui->menuGuarnicion->addWidget(guarnicion,Cr,2);


        }

     Cr+=4;
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

        QString *id=new QString(QslPostres.value(0).toString());

        QPushButton *agregar1=new QPushButton();
        agregar1->setText("Agregar");
        agregar1->setFixedSize(QSize(180,50));
        agregar1->setStyleSheet("background-color:rgb(201, 37, 49)");

        connect(agregar1,&QPushButton::clicked,[=](){emit orden(*id);});
        tarjetaPlatillo *postres=new tarjetaPlatillo();
        postres->llenar(QslPostres.value(1).toString(),QslPostres.value(2).toString(),QslPostres.value(0).toString());
        ui->menuReposteria->addWidget(postres,Cr,0);


        if(!QslPostres.next()){

      }else {
       //seguna columna

            QString *id=new QString(QslPostres.value(0).toString());


            QPushButton *agregar2=new QPushButton();
            agregar2->setText("Agregar");
            agregar2->setFixedSize(QSize(180,50));
            agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");

            connect(agregar2,&QPushButton::clicked,[=](){emit orden(*id);});
            tarjetaPlatillo *postres=new tarjetaPlatillo();
            postres->llenar(QslPostres.value(1).toString(),QslPostres.value(2).toString(),QslPostres.value(0).toString());
            ui->menuReposteria->addWidget(postres,Cr,2);

           }
          Cr=Cr+5;
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

        QString *id=new QString(QslInfantil.value(0).toString());


        QPushButton *agregar=new QPushButton();
        agregar->setText("Agregar");
        agregar->setFixedSize(QSize(180,50));
        agregar->setStyleSheet("background-color:rgb(201, 37, 49)");

        connect(agregar,&QPushButton::clicked,[=](){emit orden(*id);});
        tarjetaPlatillo *infatil=new tarjetaPlatillo();
        infatil->llenar(QslInfantil.value(1).toString(),QslInfantil.value(2).toString(),QslInfantil.value(0).toString());
        ui->menuInfantil->addWidget(infatil,Cr,0);

        //seguna columna
        if(!QslInfantil.next())
        {

        }
        else {

            QString *id=new QString(QslInfantil.value(0).toString());

            QPushButton *agregar2=new QPushButton();
            agregar2->setText("Agregar");
            agregar2->setFixedSize(QSize(180,50));
            agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");

            connect(agregar2,&QPushButton::clicked,[=](){emit orden(*id);});

            tarjetaPlatillo *infatil=new tarjetaPlatillo();
            infatil->llenar(QslInfantil.value(1).toString(),QslInfantil.value(2).toString(),QslInfantil.value(0).toString());
            ui->menuInfantil->addWidget(infatil,Cr,2);


        }

     Cr+=4;
    }


}

void Principal_Mesero::on_coctel_clicked(){
    ui->paginas->setCurrentIndex(11);
    clearLayout(ui->menuCoteles);
    QString coctel;             QSqlQuery QslCoctel;
    coctel="select *from Cocteles;";
    QslCoctel.exec(coctel);
    int Cr=0;
    int cr=0;

    while (QslCoctel.next()) {
     if(QslCoctel.value(5).toInt()==1){
         QString *id=new QString(QslCoctel.value(0).toString());
         //qDebug()<<"con alcohol";


        QPushButton *agregar=new QPushButton();
        agregar->setText("Agregar");
        agregar->setFixedSize(QSize(80,25));
        agregar->setStyleSheet("background-color:rgb(201, 37, 49)");
        //agregar->setStyleSheet("color:rgb(241, 241, 241)");

        connect(agregar,&QPushButton::clicked,[=](){emit orden(*id);});
        tarjetaPlatillo *coctel=new tarjetaPlatillo();
        coctel->llenar(QslCoctel.value(1).toString(),QslCoctel.value(2).toString(),QslCoctel.value(0).toString());
        ui->menuCoteles->addWidget(coctel,Cr,0);


    }
     else {

         QString *id=new QString(QslCoctel.value(0).toString());


            QPushButton *agregar2=new QPushButton();
            agregar2->setText("Agregar");
            agregar2->setFixedSize(QSize(80,25));
            agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");
            //agregar2->setStyleSheet("color:rgb(241, 241, 241)");

            connect(agregar2,&QPushButton::clicked,[=](){emit orden(*id);});

            tarjetaPlatillo *coctel=new tarjetaPlatillo();
            coctel->llenar(QslCoctel.value(1).toString(),QslCoctel.value(2).toString(),QslCoctel.value(0).toString());
            ui->menuCoteles->addWidget(coctel,cr,2);
            cr++;
    }

     Cr++;
    }



}

void Principal_Mesero::on_vino_clicked()
{
    ui->paginas->setCurrentIndex(12);
    //joaquin codigo
    clearLayout(ui->menuVinos);

    QString origen;
    QSqlQuery origen1;
    origen="select OrigenVino from Vinos group by OrigenVino;";
    origen1.exec(origen);
    QString Norig;
    int Cr=0;
    while(origen1.next())
    {
        //QString *id=new QString(origen1.value(0).toString());
        Norig=origen1.value(0).toString();
        QString vino;

        QSqlQuery vino1;
        vino="select *from Vinos where idCategoriaMenu=10 and OrigenVino='"+Norig+"';";
        vino1.exec(vino);

        QLabel *Or=new QLabel;
        Or->setText(Norig);
        Or->setFixedSize(QSize(300,25));
        Or->setStyleSheet("background-color: rgb(227,84,17)");
        ui->menuVinos->addWidget(Or,Cr,0,1,1);
       //ui->menuVinos->addWidget(Or,Cr,1,1,1);
       //ui->menuVinos->addWidget(Or,Cr,2,1,1);
            Cr=Cr+1;
       while(vino1.next())
        {
            //primera columna

           QLabel *dishN=new QLabel;
            dishN->setText(vino1.value(1).toString());
            dishN->setFixedSize(QSize(300,25));
            dishN->setStyleSheet("color:rgb(241, 241, 241)");
            //fol->setStyleSheet("background-color: rgb("+rgb+")");



            QLabel *dishP=new QLabel;
            dishP->setText(vino1.value(2).toString());
            dishP->setFixedSize(QSize(300,25));
            dishP->setStyleSheet("color:rgb(241, 241, 241)");
            //m->setStyleSheet("background-color: rgb("+rgb+")");


            QPushButton *agre=new QPushButton();
            agre->setText("Agregar");
            agre->setFixedSize(QSize(300,50));
            agre->setStyleSheet("background-color:rgb(201, 37, 49)");
            //agre->setStyleSheet("background-color: rgb(138,198,242)");
           // QSignalMapper *mapper1=new QSignalMapper(this);
            //connect(q,SIGNAL(clicked(bool)),mapper1,SLOT(map()));
            //mapper1->setMapping(q,folio);
            //connect(mapper1,SIGNAL(mapped(QString)),this,SLOT(PonerCitas(QString)));

            ui->menuVinos->addWidget(dishN,Cr,0,1,1);
            ui->menuVinos->addWidget(dishP,Cr+1,0,1,1);
            ui->menuVinos->addWidget(agre,Cr+2,0,1,1);

            //espacio entre las columnas
            QLabel *esp=new QLabel;

            esp->setFixedSize(QSize(50,25));
            //fol->setStyleSheet("background-color: rgb("+rgb+")");



            QLabel *esp2=new QLabel;
            esp2->setFixedSize(QSize(50,25));
            //m->setStyleSheet("background-color: rgb("+rgb+")");


            QLabel *esp3=new QLabel();
            esp3->setFixedSize(QSize(50,50));

            ui->menuVinos->addWidget(esp,Cr,1,1,1);
            ui->menuVinos->addWidget(esp2,Cr+1,1,1,1);
            ui->menuVinos->addWidget(esp3,Cr+2,1,1,1);



            //seguna columna
            if(!vino1.next())
            {
               // ui->menuVinos->addWidget(esp,Cr,2,1,1);
            //    ui->menuVinos->addWidget(esp2,Cr+1,2,1,1);
              //  ui->menuVinos->addWidget(esp3,Cr+2,2,1,1);
             Cr=Cr+3;
            }
            else {


            QLabel *dishN2=new QLabel;
            dishN2->setText(vino1.value(1).toString());
            dishN2->setFixedSize(QSize(300,25));
            dishN2->setStyleSheet("color:rgb(241, 241, 241)");
            //fol->setStyleSheet("background-color: rgb("+rgb+")");



            QLabel *dishP2=new QLabel;
            dishP2->setText(vino1.value(2).toString());
            dishP2->setFixedSize(QSize(300,25));
            dishP2->setStyleSheet("color:rgb(241, 241, 241)");
            //m->setStyleSheet("background-color: rgb("+rgb+")");


            QPushButton *agre2=new QPushButton();
            agre2->setText("Agregar");
            agre2->setFixedSize(QSize(300,50));
            agre2->setStyleSheet("background-color:rgb(201, 37, 49)");
            ui->menuVinos->addWidget(dishN2,Cr,2,1,1);
            ui->menuVinos->addWidget(dishP2,Cr+1,2,1,1);
            ui->menuVinos->addWidget(agre2,Cr+2,2,1,1);
            Cr=Cr+3;

            }

        }


    }




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

void Principal_Mesero::on_cuenta_clicked()
{

    qDebug()<<"hola";
    if(idmesa==0){
     advertencia->setModal(true);
     advertencia->show();
     qDebug()<<"seleciona una mesa";
    }if(idmesa==1){
         ui->comanda->setStyleSheet("background-color:#1d1d1d");
        ui->bebidas->setStyleSheet("background-color:#1d1d1d ");
        ui->mesas->setStyleSheet("background-color:#1d1d1d");
        ui->cuenta->setStyleSheet("background-color:rgb(201, 37, 49)");
        ui->paginas->setCurrentIndex(13);
    }

}

void Principal_Mesero::on_mesa_1_clicked()
{

  idmesa=1;
  numMesa=1;
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
       ui->paginas->setCurrentIndex(13);
   }if(estado=="sucia") {
      qDebug()<<"mesa sucuia";
   }

}

void Principal_Mesero::on_mesa_2_clicked()
{
    idmesa=1;
    numMesa=2;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_3_clicked()
{
    idmesa=1;
    numMesa=3;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }

}

void Principal_Mesero::on_mesa_4_clicked()
{
    idmesa=1;
    numMesa=4;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_5_clicked()
{
    idmesa=1;
    numMesa=5;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_6_clicked()
{

    idmesa=1;
    numMesa=6;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_7_clicked()
{
    idmesa=1;
    numMesa=7;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_8_clicked()
{
    idmesa=1;
    numMesa=8;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_9_clicked()
{
    idmesa=1;
    numMesa=9;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_10_clicked()
{
    idmesa=1;
    numMesa=10;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_11_clicked()
{
    idmesa=1;
    numMesa=11;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_12_clicked()
{
    idmesa=1;
    numMesa=12;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_13_clicked()
{
    idmesa=1;
    numMesa=13;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_14_clicked()
{
    idmesa=1;
    numMesa=14;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}

void Principal_Mesero::on_mesa_15_clicked()
{
    idmesa=1;
    numMesa=15;
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
         ui->paginas->setCurrentIndex(13);
     }if(estado=="sucia") {
        qDebug()<<"mesa sucuia";
     }
}
