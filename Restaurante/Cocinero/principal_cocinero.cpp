#include "principal_cocinero.h"
#include "ui_principal_cocinero.h"

principal_cocinero::principal_cocinero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_cocinero)
{
    ui->setupUi(this);
}

principal_cocinero::~principal_cocinero()
{
    delete ui;
}
