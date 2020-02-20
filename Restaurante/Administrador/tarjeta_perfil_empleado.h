#ifndef TARJETA_PERFIL_EMPLEADO_H
#define TARJETA_PERFIL_EMPLEADO_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class tarjeta_perfil_empleado;
}

class tarjeta_perfil_empleado : public QDialog
{
    Q_OBJECT

public:
    explicit tarjeta_perfil_empleado(QString,QWidget *parent = nullptr);
    ~tarjeta_perfil_empleado();

private slots:
    void on_btn_visualizar_clicked();

private:
    Ui::tarjeta_perfil_empleado *ui;
    QString idUsuario;
};

#endif // TARJETA_PERFIL_EMPLEADO_H
