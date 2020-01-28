#ifndef CONFIRMACION_COMANDA_H
#define CONFIRMACION_COMANDA_H

#include <QDialog>

namespace Ui {
class confirmacion_comanda;
}

class confirmacion_comanda : public QDialog
{
    Q_OBJECT

public:
    explicit confirmacion_comanda(QWidget *parent = nullptr);
    ~confirmacion_comanda();

private:
    Ui::confirmacion_comanda *ui;
};

#endif // CONFIRMACION_COMANDA_H
