#ifndef REPORTES_H
#define REPORTES_H

#include <QWidget>
#include "Administrador/Reportes/GraficaVentas.h"

namespace Ui {
class Reportes;
}

class GraficaVenta;

class Reportes : public QWidget
{
    Q_OBJECT

public:
    explicit Reportes(QWidget *parent = nullptr);
    ~Reportes();

private:
    Ui::Reportes *ui;
    GraficaVentas *mGraficaV;
};

#endif // REPORTES_H
