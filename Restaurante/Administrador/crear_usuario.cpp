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

    bandera_info_personal=0;
    bandera_datos_empleado=0;
    ui->frame_info_personal->hide();
    ui->frame_datos_empleado->hide();
    id="";

    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setPort(3306);
    database.setDatabaseName("restaurante");
    database.setUserName("root");
    database.setPassword("");
    if(!database.open()){
        qDebug()<<"Base de datos no conectada";
    }
    else{
        qDebug()<<"Base de datos conectada";
    }
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

    query.prepare("SELECT Rol FROM usuario WHERE idUsuario="+id);
    query.exec();
    query.next();
    ui->comboBox->setCurrentText(query.value(0).toString());


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
    if(ide!="" && nom!=""&& tel!="" && dir!="" && email!="" && rfc!="" && curp!="" && puesto!="Seleccione uno" && hrEntrada!="" && hrSalida!="" && pago!="")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimacion","¿Estas seguro de guardar los datos de este usuario?",QMessageBox::Yes|QMessageBox::No);
        msgBox.setButtonText(QMessageBox::Yes,"Sí");
        msgBox.setButtonText(QMessageBox::No,"No");

         if(msgBox.exec()==QMessageBox::Yes){
             if(id=="")
             {
                 //Es Crear
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
        info.setText("Debes rellenar todos los campos.");
        info.setStandardButtons(QMessageBox::Ok);
        info.setDefaultButton(QMessageBox::Ok);
        info.setButtonText(QMessageBox::Ok,"Aceptar");
        info.exec();
    }
}
