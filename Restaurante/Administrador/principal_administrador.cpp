#include "principal_administrador.h"
#include "ui_principal_administrador.h"
#include "widget_perfiles_usuarios.h"
#include "Administrador/crear_usuario.h"
principal_administrador::principal_administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_administrador)
{
    ui->setupUi(this);
    QString botones;
    botones="C:/Imagenes tamaño pequeño/account";QIcon boton_users(botones);ui->perfiles->setIcon(boton_users);
    botones="C:/Imagenes tamaño pequeño/trolley";QIcon boton_inventario(botones);ui->inventario->setIcon(boton_inventario);
    botones="C:/Imagenes tamaño pequeño/dining-table";QIcon boton_mesas(botones);ui->mapa_de_piso->setIcon(boton_mesas);
    botones="C:/Imagenes tamaño pequeño/money";QIcon boton_reportes(botones);ui->Reportes->setIcon(boton_reportes);
    ui->stackedWidget->insertWidget(0,&perfiles);
    ui->stackedWidget->insertWidget(1,&piso);
    ui->stackedWidget->insertWidget(2,&inv);
    ui->stackedWidget->setCurrentIndex(0);
}

principal_administrador::~principal_administrador()
{
    delete ui;
}

void principal_administrador::on_perfiles_clicked()
{
    perfiles.cargarPerfiles();
    ui->stackedWidget->setCurrentIndex(0);

}

void principal_administrador::on_inventario_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void principal_administrador::on_mapa_de_piso_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void principal_administrador::on_Reportes_clicked()
{
}

void principal_administrador::on_perfil_admi_clicked()
{

}
