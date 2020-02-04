#ifndef TARJETA_PERFIL_EMPLEADO_H
#define TARJETA_PERFIL_EMPLEADO_H

#include <QDialog>

namespace Ui {
class tarjeta_perfil_empleado;
}

class tarjeta_perfil_empleado : public QDialog
{
    Q_OBJECT

public:
    explicit tarjeta_perfil_empleado(QWidget *parent = nullptr);
    ~tarjeta_perfil_empleado();

private:
    Ui::tarjeta_perfil_empleado *ui;
};

#endif // TARJETA_PERFIL_EMPLEADO_H
