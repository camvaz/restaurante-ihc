#include "LoginCuentas.h"
#include "ui_LoginCuentas.h"

LoginCuentas::LoginCuentas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginCuentas)
{
    ui->setupUi(this);
}

LoginCuentas::~LoginCuentas()
{
    delete ui;
}
