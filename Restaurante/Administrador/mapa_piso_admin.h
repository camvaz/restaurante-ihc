#ifndef MAPA_PISO_ADMIN_H
#define MAPA_PISO_ADMIN_H

#include <QWidget>

namespace Ui {
class mapa_piso_admin;
}

class mapa_piso_admin : public QWidget
{
    Q_OBJECT

public:
    explicit mapa_piso_admin(QWidget *parent = nullptr);
    ~mapa_piso_admin();

private:
    Ui::mapa_piso_admin *ui;
};

#endif // MAPA_PISO_ADMIN_H
