#ifndef ASIGNAR_MESA_H
#define ASIGNAR_MESA_H

#include <QDialog>

namespace Ui {
class Asignar_mesa;
}

class Asignar_mesa : public QDialog
{
    Q_OBJECT

public:
    explicit Asignar_mesa(QWidget *parent = nullptr);
    ~Asignar_mesa();

private:
    Ui::Asignar_mesa *ui;
};

#endif // ASIGNAR_MESA_H
