#ifndef MENSAJECORFIRMAR_H
#define MENSAJECORFIRMAR_H

#include <QDialog>
#include <QDebug>
#include <QDate>
#include <QSqlQuery>

namespace Ui {
class mensajeCorfirmar;
}

class mensajeCorfirmar : public QDialog
{
    Q_OBJECT

public:
    explicit mensajeCorfirmar(QString,QString,QString,QString,QString,QString,QWidget *parent = nullptr);
    ~mensajeCorfirmar();
    QString idPedido1,idPlatillo1,cantidad1,descripcion1,numMesa1,categoria;
    int confirmado=0;

    int confirmar();

private slots:
    void on_aceptar_clicked();

    void on_cancelar_clicked();

private:
    Ui::mensajeCorfirmar *ui;
};

#endif // MENSAJECORFIRMAR_H
