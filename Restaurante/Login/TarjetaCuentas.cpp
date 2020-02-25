#include "TarjetaCuentas.h"
#include "ui_TarjetaCuentas.h"
#include "Login/Login.h"
#include <QSqlError>
#include <QDebug>

TarjetaCuentas::TarjetaCuentas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TarjetaCuentas)
{
    ui->setupUi(this);

    QPixmap imagen;
    imagen.load("/home/roberthlml/Descargas/BD_restaurante/billi.jpeg");
    // Llenando de datos el Widget tarjeta
        ui->labelIMGCuenta->setFixedSize(ui->labelIMGCuenta->width(),ui->labelIMGCuenta->height());
        ui->labelNombre->setText("Billie");
        ui->labelIMGCuenta->setPixmap(imagen);
        ui->labelIMGCuenta->setScaledContents(true);
}

TarjetaCuentas::TarjetaCuentas(QString id,QWidget *parent):QWidget(parent), ui(new Ui::TarjetaCuentas){
    ui->setupUi(this);
    QSqlQuery cuentas;
    cuentas.prepare("select idUsuario,nombre,foto from User where idUsuario = '"+ id +"'");
    if (cuentas.exec()){
    while (cuentas.next()){

    //Obteniendo datos
        QString nombre,ruta;
        id_tarjeta  = cuentas.value(0).toString();
        nombre      = cuentas.value(1).toString();
        ruta        = cuentas.value(2).toString();
        img         = ruta;
        QPixmap imagen;
        imagen.load(ruta);

        qDebug()<<"nombre: "+ nombre;

        qDebug()<<"Ruta de imagen: "+ ruta;

    // Llenando de datos el Widget tarjeta
        ui->labelIMGCuenta->setFixedSize(ui->labelIMGCuenta->width(),ui->labelIMGCuenta->height());
        ui->labelNombre->setText(nombre);
        ui->labelIMGCuenta->setPixmap(imagen);
        ui->labelIMGCuenta->setScaledContents(true);
       }
    }
    else{
        qDebug()<<cuentas.lastQuery();
        qDebug()<<cuentas.lastError();
    }
}


TarjetaCuentas::~TarjetaCuentas()
{
    delete ui;
}

void TarjetaCuentas::mousePressEvent(QMouseEvent *event){
    Q_UNUSED(event)
    qDebug()<<"ah Perro si presionas...";
    qDebug()<<"Presionando a "+ui->labelNombre->text()+"...";
    Login *w = new Login(id_tarjeta,img);
    w->show();

}
