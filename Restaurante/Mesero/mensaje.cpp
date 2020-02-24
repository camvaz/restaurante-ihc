#include "mensaje.h"
#include "ui_mensaje.h"

mensaje::mensaje(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mensaje)
{
    ui->setupUi(this);

    QString imagen;
    imagen="C:/Imagenes tamaño pequeño/Advertencia";
    QPixmap adver(imagen);
   ui->Advertencia->setPixmap(adver);
/*
   QMovie *movie = new QMovie("C:/Imagenes tamaño pequeño/ /loading.gif");
   QLabel *processLabel = new QLabel(this);
   processLabel->setMovie(movie);
   movie->start();*/
}

mensaje::~mensaje()
{
    delete ui;
}
