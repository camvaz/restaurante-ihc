#include "principal_mesero.h"
#include "ui_principal_mesero.h"


Principal_Mesero::Principal_Mesero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal_Mesero)
{
    ui->setupUi(this);
    //METODO QUE CARGA LAS IMAGENES
    CargarImagenes();

}

Principal_Mesero::Principal_Mesero(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal_Mesero)
{
    ui->setupUi(this);
    //METODO QUE CARGA LAS IMAGENES
    CargarImagenes();
    mesasEstado();
    identifier = id;
    ui->comanda->hide();
    ui->bebidas->hide();
    ui->cuenta->hide();

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
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_1(mesa);ui->mesa_1->setIcon(mesas_1);
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_2(mesa);ui->mesa_2->setIcon(mesas_2);
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_3(mesa);ui->mesa_3->setIcon(mesas_3);
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_4(mesa);ui->mesa_4->setIcon(mesas_4);
     mesa="C:/Imagenes tamaño pequeño/ocupada";QIcon mesas_5(mesa);ui->mesa_5->setIcon(mesas_5);
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_6(mesa);ui->mesa_6->setIcon(mesas_6);
     mesa="C:/Imagenes tamaño pequeño/sucia";QIcon mesas_7(mesa);ui->mesa_7->setIcon(mesas_7);
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_8(mesa);ui->mesa_8->setIcon(mesas_8);
     mesa="C:/Imagenes tamaño pequeño/ocupada";QIcon mesas_9(mesa);ui->mesa_9->setIcon(mesas_9);
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_10(mesa);ui->mesa_10->setIcon(mesas_10);
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_11(mesa);ui->mesa_11->setIcon(mesas_11);
     mesa="C:/Imagenes tamaño pequeño/disponible";QIcon mesas_12(mesa);ui->mesa_12->setIcon(mesas_12);

     //BOTONES
     QString botones;
     botones="C:/Imagenes tamaño pequeño/bebidas";QIcon boton_bebidas(botones);ui->bebidas->setIcon(boton_bebidas);
     botones="C:/Imagenes tamaño pequeño/Buscar Mesas";QIcon boton_menu(botones);ui->mesas->setIcon(boton_menu);
     botones="C:/Imagenes tamaño pequeño/Platillos";QIcon boton_comida(botones);ui->comanda->setIcon(boton_comida);
     botones="C:/Imagenes tamaño pequeño/Ordenes";QIcon boton_comanda(botones);ui->cuenta->setIcon(boton_comanda);

}

