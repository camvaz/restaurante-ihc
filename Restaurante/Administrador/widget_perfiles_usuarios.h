#ifndef WIDGET_PERFILES_USUARIOS_H
#define WIDGET_PERFILES_USUARIOS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class widget_perfiles_usuarios;
}

class widget_perfiles_usuarios : public QWidget
{
    Q_OBJECT

public:
    explicit widget_perfiles_usuarios(QWidget *parent = nullptr);
    ~widget_perfiles_usuarios();
    void cargarPerfiles();
    void limpiarCatalogo();

private:
    Ui::widget_perfiles_usuarios *ui;
};

#endif // WIDGET_PERFILES_USUARIOS_H
