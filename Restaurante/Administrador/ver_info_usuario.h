#ifndef VER_INFO_USUARIO_H
#define VER_INFO_USUARIO_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class ver_info_usuario;
}

class ver_info_usuario : public QDialog
{
    Q_OBJECT

public:
    explicit ver_info_usuario(QString id, QWidget *parent = nullptr);
    ~ver_info_usuario();
    void actualizarDatos();


private slots:
    void on_btn_InfoPersonal_clicked();

    void on_btn_InfoPersonal2_clicked();

    void on_btn_datosEmpleado_clicked();

    void on_btn_datosEmpleado2_clicked();

    void on_btn_actividad_clicked();

    void on_btn_actividad2_clicked();

    void on_btn_editar_clicked();

private:
    Ui::ver_info_usuario *ui;
    bool bandera_info_personal;
    bool bandera_datos_empleado;
    bool bandera_actividades;
    QString idUsuario;

};

#endif // VER_INFO_USUARIO_H
