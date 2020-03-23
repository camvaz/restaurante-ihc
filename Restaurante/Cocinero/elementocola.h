#ifndef ELEMENTOCOLA_H
#define ELEMENTOCOLA_H

#include <QWidget>
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <Cocinero/principal_cocinero.h>

namespace Ui {
class elementoCola;
}

class elementoCola : public QWidget
{
    Q_OBJECT

public:
    explicit elementoCola(QWidget *parent = nullptr);
    void editaLabels(QString, QString, QString,QString);
    ~elementoCola();

    void platilloListo(QString);

private slots:
    void on_btnPlatillo_clicked();

private:
    Ui::elementoCola *ui;

};

#endif // ELEMENTOCOLA_H
