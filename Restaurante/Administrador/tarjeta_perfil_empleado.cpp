#include "tarjeta_perfil_empleado.h"
#include "ui_tarjeta_perfil_empleado.h"

tarjeta_perfil_empleado::tarjeta_perfil_empleado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tarjeta_perfil_empleado)
{
    ui->setupUi(this);
}

tarjeta_perfil_empleado::~tarjeta_perfil_empleado()
{
    delete ui;
}
