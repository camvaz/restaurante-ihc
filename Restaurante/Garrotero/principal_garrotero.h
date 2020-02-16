#ifndef PRINCIPAL_GARROTERO_H
#define PRINCIPAL_GARROTERO_H

#include <QMainWindow>

namespace Ui {
class principal_garrotero;
}

class principal_garrotero : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_garrotero(QWidget *parent = nullptr);
    principal_garrotero(QString id,QWidget *parent = nullptr);
    ~principal_garrotero();

private:
    Ui::principal_garrotero *ui;
    QString identifier  =   "";
};

#endif // PRINCIPAL_GARROTERO_H
