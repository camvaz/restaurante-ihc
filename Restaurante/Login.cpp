#include "Login.h"
#include "ui_Login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QPixmap imagen;
    imagen.load("C:/imagenes/logo.png");
    ui->IMG->setFixedSize(ui->IMG->width(),ui->IMG->height());
    ui->IMG->setPixmap(imagen);
    ui->IMG->setScaledContents(true);

}
// CREAR DOS CONSTRUCTORES DONDE DEPENDIENDO LO QUE INGRESE
// PUEDA HACER EL LOGIN PARA LA PERSONA SELECCIONADA O PARA
// UNA PERSONA QUE NO TIENE CUADRO DENTRO DE LA SECCION LOGIN
Login::~Login()
{
    delete ui;
}
