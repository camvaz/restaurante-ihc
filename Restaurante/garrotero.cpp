#include "garrotero.h"
#include "ui_garrotero.h"

Garrotero::Garrotero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Garrotero)
{
    ui->setupUi(this);
}

Garrotero::~Garrotero()
{
    delete ui;
}
