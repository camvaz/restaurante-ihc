#ifndef STATUSPLATILLOS_H
#define STATUSPLATILLOS_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QSqlQuery>
#include <Mesero/elementostatus.h>

namespace Ui {
class statusPlatillos;
}

class statusPlatillos : public QMainWindow
{
    Q_OBJECT

public:
    explicit statusPlatillos(QWidget *parent = nullptr);
    ~statusPlatillos();
    void MostrarOrdenes();

private slots:

    void hora();

private:
    Ui::statusPlatillos *ui;
};

#endif // STATUSPLATILLOS_H
