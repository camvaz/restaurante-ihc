#ifndef TARJETAPLATILLO_H
#define TARJETAPLATILLO_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <Mesero/confirmacion_comanda.h>


namespace Ui {
class tarjetaPlatillo;
}

class tarjetaPlatillo : public QWidget
{
    Q_OBJECT

public:
    explicit tarjetaPlatillo(QWidget *parent = nullptr);
    ~tarjetaPlatillo();
    void llenar(QString,QString,QString,QString);
    void orden(QString );
    QString nummesa;

private slots:
    void on_pushButton_clicked();

private:
    Ui::tarjetaPlatillo *ui;
    confirmacion_comanda *comanda;
};

#endif // TARJETAPLATILLO_H
