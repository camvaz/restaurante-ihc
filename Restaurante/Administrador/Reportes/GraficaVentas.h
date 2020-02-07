#ifndef GRAFICAVENTA_H
#define GRAFICAVENTA_H

#include <QWidget>

namespace Ui {
class GraficaVentas;
}

class QVBoxLayout;
class OpenChart;

class GraficaVentas : public QWidget
{
    Q_OBJECT

public:
    explicit GraficaVentas(QWidget *parent = nullptr);
    ~GraficaVentas();

private:
    Ui::GraficaVentas *ui;
    QVBoxLayout *mLayout;
    OpenChart   *mChart;
};

#endif // GRAFICAVENTA_H
