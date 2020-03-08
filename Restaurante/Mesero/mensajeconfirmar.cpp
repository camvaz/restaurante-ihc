#include "mensajeconfirmar.h"
#include "ui_mensajeconfirmar.h"

mensajeConfirmar::mensajeConfirmar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mensajeConfirmar)
{
    ui->setupUi(this);
}

mensajeConfirmar::~mensajeConfirmar()
{
    delete ui;
}
