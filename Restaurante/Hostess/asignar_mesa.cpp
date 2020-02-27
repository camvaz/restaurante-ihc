#include "asignar_mesa.h"
#include "ui_asignar_mesa.h"

Asignar_mesa::Asignar_mesa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Asignar_mesa)
{
    ui->setupUi(this);
}

Asignar_mesa::~Asignar_mesa()
{
    delete ui;
}
