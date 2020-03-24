#ifndef PRINCIPAL_BARTENDER_H
#define PRINCIPAL_BARTENDER_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QDebug>
#include <QString>
#include <QLine>
#include <QPushButton>
#include <QTimer>
#include <QTime>
#include <Cocinero/elementocola.h>

namespace Ui {
class principal_bartender;
}

class principal_bartender : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_bartender(QWidget *parent = nullptr);
    principal_bartender(QString id, QWidget *parent = nullptr);
    ~principal_bartender();
    void MostrarOrdenes();

private slots:
    void hora();


private:
    Ui::principal_bartender *ui;
    QString identifier = "";
};

#endif // PRINCIPAL_BARTENDER_H
