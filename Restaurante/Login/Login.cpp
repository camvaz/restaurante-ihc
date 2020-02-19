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

      QPixmap imagen;
      imagen.load("C:/imagenes/logo.png");
      ui->IMG->setFixedSize(ui->IMG->width(),ui->IMG->height());
      ui->IMG->setPixmap(imagen);
      ui->IMG->setScaledContents(true);

  }

//CONTRUCTOR INICIALIZADO POR LAS TARJETAS

Login::Login(QString img,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
  {
      ui->setupUi(this);

      QPixmap imagen;
      imagen.load(img);
      ui->IMG->setFixedSize(ui->IMG->width(),ui->IMG->height());
      ui->IMG->setPixmap(imagen);
      ui->IMG->setScaledContents(true);

  }

Login::~Login(){
    delete this->ui;
}

void Login::on_btn_inicioSesion_clicked()
{
    QSqlQuery query;
    QString rola;
    int rol;

    query.prepare("select idUsuario, contrasena,rol from Usuario where idUsuario = '" + ui->ln_user->text() + "' and contrasena = '" + ui->ln_password->text() + "'");
    query.exec();
    if(query.next()){

        qDebug()<<"felicidades entraste";
        rola    =   query.value(2).toString();

        if(rola == "Administrador")
        {
            rol = 1;
        }
        else{
            if(rola == "Mesero"){
                rol = 2;
            }
            else{
                if(rola == "Cajero"){
                    rol = 3;
                }
                else{
                    if(rola == "Cocinero"){
                        rol = 4;
                    }
                    else{
                        if(rola == "Bartender"){
                            rol = 5;
                        }
                        else{
                            if(rola == "Hostess")
                            {
                                rol = 6;
                            }
                            else{
                                if(rola == "Garrotero"){
                                    rol = 7;
                                }
                            }
                        }
                    }
                }
            }
        }
        switch (rol) {
            case 1:{ //Case ADministrador
            qDebug()<<"Entro admin";
                    principal_administrador *admin= new principal_administrador();
                    admin->show();
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
                principal_cajero *Cajero = new principal_cajero(query.value(2).toString());
                Cajero->show();
                break;
            }
            case 4:
            {// Case Cocinero
                //principal_bartender *Bartender = new principal_bartender(query.value(2).toString());
                //Bartender->show();
                break;
            }
            case 5:
            {// Case Bartender
                principal_cocinero *Cocinero = new principal_cocinero(query.value(2).toString());
                Cocinero->show();
                break;
            }
            case 6:
            {// Case Hostess
                principal_hostess *Hostes = new principal_hostess(query.value(2).toString());
                Hostes->show();
                break;
            }
            case 7:
            {
                principal_garrotero *Garrotero = new principal_garrotero(query.value(2).toString());
                Garrotero->show();
                break;
            }
        }
    }
    else{
        qDebug()<<"YOU'RE AN INTRUDER";
    }
    this->close();
    }
