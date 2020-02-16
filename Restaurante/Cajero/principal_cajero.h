#ifndef PRINCIPAL_CAJERO_H
#define PRINCIPAL_CAJERO_H

#include <QMainWindow>

namespace Ui {
class principal_cajero;
}

class principal_cajero : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_cajero(QWidget *parent = nullptr);
    principal_cajero(QString id, QWidget *parent = nullptr);
    ~principal_cajero();

private:
    Ui::principal_cajero *ui;
    QString identifier = "";
};

#endif // PRINCIPAL_CAJERO_H
