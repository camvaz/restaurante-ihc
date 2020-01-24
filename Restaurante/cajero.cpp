#include "cajero.h"
#include "ui_cajero.h"

Cajero::Cajero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cajero)
{
    ui->setupUi(this);
}

Cajero::~Cajero()
{
    delete ui;
}
