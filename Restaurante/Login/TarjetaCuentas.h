#ifndef TARJETACUENTAS_H
#define TARJETACUENTAS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <memory>

namespace Ui {
class TarjetaCuentas;
}

class TarjetaCuentas : public QWidget
{
    Q_OBJECT

public:
    explicit TarjetaCuentas(QWidget *parent = nullptr);
    TarjetaCuentas(QString id, QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *event);
    ~TarjetaCuentas();

private:
    Ui::TarjetaCuentas *ui;
    QString id_tarjeta;
    QString img;
};

#endif // TARJETACUENTAS_H
