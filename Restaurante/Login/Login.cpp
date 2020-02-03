#include "Login.h"
#include "ui_Login.h"

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
