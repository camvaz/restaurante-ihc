#include "Inventario.h"
#include "ui_Inventario.h"

Inventario::Inventario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inventario)
{
    ui->setupUi(this);
}

Inventario::~Inventario()
{
    delete ui;
}
