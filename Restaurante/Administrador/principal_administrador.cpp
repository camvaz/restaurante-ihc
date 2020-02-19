#include "principal_administrador.h"
#include "ui_principal_administrador.h"
#include "crear_usuario.h"
#include "Administrador/inventario/Inventario.h"

principal_administrador::principal_administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_administrador)
{
    ui->setupUi(this);
    Winventario = new Inventario(nullptr);
    ui->stackedWidget->insertWidget(1,Winventario);
}

principal_administrador::~principal_administrador()
{
    delete ui;
}

void principal_administrador::on_perfiles_clicked()
{
    crear_usuario *u1=new crear_usuario();
    u1->exec();
    u1->show();

}

void principal_administrador::on_inventario_clicked()
{
    //ui->stackedWidget->setCurrentWidget(Winventario);
    ui->stackedWidget->setCurrentIndex(1);
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
