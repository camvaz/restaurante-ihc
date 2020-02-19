#include "principal_administrador.h"
#include "ui_principal_administrador.h"
#include "widget_perfiles_usuarios.h"
#include "Administrador/crear_usuario.h"
principal_administrador::principal_administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_administrador)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(0,&perfiles);
    ui->stackedWidget->setCurrentIndex(0);
}

principal_administrador::~principal_administrador()
{
    delete ui;
}

void principal_administrador::on_perfiles_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    crear_usuario *u=new crear_usuario();
    u->exec();

}

void principal_administrador::on_inventario_clicked()
{
}

void principal_administrador::on_mapa_de_piso_clicked()
{
}

void principal_administrador::on_Reportes_clicked()
{
}

void principal_administrador::on_perfil_admi_clicked()
{
}
