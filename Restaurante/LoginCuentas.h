#ifndef LOGINCUENTAS_H
#define LOGINCUENTAS_H

#include <QWidget>
#include <QSqlQuery>
#include <TarjetaCuentas.h>

namespace Ui {
class LoginCuentas;
}

class LoginCuentas : public QWidget
{
    Q_OBJECT

public:
    explicit LoginCuentas(QWidget *parent = nullptr);
    ~LoginCuentas();

    void clearLayout(QLayout *layout);
    void recargar();

private:
    Ui::LoginCuentas *ui;
};

#endif // LOGINCUENTAS_H
