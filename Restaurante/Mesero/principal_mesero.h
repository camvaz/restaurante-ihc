#ifndef PRINCIPAL_MESERO_H
#define PRINCIPAL_MESERO_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <Mesero/mensaje.h>

namespace Ui {
class Principal_Mesero;
}

class Principal_Mesero : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal_Mesero(QWidget *parent = nullptr);
    Principal_Mesero(QString id,QWidget *parent = nullptr);
    ~Principal_Mesero();
    int idmesa;//PARA SABER SI EL MESERO YA SELECIONO UNA MESA ANTES.
    QString identifier = ""; //ID DE USUARIO QUE ESTA EN SECION.
    int numMesa; //SABER EL NUMERO DE LA MESA QUE SE ESTA TABAJANDO.

    void CargarImagenes();
    void mesasEstado();

private slots:
    void on_parilla_clicked();

    void on_ensalada_clicked();

    void on_mar_clicked();

    void on_sopa_clicked();

    void on_entrada_clicked();

    void on_guarnicion_clicked();

    void on_reposteria_clicked();

    void on_infantil_clicked();

    void on_comanda_clicked();

    void on_mesas_clicked();

    void on_bebidas_clicked();

    void on_coctel_clicked();

    void on_vino_clicked();

    void on_mesa_1_clicked();

    void on_mesa_2_clicked();

    void on_mesa_3_clicked();

    void on_mesa_4_clicked();

    void on_mesa_5_clicked();

    void on_mesa_6_clicked();

    void on_mesa_7_clicked();

    void on_mesa_8_clicked();

    void on_mesa_9_clicked();

    void on_mesa_10_clicked();

    void on_mesa_11_clicked();

    void on_mesa_12_clicked();

    void on_cuenta_clicked();

    void on_mesa_13_clicked();

    void on_mesa_14_clicked();

    void on_mesa_15_clicked();

    void orden(QString);

private:
    Ui::Principal_Mesero *ui;
    mensaje *advertencia;
};

#endif // PRINCIPAL_MESERO_H