void Principal_Mesero::mesasEstado(){


    QString mesa1,imagen;
    int estado;
    QSqlQuery mesa;
    mesa1="select *from mesas where idMesa=1";
    mesa.exec(mesa1);
    mesa.next();
   // while(mesa.next()){
    estado=mesa.value(1).toInt();
    qDebug()<<estado;
    if(estado==1){
        qDebug()<<"mesa libre";
      imagen="C:/Imagenes tamaño pequeño/disponible";
      QIcon mesas_1(imagen);
      ui->mesa_1->setIcon(mesas_1);
    }if(estado==2){
        qDebug()<<"mesa ocupada";
        imagen="C:/Imagenes tamaño pequeño/ocupada";
        QIcon mesas_1(imagen);
        ui->mesa_1->setIcon(mesas_1);

     }if(estado==3) {
        qDebug()<<"mesa sucuia";
        imagen="C:/Imagenes tamaño pequeño/sucia";
        QIcon mesas_1(imagen);
        ui->mesa_1->setIcon(mesas_1);
     }

    //}


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
        //primera columna
        QLabel *dishN=new QLabel;
        dishN->setText(parrilla1.value(1).toString());
        dishN->setFixedSize(QSize(300,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *dishP=new QLabel;
        dishP->setText(parrilla1.value(2).toString());
        dishP->setFixedSize(QSize(300,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QPushButton *agre=new QPushButton();
        agre->setText("Agregar");
        agre->setFixedSize(QSize(300,50));
        //q->setStyleSheet("background-color: rgb(138,198,242)");
       // QSignalMapper *mapper1=new QSignalMapper(this);
        //connect(q,SIGNAL(clicked(bool)),mapper1,SLOT(map()));
        //mapper1->setMapping(q,folio);
        //connect(mapper1,SIGNAL(mapped(QString)),this,SLOT(PonerCitas(QString)));

        ui->menuParrila1->addWidget(dishN,Cr,0,1,1);
        ui->menuParrila1->addWidget(dishP,Cr+1,0,1,1);
        ui->menuParrila1->addWidget(agre,Cr+2,0,1,1);

        //espacio entre las columnas
        QLabel *esp=new QLabel;

        esp->setFixedSize(QSize(50,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *esp2=new QLabel;
        esp2->setFixedSize(QSize(50,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QLabel *esp3=new QLabel();
        esp3->setFixedSize(QSize(50,50));

        ui->menuParrila1->addWidget(esp,Cr,1,1,1);
        ui->menuParrila1->addWidget(esp2,Cr+1,1,1,1);
        ui->menuParrila1->addWidget(esp3,Cr+2,1,1,1);



        //seguna columna
        if(!parrilla1.next())
        {

        }
        else{
        QLabel *dishN2=new QLabel;
        dishN2->setText(parrilla1.value(1).toString());
        dishN2->setFixedSize(QSize(300,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *dishP2=new QLabel;
        dishP2->setText(parrilla1.value(2).toString());
        dishP2->setFixedSize(QSize(300,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QPushButton *agre2=new QPushButton();
        agre2->setText("Agregar");
        agre2->setFixedSize(QSize(300,50));

        ui->menuParrila1->addWidget(dishN2,Cr,2,1,1);
        ui->menuParrila1->addWidget(dishP2,Cr+1,2,1,1);
        ui->menuParrila1->addWidget(agre2,Cr+2,2,1,1);
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
        //primera columna
        QLabel *dishN=new QLabel;
        dishN->setText(ensalada1.value(1).toString());
        dishN->setFixedSize(QSize(300,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *dishP=new QLabel;
        dishP->setText(ensalada1.value(2).toString());
        dishP->setFixedSize(QSize(300,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QPushButton *agre=new QPushButton();
        agre->setText("Agregar");
        agre->setFixedSize(QSize(300,50));
        //q->setStyleSheet("background-color: rgb(138,198,242)");
       // QSignalMapper *mapper1=new QSignalMapper(this);
        //connect(q,SIGNAL(clicked(bool)),mapper1,SLOT(map()));
        //mapper1->setMapping(q,folio);
        //connect(mapper1,SIGNAL(mapped(QString)),this,SLOT(PonerCitas(QString)));

        ui->menuEnsalada->addWidget(dishN,Cr,0,1,1);
        ui->menuEnsalada->addWidget(dishP,Cr+1,0,1,1);
        ui->menuEnsalada->addWidget(agre,Cr+2,0,1,1);

        //espacio entre las columnas
        QLabel *esp=new QLabel;

        esp->setFixedSize(QSize(50,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *esp2=new QLabel;
        esp2->setFixedSize(QSize(50,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QLabel *esp3=new QLabel();
        esp3->setFixedSize(QSize(50,50));

        ui->menuEnsalada->addWidget(esp,Cr,1,1,1);
        ui->menuEnsalada->addWidget(esp2,Cr+1,1,1,1);
        ui->menuEnsalada->addWidget(esp3,Cr+2,1,1,1);



        //seguna columna
        if(!ensalada1.next())
        {

        }
        else {


        QLabel *dishN2=new QLabel;
        dishN2->setText(ensalada1.value(1).toString());
        dishN2->setFixedSize(QSize(300,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *dishP2=new QLabel;
        dishP2->setText(ensalada1.value(2).toString());
        dishP2->setFixedSize(QSize(300,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QPushButton *agre2=new QPushButton();
        agre2->setText("Agregar");
        agre2->setFixedSize(QSize(300,50));

        ui->menuEnsalada->addWidget(dishN2,Cr,2,1,1);
        ui->menuEnsalada->addWidget(dishP2,Cr+1,2,1,1);
        ui->menuEnsalada->addWidget(agre2,Cr+2,2,1,1);
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
        //primera columna
        QLabel *dishN=new QLabel;
        dishN->setText(mar1.value(1).toString());
        dishN->setFixedSize(QSize(300,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *dishP=new QLabel;
        dishP->setText(mar1.value(2).toString());
        dishP->setFixedSize(QSize(300,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QPushButton *agre=new QPushButton();
        agre->setText("Agregar");
        agre->setFixedSize(QSize(300,50));
        //q->setStyleSheet("background-color: rgb(138,198,242)");
       // QSignalMapper *mapper1=new QSignalMapper(this);
        //connect(q,SIGNAL(clicked(bool)),mapper1,SLOT(map()));
        //mapper1->setMapping(q,folio);
        //connect(mapper1,SIGNAL(mapped(QString)),this,SLOT(PonerCitas(QString)));

        ui->menuMar->addWidget(dishN,Cr,0,1,1);
        ui->menuMar->addWidget(dishP,Cr+1,0,1,1);
        ui->menuMar->addWidget(agre,Cr+2,0,1,1);

        //espacio entre las columnas
        QLabel *esp=new QLabel;

        esp->setFixedSize(QSize(50,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *esp2=new QLabel;
        esp2->setFixedSize(QSize(50,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QLabel *esp3=new QLabel();
        esp3->setFixedSize(QSize(50,50));

        ui->menuMar->addWidget(esp,Cr,1,1,1);
        ui->menuMar->addWidget(esp2,Cr+1,1,1,1);
        ui->menuMar->addWidget(esp3,Cr+2,1,1,1);



        //seguna columna
        if(!mar1.next())
        {

        }
        else {


        QLabel *dishN2=new QLabel;
        dishN2->setText(mar1.value(1).toString());
        dishN2->setFixedSize(QSize(300,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *dishP2=new QLabel;
        dishP2->setText(mar1.value(2).toString());
        dishP2->setFixedSize(QSize(300,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QPushButton *agre2=new QPushButton();
        agre2->setText("Agregar");
        agre2->setFixedSize(QSize(300,50));

        ui->menuMar->addWidget(dishN2,Cr,2,1,1);
        ui->menuMar->addWidget(dishP2,Cr+1,2,1,1);
        ui->menuMar->addWidget(agre2,Cr+2,2,1,1);
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
        //primera columna
        QLabel *dishN=new QLabel;
        dishN->setText(sopa1.value(1).toString());
        dishN->setFixedSize(QSize(300,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *dishP=new QLabel;
        dishP->setText(sopa1.value(2).toString());
        dishP->setFixedSize(QSize(300,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QPushButton *agre=new QPushButton();
        agre->setText("Agregar");
        agre->setFixedSize(QSize(300,50));
        //q->setStyleSheet("background-color: rgb(138,198,242)");
       // QSignalMapper *mapper1=new QSignalMapper(this);
        //connect(q,SIGNAL(clicked(bool)),mapper1,SLOT(map()));
        //mapper1->setMapping(q,folio);
        //connect(mapper1,SIGNAL(mapped(QString)),this,SLOT(PonerCitas(QString)));

        ui->menuSopa->addWidget(dishN,Cr,0,1,1);
        ui->menuSopa->addWidget(dishP,Cr+1,0,1,1);
        ui->menuSopa->addWidget(agre,Cr+2,0,1,1);

        //espacio entre las columnas
        QLabel *esp=new QLabel;

        esp->setFixedSize(QSize(50,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *esp2=new QLabel;
        esp2->setFixedSize(QSize(50,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QLabel *esp3=new QLabel();
        esp3->setFixedSize(QSize(50,50));

        ui->menuSopa->addWidget(esp,Cr,1,1,1);
        ui->menuSopa->addWidget(esp2,Cr+1,1,1,1);
        ui->menuSopa->addWidget(esp3,Cr+2,1,1,1);



        //seguna columna
        if(!sopa1.next())
        {

        }
        else {


        QLabel *dishN2=new QLabel;
        dishN2->setText(sopa1.value(1).toString());
        dishN2->setFixedSize(QSize(300,25));
        //fol->setStyleSheet("background-color: rgb("+rgb+")");



        QLabel *dishP2=new QLabel;
        dishP2->setText(sopa1.value(2).toString());
        dishP2->setFixedSize(QSize(300,25));
        //m->setStyleSheet("background-color: rgb("+rgb+")");


        QPushButton *agre2=new QPushButton();
        agre2->setText("Agregar");
        agre2->setFixedSize(QSize(300,50));

        ui->menuSopa->addWidget(dishN2,Cr,2,1,1);
        ui->menuSopa->addWidget(dishP2,Cr+1,2,1,1);
        ui->menuSopa->addWidget(agre2,Cr+2,2,1,1);
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

     while(QslEntradas.next()){

         //primera columna
         QLabel *nomPlat=new QLabel;
         nomPlat->setText(QslEntradas.value(1).toString());
         nomPlat->setStyleSheet("color:rgb(201, 37, 49)");

         QLabel *precio = new QLabel;
         precio->setText(QslEntradas.value(2).toString());
         precio->setStyleSheet("color:rgb(241, 241, 241)");

         QLabel *tiempo = new QLabel;
         tiempo->setText(QslEntradas.value(3).toString());
         tiempo->setStyleSheet("color:rgb(241, 241, 241)");

         QLabel *ingredientes = new QLabel;
         ingredientes->setText(QslEntradas.value(4).toString());
         ingredientes->setStyleSheet("color:rgb(241, 241, 241)");


         QPushButton *agregar1=new QPushButton();
         agregar1->setText("Agregar");
         agregar1->setFixedSize(QSize(80,25));
         agregar1->setStyleSheet("background-color:rgb(201, 37, 49)");

         ui->menuEntradas->addWidget(nomPlat,Cr,1,1,1);
         ui->menuEntradas->addWidget(ingredientes,Cr+1,1,1,1);
         ui->menuEntradas->addWidget(precio,Cr+2,1,1,1);
         ui->menuEntradas->addWidget(tiempo,Cr+3,1,1,1);
         ui->menuEntradas->addWidget(agregar1,Cr+4,1,1,1);

         QLabel *esp2=new QLabel;
         esp2->setFixedSize(QSize(20,15));
        // esp2->setStyleSheet("background-color:rgb(201, 37, 49)");

         //CENTRO
         ui->menuEntradas->addWidget(esp2,Cr+1,2,1,1);

         if(!QslEntradas.next())
     {

       }else {
        //seguna columna

             QLabel *nomPlat2=new QLabel;
             nomPlat2->setText(QslEntradas.value(1).toString());
             nomPlat2->setStyleSheet("color:rgb(201, 37, 49)");


             QLabel *precio2= new QLabel;
             precio2->setText(QslEntradas.value(2).toString());
             precio2->setStyleSheet("color:rgb(241, 241, 241)");

             QLabel *tiempo2 = new QLabel;
             tiempo2->setText(QslEntradas.value(3).toString());
             tiempo2->setStyleSheet("color:rgb(241, 241, 241)");

             QLabel *ingredientes2 = new QLabel;
             QString ing=QslEntradas.value(4).toString();
             //qDebug()<<ing.size();
             if(ing.size()>60){
               ing.remove(1,43);
             }
             ingredientes2->setText(ing);
             ingredientes2->setStyleSheet("color:rgb(241, 241, 241)");

             QPushButton *agregar2=new QPushButton();
             agregar2->setText("Agregar");
             agregar2->setFixedSize(QSize(80,25));
             agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");

             ui->menuEntradas->addWidget(nomPlat2,Cr,3,1,1);
             ui->menuEntradas->addWidget(ingredientes2,Cr+1,3,1,1);
             ui->menuEntradas->addWidget(precio2,Cr+2,3,1,1);
             ui->menuEntradas->addWidget(tiempo2,Cr+3,3,1,1);
             ui->menuEntradas->addWidget(agregar2,Cr+4,3,1,1);

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

    while (QslGuarni.next()) {

        QLabel *nomPlat=new QLabel;
        nomPlat->setText(QslGuarni.value(1).toString());
        nomPlat->setStyleSheet("color:rgb(201, 37, 49)");

        QLabel *precio = new QLabel;
        precio->setText(QslGuarni.value(2).toString());
        precio->setStyleSheet("color:rgb(241, 241, 241)");

        QLabel *tiempo = new QLabel;
        tiempo->setText(QslGuarni.value(3).toString());
        tiempo->setStyleSheet("color:rgb(241, 241, 241)");

        QPushButton *agregar=new QPushButton();
        agregar->setText("Agregar");
        agregar->setFixedSize(QSize(170,50));
        agregar->setStyleSheet("background-color:rgb(201, 37, 49)");

        ui->menuGuarnicion->addWidget(nomPlat,Cr,1,1,1);
        ui->menuGuarnicion->addWidget(precio,Cr+1,1,1,1);
        ui->menuGuarnicion->addWidget(tiempo,Cr+2,1,1,1);
        ui->menuGuarnicion->addWidget(agregar,Cr+3,1,1,1);


        QLabel *esp=new QLabel;
        esp->setFixedSize(QSize(50,15));
        //esp->setStyleSheet("background-color: rgb(138,198,242)");

        QLabel *esp2=new QLabel;
        esp2->setFixedSize(QSize(190,15));
        //esp2->setStyleSheet("background-color: rgb(138,198,242)");



        //IZQUIERDA
         ui->menuGuarnicion->addWidget(esp,Cr,0,1,1);

         //CENTRO
         ui->menuGuarnicion->addWidget(esp2,Cr+1,2,1,1);


        //seguna columna
        if(!QslGuarni.next())
        {

        }
        else {

            QLabel *nomPlat2=new QLabel;
            nomPlat2->setText(QslGuarni.value(1).toString());
            nomPlat2->setStyleSheet("color:rgb(201, 37, 49)");

            QLabel *precio2 = new QLabel;
            precio2->setText(QslGuarni.value(2).toString());
            precio2->setStyleSheet("color:rgb(241, 241, 241)");

            QLabel *tiempo2 = new QLabel;
            tiempo2->setText(QslGuarni.value(3).toString());
            tiempo2->setStyleSheet("color:rgb(241, 241, 241)");

            QPushButton *agregar2=new QPushButton();
            agregar2->setText("Agregar");
            agregar2->setFixedSize(QSize(180,50));
            agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");

            ui->menuGuarnicion->addWidget(nomPlat2,Cr,3,1,1);
            ui->menuGuarnicion->addWidget(precio2,Cr+1,3,1,1);
            ui->menuGuarnicion->addWidget(tiempo2,Cr+2,3,1,1);
            ui->menuGuarnicion->addWidget(agregar2,Cr+3,3,1,1);

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

        //primera columna
        QLabel *nomPlat=new QLabel;
        nomPlat->setText(QslPostres.value(1).toString());
        nomPlat->setStyleSheet("color:rgb(201, 37, 49)");


        QLabel *precio = new QLabel;
        precio->setText(QslPostres.value(2).toString());
        precio->setStyleSheet("color:rgb(241, 241, 241)");

        QLabel *tiempo = new QLabel;
        tiempo->setText(QslPostres.value(3).toString());
        tiempo->setStyleSheet("color:rgb(241, 241, 241)");

        QLabel *ingredientes = new QLabel;
        QString ing=QslPostres.value(4).toString();
       // qDebug()<<ing.size();
        if(ing.size()>75){
          ing.remove(1,63);
        }
        ingredientes->setText(ing);
        ingredientes->setStyleSheet("color:rgb(241, 241, 241)");


        QPushButton *agregar1=new QPushButton();
        agregar1->setText("Agregar");
        agregar1->setFixedSize(QSize(180,50));
        agregar1->setStyleSheet("background-color:rgb(201, 37, 49)");

        ui->menuReposteria->addWidget(nomPlat,Cr,1,1,1);
        ui->menuReposteria->addWidget(ingredientes,Cr+1,1,1,1);
        ui->menuReposteria->addWidget(precio,Cr+2,1,1,1);
        ui->menuReposteria->addWidget(tiempo,Cr+3,1,1,1);
        ui->menuReposteria->addWidget(agregar1,Cr+4,1,1,1);

        QLabel *esp2=new QLabel;
        esp2->setFixedSize(QSize(20,15));
        esp2->setStyleSheet("background-color: rgb(201,37,49)");

        //CENTRO
        ui->menuReposteria->addWidget(esp2,Cr+1,2,1,1);

        if(!QslPostres.next())
    {

      }else {
       //seguna columna

            QLabel *nomPlat2=new QLabel;
            nomPlat2->setText(QslPostres.value(1).toString());
            nomPlat2->setStyleSheet("color:rgb(201, 37, 49)");

            QLabel *precio2= new QLabel;
            precio2->setText(QslPostres.value(2).toString());
            precio2->setStyleSheet("color:rgb(241, 241, 241)");

            QLabel *tiempo2 = new QLabel;
            tiempo2->setText(QslPostres.value(3).toString());
            tiempo2->setStyleSheet("color:rgb(241, 241, 241)");

            QLabel *ingredientes2 = new QLabel;
            QString ing=QslPostres.value(4).toString();
           // qDebug()<<"h"<<ing.size();
            if(ing.size()>60){
              ing.remove(1,80);
            }
            ingredientes2->setText(ing);
            ingredientes2->setStyleSheet("color:rgb(241, 241, 241)");

            QPushButton *agregar2=new QPushButton();
            agregar2->setText("Agregar");
            agregar2->setFixedSize(QSize(180,50));
            agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");

            ui->menuReposteria->addWidget(nomPlat2,Cr,3,1,1);
             ui->menuReposteria->addWidget(ingredientes2,Cr+1,3,1,1);
            ui->menuReposteria->addWidget(precio2,Cr+2,3,1,1);
            ui->menuReposteria->addWidget(tiempo2,Cr+3,3,1,1);
            ui->menuReposteria->addWidget(agregar2,Cr+4,3,1,1);
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

        QLabel *nomPlat=new QLabel;
        nomPlat->setText(QslInfantil.value(1).toString());
        nomPlat->setStyleSheet("color:rgb(201, 37, 49)");

        QLabel *precio = new QLabel;
        precio->setText(QslInfantil.value(2).toString());
        precio->setStyleSheet("color:rgb(241, 241, 241)");

        QLabel *tiempo = new QLabel;
        tiempo->setText(QslInfantil.value(3).toString());
        tiempo->setStyleSheet("color:rgb(241, 241, 241)");

        QPushButton *agregar=new QPushButton();
        agregar->setText("Agregar");
        agregar->setFixedSize(QSize(180,50));
        agregar->setStyleSheet("background-color:rgb(201, 37, 49)");

        ui->menuInfantil->addWidget(nomPlat,Cr,1,1,1);
        ui->menuInfantil->addWidget(precio,Cr+1,1,1,1);
        ui->menuInfantil->addWidget(tiempo,Cr+2,1,1,1);
        ui->menuInfantil->addWidget(agregar,Cr+3,1,1,1);


        QLabel *esp=new QLabel;
        esp->setFixedSize(QSize(50,15));
        //esp->setStyleSheet("background-color: rgb(138,198,242)");

        QLabel *esp2=new QLabel;
        esp2->setFixedSize(QSize(190,15));
        //esp2->setStyleSheet("background-color: rgb(138,198,242)");

        QLabel *esp3=new QLabel();
        esp3->setFixedSize(QSize(50,15));
        //esp3->setStyleSheet("background-color: rgb(138,198,242)");




        //IZQUIERDA
         ui->menuInfantil->addWidget(esp,Cr,0,1,1);

         //CENTRO
         ui->menuInfantil->addWidget(esp2,Cr+1,2,1,1);

         //DERECHA
         ui->menuInfantil->addWidget(esp3,Cr+2,4,1,1);



        //seguna columna
        if(!QslInfantil.next())
        {

        }
        else {

            QLabel *nomPlat2=new QLabel;
            nomPlat2->setText(QslInfantil.value(1).toString());
            nomPlat2->setStyleSheet("color:rgb(201, 37, 49)");

            QLabel *precio2 = new QLabel;
            precio2->setText(QslInfantil.value(2).toString());
            precio2->setStyleSheet("color:rgb(241, 241, 241)");

            QLabel *tiempo2 = new QLabel;
            tiempo2->setText(QslInfantil.value(3).toString());
            tiempo2->setStyleSheet("color:rgb(241, 241, 241)");

            QPushButton *agregar2=new QPushButton();
            agregar2->setText("Agregar");
            agregar2->setFixedSize(QSize(180,50));
            agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");

            ui->menuInfantil->addWidget(nomPlat2,Cr,3,1,1);
            ui->menuInfantil->addWidget(precio2,Cr+1,3,1,1);
            ui->menuInfantil->addWidget(tiempo2,Cr+2,3,1,1);
            ui->menuInfantil->addWidget(agregar2,Cr+3,3,1,1);

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
         //qDebug()<<"con alcohol";
        QLabel *nomPlat=new QLabel;
        nomPlat->setText(QslCoctel.value(1).toString());
        nomPlat->setStyleSheet("color:rgb(201, 37, 49)");

        QLabel *precio = new QLabel;
        precio->setText(QslCoctel.value(2).toString());
        precio->setStyleSheet("color:rgb(241, 241, 241)");

        QLabel *ingredientes = new QLabel;
        QString ing=QslCoctel.value(3).toString();
        qDebug()<<ing.size();
        if(ing.size()>100){
          ing.remove(1,61);
        }
        ingredientes->setText(ing);
        ingredientes->setStyleSheet("color:rgb(241, 241, 241)");


        QPushButton *agregar=new QPushButton();
        agregar->setText("Agregar");
        agregar->setFixedSize(QSize(80,25));
        agregar->setStyleSheet("background-color:rgb(201, 37, 49)");
        //agregar->setStyleSheet("color:rgb(241, 241, 241)");

        ui->menuCoteles->addWidget(nomPlat,Cr,1,1,1);
        ui->menuCoteles->addWidget(precio,Cr+1,1,1,1);
        ui->menuCoteles->addWidget(ingredientes,Cr+2,1,1,1);
        ui->menuCoteles->addWidget(agregar,Cr+3,1,1,1);

    }
     else {

                // qDebug()<<"sin alcohol";
            QLabel *nomPlat2=new QLabel;
            nomPlat2->setText(QslCoctel.value(1).toString());
            nomPlat2->setStyleSheet("color:rgb(201, 37, 49)");

            QLabel *precio2 = new QLabel;
            precio2->setText(QslCoctel.value(2).toString());
            precio2->setStyleSheet("color:rgb(241, 241, 241)");

            QLabel *ingredientes2 = new QLabel;
            QString ing2=QslCoctel.value(3).toString();
            qDebug()<<ing2.size();
            qDebug()<<ing2.remove(1,35);
            ingredientes2->setText(ing2);
            ingredientes2->setStyleSheet("color:rgb(241, 241, 241)");

            QPushButton *agregar2=new QPushButton();
            agregar2->setText("Agregar");
            agregar2->setFixedSize(QSize(80,25));
            agregar2->setStyleSheet("background-color:rgb(201, 37, 49)");
            //agregar2->setStyleSheet("color:rgb(241, 241, 241)");

            ui->menuCoteles->addWidget(nomPlat2,cr,2,1,1);
            ui->menuCoteles->addWidget(precio2,cr+1,2,1,1);
            ui->menuCoteles->addWidget(ingredientes2,cr+2,2,1,1);
            ui->menuCoteles->addWidget(agregar2,cr+3,2,1,1);
            cr+=4;
    }

     Cr+=4;
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
            //fol->setStyleSheet("background-color: rgb("+rgb+")");



            QLabel *dishP=new QLabel;
            dishP->setText(vino1.value(2).toString());
            dishP->setFixedSize(QSize(300,25));
            //m->setStyleSheet("background-color: rgb("+rgb+")");


            QPushButton *agre=new QPushButton();
            agre->setText("Agregar");
            agre->setFixedSize(QSize(300,50));
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
            //fol->setStyleSheet("background-color: rgb("+rgb+")");



            QLabel *dishP2=new QLabel;
            dishP2->setText(vino1.value(2).toString());
            dishP2->setFixedSize(QSize(300,25));
            //m->setStyleSheet("background-color: rgb("+rgb+")");


            QPushButton *agre2=new QPushButton();
            agre2->setText("Agregar");
            agre2->setFixedSize(QSize(300,50));

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
    ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesas_clicked(){ui->paginas->setCurrentIndex(0);}

void Principal_Mesero::on_bebidas_clicked()
{ 
    //codigo agregado joaquin
    clearLayout(ui->menuVinos);
     clearLayout(ui->menuCoteles);
     ui->paginas->setCurrentIndex(10);
}



void Principal_Mesero::on_mesa_1_clicked()
{

ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_2_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_3_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_4_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_5_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_6_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_7_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_8_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_9_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_10_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_11_clicked()
{
ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesa_12_clicked()
{
ui->paginas->setCurrentIndex(1);
}
