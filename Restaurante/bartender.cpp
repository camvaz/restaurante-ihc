#include "bartender.h"
#include "ui_bartender.h"

Bartender::Bartender(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Bartender)
{
    ui->setupUi(this);
}

Bartender::~Bartender()
{
    delete ui;
}
