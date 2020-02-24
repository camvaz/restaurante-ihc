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

}

mensaje::~mensaje()
{
    delete ui;
}

void mensaje::on_pushButton_2_clicked()
{
    close();
}
