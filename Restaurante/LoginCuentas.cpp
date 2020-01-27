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

void LoginCuentas::clearLayout(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))){
        if (item->layout()){
            clearLayout(item->layout());
            delete  item->layout();
        }
        if (item->widget()){
            delete item->widget();
        }
        delete item;
    }
}

void LoginCuentas::recargar(){
    int contadorc=0,contadorf=0;
    clearLayout(ui->LayLogin);
    QSqlQuery cuentas;
    cuentas.prepare("select * from Usuario");
    cuentas.exec();
    while (cuentas.next()){

    }
}
