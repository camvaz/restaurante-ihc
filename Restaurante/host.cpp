#include "host.h"
#include "ui_host.h"

Host::Host(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Host)
{
    ui->setupUi(this);
}

Host::~Host()
{
    delete ui;
}
