#include "tarjeta_perfil_empleado.h"
#include "ui_tarjeta_perfil_empleado.h"
#include "ver_info_usuario.h"
#include <QSqlDatabase>
#include <QDebug>

tarjeta_perfil_empleado::tarjeta_perfil_empleado(QString id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tarjeta_perfil_empleado)
{
    ui->setupUi(this);
    idUsuario=id;
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

    QSqlQuery query;
    query.prepare("SELECT Nombre FROM `informacionpersonal` WHERE Usuario_idUsuario="+idUsuario);
    query.exec();
    query.next();
    ui->label_id->setText(idUsuario);
    ui->label_nombre->setText(query.value(0).toString());
}

tarjeta_perfil_empleado::~tarjeta_perfil_empleado()
{
    delete ui;
}

void tarjeta_perfil_empleado::on_btn_visualizar_clicked()
{
    ver_info_usuario *info= new ver_info_usuario(idUsuario);
    info->exec();
}
