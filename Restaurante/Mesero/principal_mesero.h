#ifndef PRINCIPAL_MESERO_H
#define PRINCIPAL_MESERO_H

#include <QMainWindow>

namespace Ui {
class Principal_Mesero;
}

class Principal_Mesero : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal_Mesero(QWidget *parent = nullptr);
    ~Principal_Mesero();

private:
    Ui::Principal_Mesero *ui;
};

#endif // PRINCIPAL_MESERO_H