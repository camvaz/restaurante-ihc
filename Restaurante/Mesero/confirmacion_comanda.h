#ifndef CONFIRMACION_COMANDA_H
#define CONFIRMACION_COMANDA_H

#include <QDialog>
#include <QSqlQuery>
#include <QtDebug>
#include <iostream>

namespace Ui {
class confirmacion_comanda;
}

class confirmacion_comanda : public QDialog
{
    Q_OBJECT

public:
    explicit confirmacion_comanda(QString ,QString ,QWidget *parent = nullptr);
    ~confirmacion_comanda();

    QString idPlatillos,nummesa;

    void comandaPedido();

private slots:
    void on_btn_aceptar_clicked();

    void on_btn_menos_clicked();

    void on_btn_mas_clicked();

private:
    Ui::confirmacion_comanda *ui;
};

#endif // CONFIRMACION_COMANDA_H
