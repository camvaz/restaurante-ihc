#include "Login.h"
#include "ui_Login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}
// CREAR DOS CONSTRUCTORES DONDE DEPENDIENDO LO QUE INGRESE
// PUEDA HACER EL LOGIN PARA LA PERSONA SELECCIONADA O PARA
// UNA PERSONA QUE NO TIENE CUADRO DENTRO DE LA SECCION LOGIN
Login::~Login()
{
    delete ui;
}
