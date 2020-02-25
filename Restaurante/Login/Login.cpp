#include "Login.h"
#include "ui_Login.h"
#include "Administrador/principal_administrador.h"
#include "Bartender/principal_bartender.h"
#include "Cajero/principal_cajero.h"
#include "Cocinero/principal_cocinero.h"
#include "Garrotero/principal_garrotero.h"
#include "Mesero/principal_mesero.h"
#include "Login/LoginCuentas.h"
#include "Hostess/principal_hostess.h"
#include "LoginCuentas.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
  {
      ui->setupUi(this);

      //Manera de saber que Query usar x es vacio
      id = "x";
      QPixmap imagen;
      imagen.load("/home/roberthlml/Descargas/logo.png");
      ui->IMG->setFixedSize(ui->IMG->width(),ui->IMG->height());
      ui->IMG->setPixmap(imagen);
      ui->IMG->setScaledContents(true);

  }

//CONTRUCTOR INICIALIZADO POR LAS TARJETAS

Login::Login(QString _id,QString img, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
  {
      ui->setupUi(this);
      qDebug()<<"id de tarjeta: "+_id;
      id = _id;
      QPixmap imagen;
      imagen.load(img);
      ui->IMG->setFixedSize(ui->IMG->width(),ui->IMG->height());
      ui->IMG->setPixmap(imagen);
      ui->IMG->setScaledContents(true);
      ui->ln_user->hide();

  }

Login::~Login(){
    delete this->ui;
}

void Login::on_btn_inicioSesion_clicked()
{
    QSqlQuery query;
    int rol;

    if(id=="x")
    query.prepare("select idUsuario, contrasena,rol from Usuario where idUsuario = '" + ui->ln_user->text() + "' and contrasena = '" + ui->ln_password->text() + "'");
    else
    query.prepare("select idUsuario, contrasena,rol from Usuario where idUsuario = '" + id + "' and contrasena = '" + ui->ln_password->text() + "'");
    query.exec();
    if(query.next()){
        qDebug()<<"felicidades entraste";
        rol     =   query.value(2).toInt();
        switch (rol) {
            case 1:{ //Case ADministrador
                    LoginCuentas w;
                    w.show();
                    break;
                }
            case 2:
            {//Case Mesero
                Principal_Mesero *Mesero = new Principal_Mesero(query.value(2).toString());
                Mesero->show();
                break;
            }
            case 3:
            {//Case Cajero
                principal_cajero *Cajero = new principal_cajero();
                Cajero->show();
                break;
            }
            case 4:
            {// Case Cocinero
                principal_bartender *Bartender = new principal_bartender();
                Bartender->show();
                break;
            }
            case 5:
            {// Case Bartender
                principal_cocinero *Cocinero = new principal_cocinero();
                Cocinero->show();
                break;
            }
            case 6:
            {// Case Hostes
                principal_hostess *Hostes = new principal_hostess();
                Hostes->show();
                break;
            }
            case 7:
            {
                principal_garrotero *Garrotero = new principal_garrotero(query.value(2).toString());
                Garrotero->show();
            }
        }
    }
    else{
        qDebug()<<"YOU'RE AN INTRUDER";
    }
    this->hide();
    }
