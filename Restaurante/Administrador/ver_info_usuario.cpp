#include "ver_info_usuario.h"
#include "ui_ver_info_usuario.h"

ver_info_usuario::ver_info_usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ver_info_usuario)
{
    ui->setupUi(this);
    bandera_info_personal=0;
    bandera_datos_empleado=0;
    bandera_actividades=0;
    ui->frame_info_personal->hide();
    ui->frame_info_personal->hide();
    ui->frame_actividades->hide();

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
