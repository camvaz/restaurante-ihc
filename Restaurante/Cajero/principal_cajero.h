#ifndef PRINCIPAL_CAJERO_H
#define PRINCIPAL_CAJERO_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QSqlQuery>
#include <Mesero/elementostatus.h>

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
    void MostrarOrdenes();
    void clearLayout(QLayout *);

private:
    Ui::principal_cajero *ui;
    QString identifier = "";

private slots:
    void on_btn_consulta_clicked();
};

#endif // PRINCIPAL_CAJERO_H
