#include "principal_cajero.h"
#include "ui_principal_cajero.h"

principal_cajero::principal_cajero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_cajero)
{
    ui->setupUi(this);
}

principal_cajero::~principal_cajero()
{
    delete ui;
}
