#include "crear_usuario.h"
#include "ui_crear_usuario.h"

crear_usuario::crear_usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::crear_usuario)
{
    ui->setupUi(this);
}

crear_usuario::~crear_usuario()
{
    delete ui;
}
