#ifndef COBRAR__H
#define COBRAR__H

#include <QWidget>

namespace Ui {
class cobrar_;
}

class QSqlRelationalTableModel;
class cobrar_ : public QWidget
{
    Q_OBJECT

public:
    explicit cobrar_(QWidget *parent = nullptr);
    cobrar_(QString id,QWidget *parent = nullptr);
    ~cobrar_();

private slots:
    void on_btn_agregar_clicked();

    void on_btn_cancelar_clicked();

    void on_btn_Cobrar_clicked();

private:
    Ui::cobrar_ *ui;
    QSqlRelationalTableModel *tabla_platillos,*tabla_tic;
    QString identifier = "";

};

#endif // COBRAR__H
