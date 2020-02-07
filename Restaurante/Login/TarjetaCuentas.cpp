#include "TarjetaCuentas.h"
#include "ui_TarjetaCuentas.h"

TarjetaCuentas::TarjetaCuentas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TarjetaCuentas)
{
    ui->setupUi(this);
}

TarjetaCuentas::TarjetaCuentas(QString id,QWidget *parent):QWidget(parent), ui(new Ui::TarjetaCuentas){
    ui->setupUi(this);
    QSqlQuery cuentas;
    cuentas.prepare("select * from User where idUsuario = '"+ id +"'");
    cuentas.exec();
    cuentas.next();

    //Obteniendo datos
    QString nombre,ruta;
    nombre  = cuentas.value(1).toString();
    ruta    = cuentas.value(2).toString();
    QPixmap imagen;
    imagen.load(ruta);

    // Llenando de datos el Widget tarjeta
    ui->labelIMGCuenta->setFixedSize(ui->labelIMGCuenta->width(),ui->labelIMGCuenta->height());
    ui->labelNombre->setText(nombre);
    ui->labelIMGCuenta->setPixmap(imagen);
    ui->labelIMGCuenta->setScaledContents(true);

}

TarjetaCuentas::~TarjetaCuentas()
{
    delete ui;
}
