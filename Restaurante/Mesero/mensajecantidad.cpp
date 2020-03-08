#include "mensajecantidad.h"
#include "ui_mensajecantidad.h"

mensajeCantidad::mensajeCantidad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mensajeCantidad)
{
    ui->setupUi(this);
}

mensajeCantidad::~mensajeCantidad()
{
    delete ui;
}
