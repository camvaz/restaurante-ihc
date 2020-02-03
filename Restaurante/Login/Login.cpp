#include "Login.h"
#include "ui_Login.h"
#include "Administrador/principal_administrador.h"
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

Login::~Login(){
    delete this->ui;
}

void Login::on_btn_inicioSesion_clicked()
{
    QSqlQuery query;
    int rol;

    query.prepare("select idUsuario, contrasena,rol from Usuario where idUsuario = '" + ui->ln_user->text() + "' and contrasena = '" + ui->ln_password->text() + "'");
    query.exec();
    if(query.next()){
        qDebug()<<"felicidades entraste";
        rol     =   query.value(2).toInt();
        switch (rol) {
            case 1: //Case ADministrador
                LoginCuentas w;
                w.show();
                break;

        }
    }
    else{
        qDebug()<<"YOU'RE AN INTRUDER";
    }

    }
