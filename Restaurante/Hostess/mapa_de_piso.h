#ifndef MAPA_DE_PISO_H
#define MAPA_DE_PISO_H

#include <QWidget>
#include <QSqlQuery>


namespace Ui {
class Mapa_de_Piso;
}

class Mapa_de_Piso : public QWidget
{
    Q_OBJECT

public:
    explicit Mapa_de_Piso(QWidget *parent = nullptr);
    ~Mapa_de_Piso();
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
    Ui::Mapa_de_Piso *ui;
    int id_mesa;
};

#endif // MAPA_DE_PISO_H
