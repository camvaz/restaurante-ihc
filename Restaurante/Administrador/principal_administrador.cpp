#include "principal_administrador.h"
#include "ui_principal_administrador.h"

principal_administrador::principal_administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_administrador)
{
    ui->setupUi(this);
}

principal_administrador::~principal_administrador()
{
    delete ui;
}

void principal_administrador::on_perfiles_clicked()
{
ui->opcionesAdmi->setCurrentIndex(0);

}

void principal_administrador::on_inventario_clicked()
{
    ui->opcionesAdmi->setCurrentIndex(1);
}

void principal_administrador::on_mapa_de_piso_clicked()
{
    ui->opcionesAdmi->setCurrentIndex(2);
}

void principal_administrador::on_Reportes_clicked()
{
    ui->opcionesAdmi->setCurrentIndex(3);
}

void principal_administrador::on_perfil_admi_clicked()
{
       ui->opcionesAdmi->setCurrentIndex(4);
}
