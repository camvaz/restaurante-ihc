#include "mapa_de_piso.h"
#include "ui_mapa_de_piso.h"

Mapa_de_Piso::Mapa_de_Piso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mapa_de_Piso)
{
    ui->setupUi(this);
}

Mapa_de_Piso::~Mapa_de_Piso()
{
    delete ui;
}
