#include "ver_info_usuario.h"
#include "ui_ver_info_usuario.h"
#include <QSqlDatabase>
#include <QDebug>
#include "crear_usuario.h"

ver_info_usuario::ver_info_usuario(QString id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ver_info_usuario)
{
    ui->setupUi(this);
    bandera_info_personal=0;
    bandera_datos_empleado=0;
    bandera_actividades=0;
    bandera_credenciales=0;
    ui->frame_info_personal->hide();
    ui->frame_datos_empleado->hide();
    ui->frame_actividades->hide();
    ui->frame_credenciales->hide();
    idUsuario=id;

    actualizarDatos();

}

ver_info_usuario::~ver_info_usuario()
{
    delete ui;
}

void ver_info_usuario::on_btn_InfoPersonal_clicked()
{
    if(bandera_info_personal==0)
    {
        ui->frame_info_personal->show();
        bandera_info_personal=1;
    }else
    {
        ui->frame_info_personal->hide();
        bandera_info_personal=0;
    }
}

void ver_info_usuario::on_btn_InfoPersonal2_clicked()
{
    if(bandera_info_personal==0)
    {
        ui->frame_info_personal->show();
        bandera_info_personal=1;
    }else
    {
        ui->frame_info_personal->hide();
        bandera_info_personal=0;
    }
}

void ver_info_usuario::on_btn_datosEmpleado_clicked()
{
    if(bandera_datos_empleado==0)
    {
        ui->frame_datos_empleado->show();
        bandera_datos_empleado=1;
    }else
    {
        ui->frame_datos_empleado->hide();
        bandera_datos_empleado=0;
    }
}

void ver_info_usuario::on_btn_datosEmpleado2_clicked()
{
    if(bandera_datos_empleado==0)
    {
        ui->frame_datos_empleado->show();
        bandera_datos_empleado=1;
    }else
    {
        ui->frame_datos_empleado->hide();
        bandera_datos_empleado=0;
    }
}



void ver_info_usuario::on_btn_actividad_clicked()
{
    if(bandera_actividades==0)
    {
        ui->frame_actividades->show();
        bandera_actividades=1;
    }else {
        ui->frame_actividades->hide();
        bandera_actividades=0;

    }
}

void ver_info_usuario::on_btn_actividad2_clicked()
{
    if(bandera_actividades==0)
    {
        ui->frame_actividades->show();
        bandera_actividades=1;
    }else {
        ui->frame_actividades->hide();
        bandera_actividades=0;

    }
}

void ver_info_usuario::on_btn_editar_clicked()
{
    crear_usuario *u=new crear_usuario();
    u->setID(idUsuario);
    u->cargarDatos();
    u->exec();
    actualizarDatos();
}

void ver_info_usuario::actualizarDatos()
{
    ui->lbl_ID->setText(idUsuario);
    QSqlQuery query;
    query.prepare("select * from informacionpersonal where Usuario_idUsuario="+idUsuario);
    query.exec();
    while(query.next())
    {
        ui->lbl_nombre->setText(query.value(0).toString());
        ui->lbl_rfc->setText(query.value(1).toString());
        ui->lbl_curp->setText(query.value(2).toString());
        ui->lbl_telefono->setText(query.value(3).toString());
        ui->lbl_direccion->setText(query.value(4).toString());
        ui->lbl_email->setText(query.value(5).toString());

    }
    query.prepare("select * from nomina where Usuario_idUsuario="+idUsuario);
    query.exec();
    while(query.next())
    {
        ui->lbl_salario->setText(query.value(0).toString());
        ui->lbl_hr_entrada->setText(query.value(1).toString());
        ui->lbl_hr_salida->setText(query.value(2).toString());
    }

    query.prepare("SELECT * FROM usuario where idUsuario="+idUsuario);
    query.exec();
    while(query.next())
    {
        ui->lbl_usuario->setText(query.value(3).toString());
        ui->lbl_puesto->setText(query.value(2).toString());
        ui->lbl_contrasena->setText(query.value(1).toString());

    }
}

void ver_info_usuario::on_btn_credenciales_clicked()
{
    if(bandera_credenciales==0)
    {
        ui->frame_credenciales->show();
        bandera_credenciales=1;
    }else
    {
        ui->frame_credenciales->hide();
        bandera_credenciales=0;
    }
}

void ver_info_usuario::on_btn_credenciales_2_clicked()
{
    if(bandera_credenciales==0)
    {
        ui->frame_credenciales->show();
        bandera_credenciales=1;
    }else
    {
        ui->frame_credenciales->hide();
         bandera_credenciales=0;
    }

}
