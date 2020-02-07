#ifndef CREAR_USUARIO_H
#define CREAR_USUARIO_H

#include <QDialog>

namespace Ui {
class crear_usuario;
}

class crear_usuario : public QDialog
{
    Q_OBJECT

public:
    explicit crear_usuario(QWidget *parent = nullptr);
    ~crear_usuario();

private slots:
    void on_btn_InfoPersonal1_clicked();

    void on_btn_InfoPersonal2_clicked();

    void on_btn_datosEmpleado_clicked();

    void on_btn_datosEmpleado2_clicked();

private:
    Ui::crear_usuario *ui;
    bool bandera_info_personal;
    bool bandera_datos_empleado;
};

#endif // CREAR_USUARIO_H
