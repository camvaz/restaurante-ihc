#ifndef LOGIN_H
#define LOGIN_H
#include <QMainWindow>
#include <QWidget>
#include <QPixmap>
#include <QSqlQuery>
#include <QDebug>
#include <QString>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btn_inicioSesion_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
