#ifndef TARJETACUENTAS_H
#define TARJETACUENTAS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class TarjetaCuentas;
}

class TarjetaCuentas : public QWidget
{
    Q_OBJECT

public:
    explicit TarjetaCuentas(QWidget *parent = nullptr);
    TarjetaCuentas(QString id, QWidget *parent = nullptr);
    ~TarjetaCuentas();

private:
    Ui::TarjetaCuentas *ui;
};

#endif // TARJETACUENTAS_H
