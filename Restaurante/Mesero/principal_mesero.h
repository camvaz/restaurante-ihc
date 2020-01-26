#ifndef PRINCIPAL_MESERO_H
#define PRINCIPAL_MESERO_H

#include <QMainWindow>

namespace Ui {
class Principal_Mesero;
}

class Principal_Mesero : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal_Mesero(QWidget *parent = nullptr);
    ~Principal_Mesero();

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

private:
    Ui::Principal_Mesero *ui;
};

#endif // PRINCIPAL_MESERO_H
