#include "GraficaVentas.h"
#include "ui_GraficaVentas.h"
#include <QVBoxLayout>
#include <openchart.h>
#include <QMap>

GraficaVentas::GraficaVentas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraficaVentas)
{
    ui->setupUi(this);
    mLayout = new QVBoxLayout;
    mChart  = new OpenChart(this);

    mLayout->addWidget(mChart);
    mLayout->setMargin(3);
    setLayout(mLayout);

    QMap<QString,float> emp;
    emp["ElBistek"] = 1000.00;
    emp["Pierna"] = 2000.00;
    emp["Mezcal Aleron"] = 3000.00;


    mChart->setTitle("Insumos mas consumidos");
    //mChart->setTipo(OpenChart::Sectores_2D);
    mChart->setStyleSheet("background-color:#0c0c0c");

    const auto empleados = emp.end();
    for (auto i=emp.begin(); i!=emp.end(); ++i){
        mChart->addItem(i.key(),i.value());
    }
}

GraficaVentas::~GraficaVentas()
{
    delete ui;
}
