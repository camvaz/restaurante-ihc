#include "statusplatillos.h"
#include "ui_statusplatillos.h"

statusPlatillos::statusPlatillos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::statusPlatillos)
{
    ui->setupUi(this);
}

statusPlatillos::~statusPlatillos()
{
    delete ui;
}
