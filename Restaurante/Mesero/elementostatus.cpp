#include "elementostatus.h"
#include "ui_elementostatus.h"

ElementoStatus::ElementoStatus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ElementoStatus)
{
    ui->setupUi(this);
}

ElementoStatus::~ElementoStatus()
{
    delete ui;
}
