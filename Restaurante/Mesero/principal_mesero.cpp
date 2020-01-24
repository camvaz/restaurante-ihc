#include "principal_mesero.h"
#include "ui_principal_mesero.h"

Principal_Mesero::Principal_Mesero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal_Mesero)
{
    ui->setupUi(this);
}

Principal_Mesero::~Principal_Mesero()
{
    delete ui;
}
