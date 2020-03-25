#include "ver_info_usuario.h"
#include "ui_ver_info_usuario.h"
#include <QSqlDatabase>
#include <QDebug>
#include "crear_usuario.h"
#include "qmessagebox.h"

ver_info_usuario::ver_info_usuario(QString id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ver_info_usuario)
{
    ui->setupUi(this);

    QString botones;
    botones="C:/Imagenes tamaño pequeño/menu";QIcon boton_users(botones);
    ui->btn_actividad2->setIcon(boton_users);
    ui->btn_InfoPersonal2->setIcon(boton_users);
    ui->btn_credenciales_2->setIcon(boton_users);
    ui->btn_datosEmpleado2->setIcon(boton_users);
    ui->lbl_imagen->setPixmap(QPixmap("C:/Imagenes tamaño pequeño/account"));

    //botones="C:/Ibotonesmagenes tamaño pequeño/account";QIcon boton_users(botones);ui->perfiles->setIcon(boton_users);

    bandera_info_personal=0;
    bandera_datos_empleado=0;
    bandera_actividades=0;
    bandera_credenciales=0;
    ui->frame_info_personal->hide();
    ui->frame_datos_empleado->hide();
    ui->frame_actividades->hide();
    ui->frame_credenciales->hide();
    idUsuario=id;

    QSqlQuery query;
    query.prepare("SELECT Rol FROM  usuario WHERE idUsuario="+idUsuario);
    query.exec();
    query.next();
    if(query.value(0).toString()!="Mesero")
    {
        ui->frame_actividades->hide();
        ui->frame_3->hide();
    }else
        cargarTablaActividades();

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

void ver_info_usuario::on_btn_eliminar_clicked()
{
    QMessageBox msgBox(QMessageBox::Question,"Confimacion","¿Estás seguro de eliminar a este usuario?",QMessageBox::Yes|QMessageBox::No);
    msgBox.setButtonText(QMessageBox::Yes,"Sí");
    msgBox.setButtonText(QMessageBox::No,"No");

     if(msgBox.exec()==QMessageBox::Yes){
         QSqlQuery query;
         query.prepare("DELETE FROM informacionpersonal WHERE Usuario_idUsuario="+idUsuario);
         query.exec();

         query.prepare("DELETE FROM nomina WHERE Usuario_idUsuario="+idUsuario);
         query.exec();

         query.prepare("DELETE FROM usuario WHERE idUsuario="+idUsuario);
         if(query.exec())
         {
             QMessageBox info;
             info.setWindowTitle("Información");
             info.setText("El usuario ha sido eliminado con éxito.");
             info.setStandardButtons(QMessageBox::Ok);
             info.setDefaultButton(QMessageBox::Ok);
             info.setButtonText(QMessageBox::Ok,"Aceptar");
             info.exec();
             this->close();
         }else
         {
             QMessageBox info;
             info.setWindowTitle("Información");
             info.setText("Ocurrió un problema al eliminar al usuario, inténtelo nuevamente.");
             info.setStandardButtons(QMessageBox::Ok);
             info.setDefaultButton(QMessageBox::Ok);
             info.setButtonText(QMessageBox::Ok,"Aceptar");
             info.exec();
         }

     }
}


void ver_info_usuario::cargarTablaActividades()
{
    QSqlQuery query;
    query.prepare("select * from mesa where Usuario_idUsuario="+idUsuario);
    query.exec();
    ui->tableWidget->setColumnCount(1);
    QString aux;
    while(query.next())
    {
        aux="Atendiendo la mesa "+query.value(0).toString();
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,new QTableWidgetItem(aux));
    }
}
