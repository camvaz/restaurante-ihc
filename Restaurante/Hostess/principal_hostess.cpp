#include "principal_hostess.h"
#include "ui_principal_hostess.h"
principal_hostess::principal_hostess(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_hostess)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(0,&piso);
    ui->stackedWidget->setCurrentIndex(0);
}

principal_hostess::principal_hostess(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_hostess)
{
    ui->setupUi(this);
    identifier = id;
     ui->stackedWidget->insertWidget(0,&piso);
     ui->stackedWidget->setCurrentIndex(0);

}

principal_hostess::~principal_hostess()
{
    delete ui;
}
