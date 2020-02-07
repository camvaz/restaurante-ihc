#ifndef VER_INFO_USUARIO_H
#define VER_INFO_USUARIO_H

#include <QDialog>

namespace Ui {
class ver_info_usuario;
}

class ver_info_usuario : public QDialog
{
    Q_OBJECT

public:
    explicit ver_info_usuario(QWidget *parent = nullptr);
    ~ver_info_usuario();

private:
    Ui::ver_info_usuario *ui;
};

#endif // VER_INFO_USUARIO_H
