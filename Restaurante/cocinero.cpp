#include "cocinero.h"
#include "ui_cocinero.h"

Cocinero::Cocinero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cocinero)
{
    ui->setupUi(this);
}

Cocinero::~Cocinero()
{
    delete ui;
}
