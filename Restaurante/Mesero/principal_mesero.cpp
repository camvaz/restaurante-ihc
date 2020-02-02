#include "principal_mesero.h"
#include "ui_principal_mesero.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>

Principal_Mesero::Principal_Mesero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal_Mesero)
{
    ui->setupUi(this);
    //METODO QUE CARGA LAS IMAGENES
    CargarImagenes();

    QSqlDatabase database;

       database= QSqlDatabase::addDatabase("QMYSQL");
       database.setHostName("localhost");
       database.setPort(3306);
       database.setDatabaseName("restaurante");
       database.setUserName("root");
       database.setPassword("");
       if(!database.open()){
           qDebug()<<database.lastError().text();

       }
       else {
           qDebug()<<"Base de datos conectada";
       }

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

void Principal_Mesero::on_entrada_clicked(){ui->paginas->setCurrentIndex(6);}

void Principal_Mesero::on_guarnicion_clicked(){ui->paginas->setCurrentIndex(7);}

void Principal_Mesero::on_reposteria_clicked(){ui->paginas->setCurrentIndex(8);}

void Principal_Mesero::on_infantil_clicked(){ui->paginas->setCurrentIndex(9);}

void Principal_Mesero::on_coctel_clicked(){ui->paginas->setCurrentIndex(11);}

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
    //agrego joaquin
    ui->paginas->setCurrentIndex(1);
}

void Principal_Mesero::on_mesas_clicked(){ui->paginas->setCurrentIndex(0);}

void Principal_Mesero::on_bebidas_clicked()
{
    ui->paginas->setCurrentIndex(10);
    //codigo agregado joaquin
    clearLayout(ui->menuVinos);
}



