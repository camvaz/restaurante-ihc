#include "crear_usuario.h"
#include "ui_crear_usuario.h"
#include "qmessagebox.h"
#include <QSqlDatabase>
#include <QDebug>

crear_usuario::crear_usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::crear_usuario)
{
    ui->setupUi(this);

    QString botones;
    botones="C:/Imagenes tamaño pequeño/menu";QIcon boton_users(botones);
    ui->btn_InfoPersonal2->setIcon(boton_users);
    ui->btn_credenciales_2->setIcon(boton_users);
    ui->btn_datosEmpleado2->setIcon(boton_users);
    ui->lbl_imagen->setPixmap(QPixmap("C:/Imagenes tamaño pequeño/account"));

    bandera_info_personal=0;
    bandera_datos_empleado=0;
    bandera_datos_credencial=0;
    ui->frame_info_personal->hide();
    ui->frame_datos_empleado->hide();
    ui->frame_credenciales->hide();
    id="";
    ui->ID->setEnabled(false);
    QSqlQuery query;
    query.prepare("SELECT idUsuario FROM usuario ORDER BY idUsuario DESC ");
    query.exec();
    query.next();
    int num=query.value(0).toInt()+1;
    ui->ID->setText(QString::number(num));
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

void crear_usuario::on_btn_InfoPersonal2_clicked()
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



void crear_usuario::on_btn_datosEmpleado_clicked()
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

void crear_usuario::on_btn_datosEmpleado2_clicked()
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

void crear_usuario::setID(QString id)
{
    this->id=id;
}

void crear_usuario::cargarDatos()
{
    ui->ID->setEnabled(false);
    ui->ID->setText(id);
    QSqlQuery query;
    query.prepare("select * from informacionpersonal where Usuario_idUsuario="+id);
    query.exec();
    while(query.next())
    {
        ui->nombre->setText(query.value(0).toString());
        ui->lineEdit_rfc->setText(query.value(1).toString());
        ui->lineEdit_curp->setText(query.value(2).toString());
        ui->lineEdit_telefono->setText(query.value(3).toString());
        ui->lineEdit_direccion->setText(query.value(4).toString());
        ui->lineEdit_email->setText(query.value(5).toString());

    }
    query.prepare("select * from nomina where Usuario_idUsuario="+id);
    query.exec();
    while(query.next())
    {
        ui->lineEdit_salario->setText(query.value(0).toString());
        ui->lineEdit_hr_entrada_2->setText(query.value(1).toString());
        ui->lineEdit_hr_salida->setText(query.value(2).toString());
    }

    query.prepare("SELECT * FROM usuario WHERE idUsuario="+id);
    query.exec();
    while(query.next())
    {
        ui->comboBox->setCurrentText(query.value(2).toString());
        ui->lineEdit_password->setText(query.value(1).toString());
        ui->lineEdit_usuario->setText(query.value(3).toString());
        ui->lineEdit_confirmaPass->setText(query.value(1).toString());
    }



}


void crear_usuario::on_btn_guardar_clicked()
{

    QString ide=ui->ID->text();
    QString nom=ui->nombre->text();
    QString tel=ui->lineEdit_telefono->text();
    QString dir=ui->lineEdit_direccion->text();
    QString email=ui->lineEdit_email->text();
    QString rfc=ui->lineEdit_rfc->text();
    QString curp=ui->lineEdit_curp->text();
    QString puesto=ui->comboBox->currentText();
    QString hrEntrada=ui->lineEdit_hr_entrada_2->text();
    QString hrSalida=ui->lineEdit_hr_salida->text();
    QString pago=ui->lineEdit_salario->text();
    QString usuario=ui->lineEdit_usuario->text();
    QString contrasena=ui->lineEdit_password->text();
    QString contrasena2=ui->lineEdit_confirmaPass->text();

    if(ide!="" && nom!=""&& tel!="" && dir!="" && email!="" && rfc!="" && curp!="" && puesto!="Seleccione uno" && hrEntrada!="" && hrSalida!="" && pago!="" && usuario!="" && contrasena!="" && contrasena2!="")
    {
        if(ui->lineEdit_password->text() == ui->lineEdit_confirmaPass->text())
        {
           QMessageBox msgBox(QMessageBox::Question,"Confimacion","¿Estas seguro de guardar los datos de este usuario?",QMessageBox::Yes|QMessageBox::No);
            msgBox.setButtonText(QMessageBox::Yes,"Sí");
            msgBox.setButtonText(QMessageBox::No,"No");

             if(msgBox.exec()==QMessageBox::Yes){
                 if(id=="")
                 {
                     qDebug()<<"Crear";
                     //Es Crear

                     QSqlQuery query;
                     query.prepare("INSERT INTO usuario(idUsuario, Contrasena, Rol, NombreUsuario) VALUES ('"+ide+"','"+ contrasena+"','"+puesto+"','"+usuario+"')");
                     query.exec();

                     query.prepare("INSERT INTO informacionpersonal(Nombre, rfc, curp, Telefono, Direccion, Email, Usuario_idUsuario) VALUES('"+nom+"','"+rfc+"','"+curp+"','"+tel+"','"+dir+"','"+email+"','"+ide+"')");
                     query.exec();

                     query.prepare("INSERT INTO nomina(PagoHora, HoraEntrada, HoraSalida, Usuario_idUsuario) VALUES ('"+pago+"','"+hrEntrada+"','"+hrSalida+"','"+ide+"')");
                     query.exec();

                     QMessageBox info;
                     info.setWindowTitle("Información");
                     info.setText("Tu usuario fue agregado con éxito.");
                     info.setStandardButtons(QMessageBox::Ok);
                     info.setDefaultButton(QMessageBox::Ok);
                     info.setButtonText(QMessageBox::Ok,"Aceptar");
                     info.exec();

                     this->close();

                 }else
                 {
                     //Es Editar

                     QSqlQuery query;
                     query.prepare("UPDATE usuario SET Contrasena='"+contrasena+"',Rol='"+puesto+"',NombreUsuario='"+usuario+"' WHERE idUsuario="+id);
                     query.exec();

                     query.prepare("UPDATE informacionpersonal SET Nombre='"+nom+"',rfc='"+rfc+"',curp='"+curp+"',Telefono='"+tel+"',Direccion='"+dir+"',Email='"+email+"' WHERE Usuario_idUsuario="+id);
                     query.exec();

                     query.prepare("UPDATE nomina SET PagoHora='"+pago+"',HoraEntrada='"+hrEntrada+"',HoraSalida='"+hrSalida+"' WHERE Usuario_idUsuario="+id);
                     query.exec();

                     QMessageBox info;
                     info.setWindowTitle("Información");
                     info.setText("Los datos han sido guardados con éxito.");
                     info.setStandardButtons(QMessageBox::Ok);
                     info.setDefaultButton(QMessageBox::Ok);
                     info.setButtonText(QMessageBox::Ok,"Aceptar");
                     info.exec();
                     this->close();


                 }

             }
         }else
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("Las contraseñas no coinciden, ingresalas nuevamente.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }

    }else
    {
        QMessageBox info;
        info.setWindowTitle("Información");
        info.setText("Debes rellenar todos los campos.");
        info.setStandardButtons(QMessageBox::Ok);
        info.setDefaultButton(QMessageBox::Ok);
        info.setButtonText(QMessageBox::Ok,"Aceptar");
        info.exec();
    }
}

void crear_usuario::on_btn_credenciales_clicked()
{
    if(bandera_datos_credencial==0)
    {
        ui->frame_credenciales->show();
        bandera_datos_credencial=1;
    }else
    {
        ui->frame_credenciales->hide();
        bandera_datos_credencial=0;
    }

}

void crear_usuario::on_btn_credenciales_2_clicked()
{
    if(bandera_datos_credencial==0)
    {
        ui->frame_credenciales->show();
        bandera_datos_credencial=1;
    }else
    {
        ui->frame_credenciales->hide();
        bandera_datos_credencial=0;
    }
}
