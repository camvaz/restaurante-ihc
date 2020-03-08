#ifndef MENSAJECANTIDAD_H
#define MENSAJECANTIDAD_H

#include <QMainWindow>

namespace Ui {
class mensajeCantidad;
}

class mensajeCantidad : public QMainWindow
{
    Q_OBJECT

public:
    explicit mensajeCantidad(QWidget *parent = nullptr);
    ~mensajeCantidad();

private:
    Ui::mensajeCantidad *ui;
};

#endif // MENSAJECANTIDAD_H
