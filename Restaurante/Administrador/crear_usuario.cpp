#include "crear_usuario.h"
#include "ui_crear_usuario.h"

crear_usuario::crear_usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::crear_usuario)
{
    ui->setupUi(this);

    bandera_info_personal=0;
    bandera_datos_empleado=0;
    ui->frame_info_personal->hide();
    ui->frame_datos_empleado->hide();
}

crear_usuario::~crear_usuario()
{
    delete ui;
}

void crear_usuario::on_btn_InfoPersonal1_clicked()
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
