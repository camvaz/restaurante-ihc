#ifndef PRINCIPAL_ADMINISTRADOR_H
#define PRINCIPAL_ADMINISTRADOR_H

#include <QMainWindow>

namespace Ui {
class principal_administrador;
}

class principal_administrador : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_administrador(QWidget *parent = nullptr);
    ~principal_administrador();

private:
    Ui::principal_administrador *ui;
};

#endif // PRINCIPAL_ADMINISTRADOR_H
