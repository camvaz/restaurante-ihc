#ifndef MAPA_PISO_ADMIN_H
#define MAPA_PISO_ADMIN_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class mapa_piso_admin;
}

class mapa_piso_admin : public QWidget
{
    Q_OBJECT

public:
    explicit mapa_piso_admin(QWidget *parent = nullptr);
    ~mapa_piso_admin();
    void cargarMesas();

private:
    Ui::mapa_piso_admin *ui;
    int id_mesa;
};

#endif // MAPA_PISO_ADMIN_H
