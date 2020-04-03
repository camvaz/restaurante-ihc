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
#include <Mesero/statusplatillos.h>
#include "Cajero/cobrar_.h"

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

    query.prepare("select idUsuario, contrasena,rol from Usuario where idUsuario = '" + ui->ln_user->text() + "' and contrasena = '" + ui->ln_password->text() + "'");
    query.exec();
    if(query.next()){

        qDebug()<<"felicidades entraste";
        rola    =   query.value(2).toString();

        if(rola == "Administrador")
        {
            qDebug()<<"Entro admin";
            principal_administrador *admin= new principal_administrador();
            admin->show();
        }
        else{
            if(rola == "Mesero"){
                Principal_Mesero *Mesero = new Principal_Mesero(query.value(0).toString());
                Mesero->show();
                //statusPlatillos *status = new statusPlatillos();
                //status->show();
            }
            else{
                if(rola == "Cajero"){
                 //   principal_cajero *Cajero = new principal_cajero(query.value(0).toString());
                 //   Cajero->show();
                    cobrar_ *Cajero = new cobrar_(query.value(0).toString());
                    Cajero->show();
                }
                else{
                    if(rola == "Cocinero"){
                        principal_cocinero *Cocinero = new principal_cocinero(query.value(0).toString());
                        Cocinero->show();

                    }
                    else{
                        if(rola == "Bartender"){
                            principal_bartender *Bartender = new principal_bartender(query.value(0).toString());
                            Bartender->show();
                        }
                        else{
                            if(rola == "Hostess")
                            {
                                principal_hostess *Hostes = new principal_hostess(query.value(0).toString());
                                Hostes->show();
                            }
                            else{
                                if(rola == "Garrotero"){
                                    principal_garrotero *Garrotero = new principal_garrotero(query.value(0).toString());
                                    Garrotero->show();
                                }
                            }
                        }
                    }
                }
            }
        }
    }else{
        qDebug()<<"YOU'RE AN INTRUDER";
    }
    this->close();
}
