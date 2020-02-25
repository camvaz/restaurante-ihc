#include "tarjetaplatillo.h"
#include "ui_tarjetaplatillo.h"

tarjetaPlatillo::tarjetaPlatillo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tarjetaPlatillo)
{
    ui->setupUi(this);
}

tarjetaPlatillo::~tarjetaPlatillo()
{
    delete ui;
}
