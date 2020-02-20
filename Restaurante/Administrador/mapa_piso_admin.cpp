#include "mapa_piso_admin.h"
#include "ui_mapa_piso_admin.h"

mapa_piso_admin::mapa_piso_admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mapa_piso_admin)
{
    ui->setupUi(this);
}

mapa_piso_admin::~mapa_piso_admin()
{
    delete ui;
}
