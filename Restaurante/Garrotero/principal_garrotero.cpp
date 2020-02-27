#include "principal_garrotero.h"
#include "ui_principal_garrotero.h"

principal_garrotero::principal_garrotero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_garrotero)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(0,&piso);
    ui->stackedWidget->setCurrentIndex(0);
}

principal_garrotero::principal_garrotero(QString id,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_garrotero)
{
    ui->setupUi(this);
    identifier  =   id;
    ui->stackedWidget->insertWidget(0,&piso);
    ui->stackedWidget->setCurrentIndex(0);
}

principal_garrotero::~principal_garrotero()
{
    delete ui;
}
