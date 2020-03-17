#ifndef ENVIARPEDIDO_H
#define ENVIARPEDIDO_H

#include <QDialog>
#include <QSqlQuery>
#include <QtDebug>
#include <QString>

namespace Ui {
class EnviarPedido;
}

class EnviarPedido : public QDialog
{
    Q_OBJECT

public:
    explicit EnviarPedido(QString,QWidget *parent = nullptr);
    ~EnviarPedido();
    QString NumMesa;


private slots:
    void on_cancelar_clicked();

    void on_enviar_clicked();

private:
    Ui::EnviarPedido *ui;
};

#endif // ENVIARPEDIDO_H
