#ifndef LOGINCUENTAS_H
#define LOGINCUENTAS_H
#include <QSqlQuery>

#include <./Login/TarjetaCuentas.h>
#include "Login.h"

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

private slots:
    void on_btn_OtraCuenta_clicked();

private:
    Ui::LoginCuentas *ui;
    Login *log;
};

#endif // LOGINCUENTAS_H
