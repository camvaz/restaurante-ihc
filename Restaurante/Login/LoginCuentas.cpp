#include "LoginCuentas.h"
#include "ui_LoginCuentas.h"
#include "Login/TarjetaCuentas.h"
#include <QDebug>

LoginCuentas::LoginCuentas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginCuentas)
{
    ui->setupUi(this);
    QPixmap imagen;
    imagen.load("/home/roberthlml/Descargas/logo.png");
    ui->IMG->setFixedSize(ui->IMG->width(),ui->IMG->height());
    ui->IMG->setPixmap(imagen);
    ui->IMG->setScaledContents(true);
    QSqlQuery query;
    query.prepare("select idUsuario from Usuario");
    if (query.exec()){
        int i=1;
        while(query.next()){
            QString id = query.value(0).toString();
            qDebug()<<id;

            TarjetaCuentas *tarjeta = new TarjetaCuentas(id);
            if(i<4){
                ui->lay_cuentas->addWidget(tarjeta,1,i);
                ids_ = id;
            }
            i++;
        }
    }else{
        qDebug()<<"Query puto, EL culero no jala";
        qDebug()<<query.lastError();
    }

/*
    QSqlQuery query;
    query.prepare("select idUsuario from Usuario");
    query.first();
    while(query.next()){

        TarjetaCuentas *tarjeta = new TarjetaCuentas(query.value(0).toString());
        ui->lay_cuentas->addWidget(tarjeta);
    }
*/
}

LoginCuentas::~LoginCuentas()
{
    delete ui;
}

void LoginCuentas::on_btn_OtraCuenta_clicked()
{
    Login *w = new Login;
    w->show();
    this->hide();

    return;
}



void LoginCuentas::on_btnMostrar_izq_clicked()
{
    QSqlQuery query;
    query.prepare("select idUsuario from Usuario where idUsuario < '"+ids_+"'");
    if (query.exec()){
        int i=1;
        while(query.next()){
            QString id = query.value(0).toString();
            qDebug()<<id;

            TarjetaCuentas *tarjeta = new TarjetaCuentas(id);
            if(i<4){
                ui->lay_cuentas->addWidget(tarjeta,1,i);
                ids_ = id;
            }
            i++;
        }
    }else{
        qDebug()<<"Query puto, EL culero no jala";
        qDebug()<<query.lastError();
    }
}

void LoginCuentas::on_btnMostrar_der_clicked()
{
    QSqlQuery query;
    query.prepare("select idUsuario from Usuario where idUsuario > '"+ids_+"'");
    if (query.exec()){
        int i=1;
        while(query.next()){
            QString id = query.value(0).toString();
            qDebug()<<id;

            TarjetaCuentas *tarjeta = new TarjetaCuentas(id);
            if(i<4){
                ui->lay_cuentas->addWidget(tarjeta,1,i);
                ids_ = id;
            }
            i++;
        }
    }else{
        qDebug()<<"Query puto, EL culero no jala";
        qDebug()<<query.lastError();
    }
}
