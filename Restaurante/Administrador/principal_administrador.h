#ifndef PRINCIPAL_ADMINISTRADOR_H
#define PRINCIPAL_ADMINISTRADOR_H

#include <QMainWindow>


#include "Administrador/inventario/Inventario.h"

namespace Ui {
class principal_administrador;
}

class principal_administrador : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_administrador(QWidget *parent = nullptr);
    ~principal_administrador();

private slots:
    void on_perfiles_clicked();

    void on_inventario_clicked();

    void on_mapa_de_piso_clicked();

    void on_Reportes_clicked();

    void on_perfil_admi_clicked();

private:
    Ui::principal_administrador *ui;
    Inventario *Winventario;
};

#endif // PRINCIPAL_ADMINISTRADOR_H
