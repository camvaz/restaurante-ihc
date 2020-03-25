#ifndef MAPA_PISO_GARROTERO_H
#define MAPA_PISO_GARROTERO_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class mapa_piso_garrotero;
}

class mapa_piso_garrotero : public QWidget
{
    Q_OBJECT

public:
    explicit mapa_piso_garrotero(QWidget *parent = nullptr);
    ~mapa_piso_garrotero();
    void cargarMesas();

private slots:
    void on_mesa_1_clicked();

    void on_mesa_2_clicked();

    void on_mesa_3_clicked();

    void on_mesa_4_clicked();

    void on_mesa_5_clicked();

    void on_mesa_6_clicked();

    void on_mesa_7_clicked();

    void on_mesa_8_clicked();

    void on_mesa_9_clicked();

    void on_mesa_10_clicked();

    void on_mesa_11_clicked();

    void on_mesa_12_clicked();

    void on_mesa_13_clicked();

    void on_mesa_14_clicked();

    void on_mesa_15_clicked();

private:
    Ui::mapa_piso_garrotero *ui;
    int id_mesa;
};

#endif // MAPA_PISO_GARROTERO_H
