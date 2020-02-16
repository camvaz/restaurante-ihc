#include "principal_garrotero.h"
#include "ui_principal_garrotero.h"

principal_garrotero::principal_garrotero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_garrotero)
{
    ui->setupUi(this);
}

principal_garrotero::principal_garrotero(QString id,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_garrotero)
{
    ui->setupUi(this);
    identifier  =   id;
}

principal_garrotero::~principal_garrotero()
{
    delete ui;
}
