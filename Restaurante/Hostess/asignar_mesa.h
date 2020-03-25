#ifndef ASIGNAR_MESA_H
#define ASIGNAR_MESA_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class Asignar_mesa;
}

class Asignar_mesa : public QDialog
{
    Q_OBJECT

public:
    explicit Asignar_mesa(QString,QWidget *parent = nullptr);
    ~Asignar_mesa();
    void cargarCombobox();

private slots:
    void on_btn_asignar_clicked();

private:
    Ui::Asignar_mesa *ui;
    QString idMesa;
};

#endif // ASIGNAR_MESA_H
