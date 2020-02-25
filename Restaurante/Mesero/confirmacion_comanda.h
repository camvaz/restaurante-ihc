#ifndef CONFIRMACION_COMANDA_H
#define CONFIRMACION_COMANDA_H

#include <QDialog>
#include <QSqlQuery>
#include <QtDebug>

namespace Ui {
class confirmacion_comanda;
}

class confirmacion_comanda : public QDialog
{
    Q_OBJECT

public:
    explicit confirmacion_comanda(QString ,QWidget *parent = nullptr);
    ~confirmacion_comanda();

    QString idPlatillos;

    void comandaPedido();

private slots:
    void on_btn_aceptar_clicked();

private:
    Ui::confirmacion_comanda *ui;
};

#endif // CONFIRMACION_COMANDA_H
