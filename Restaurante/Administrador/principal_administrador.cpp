#include "principal_administrador.h"
#include "ui_principal_administrador.h"

principal_administrador::principal_administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_administrador)
{
    ui->setupUi(this);
}

principal_administrador::~principal_administrador()
{
    delete ui;
}
