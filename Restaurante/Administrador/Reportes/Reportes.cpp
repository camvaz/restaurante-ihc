#include "Reportes.h"
#include "ui_Reportes.h"
#include "Administrador/Reportes/GraficaVentas.h"
#include <QWidget>

Reportes::Reportes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reportes)
{
    ui->setupUi(this);
    mGraficaV = new GraficaVentas;

    ui->stackedWidget->insertWidget(1,mGraficaV);
}

Reportes::~Reportes()
{
    delete ui;
}
