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

Principal_Mesero::~Principal_Mesero()
{
    delete ui;
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
void Principal_Mesero::on_parilla_clicked(){ui->paginas->setCurrentIndex(2);}

void Principal_Mesero::on_ensalada_clicked(){ui->paginas->setCurrentIndex(3);}

void Principal_Mesero::on_mar_clicked(){ui->paginas->setCurrentIndex(4);}

void Principal_Mesero::on_sopa_clicked(){ui->paginas->setCurrentIndex(5);}

void Principal_Mesero::on_entrada_clicked(){ui->paginas->setCurrentIndex(6);}

void Principal_Mesero::on_guarnicion_clicked(){ui->paginas->setCurrentIndex(7);}

void Principal_Mesero::on_reposteria_clicked(){ui->paginas->setCurrentIndex(8);}

void Principal_Mesero::on_infantil_clicked(){ui->paginas->setCurrentIndex(9);}

void Principal_Mesero::on_coctel_clicked(){ui->paginas->setCurrentIndex(11);}

void Principal_Mesero::on_vino_clicked(){ui->paginas->setCurrentIndex(12);}

//SLOT DE MENU DE NAVEGACION
void Principal_Mesero::on_comanda_clicked(){ui->paginas->setCurrentIndex(1);}

void Principal_Mesero::on_mesas_clicked(){ui->paginas->setCurrentIndex(0);}

void Principal_Mesero::on_bebidas_clicked(){ui->paginas->setCurrentIndex(10);}



