#include "principal_bartender.h"
#include "ui_principal_bartender.h"

principal_bartender::principal_bartender(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_bartender)
{
    ui->setupUi(this);
}

principal_bartender::~principal_bartender()
{
    delete ui;
}
