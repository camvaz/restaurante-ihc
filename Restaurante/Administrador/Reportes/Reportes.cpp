#include "Reportes.h"
#include "ui_Reportes.h"

Reportes::Reportes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reportes)
{
    ui->setupUi(this);
}

Reportes::~Reportes()
{
    delete ui;
}
