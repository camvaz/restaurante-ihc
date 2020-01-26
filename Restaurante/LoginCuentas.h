#ifndef LOGINCUENTAS_H
#define LOGINCUENTAS_H

#include <QWidget>

namespace Ui {
class LoginCuentas;
}

class LoginCuentas : public QWidget
{
    Q_OBJECT

public:
    explicit LoginCuentas(QWidget *parent = nullptr);
    ~LoginCuentas();

private:
    Ui::LoginCuentas *ui;
};

#endif // LOGINCUENTAS_H
