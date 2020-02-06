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

private:
    Ui::crear_usuario *ui;
};

#endif // CREAR_USUARIO_H
