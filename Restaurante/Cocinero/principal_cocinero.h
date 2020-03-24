#ifndef PRINCIPAL_COCINERO_H
#define PRINCIPAL_COCINERO_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QDebug>
#include <QString>
#include <QLine>
#include <QPushButton>
#include <QTimer>
#include <QTime>
#include "elementocola.h"

namespace Ui {
class principal_cocinero;
}

class principal_cocinero : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_cocinero(QWidget *parent = nullptr);
    principal_cocinero(QString id, QWidget *parent = nullptr);
    ~principal_cocinero();
    void MostrarOrdenes();

private slots:
    void hora();


private:
    Ui::principal_cocinero *ui;
    QString identifier = "";
};

#endif // PRINCIPAL_COCINERO_H
