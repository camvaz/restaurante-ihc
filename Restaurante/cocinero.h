#ifndef COCINERO_H
#define COCINERO_H

#include <QMainWindow>

namespace Ui {
class Cocinero;
}

class Cocinero : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cocinero(QWidget *parent = nullptr);
    ~Cocinero();

private:
    Ui::Cocinero *ui;
};

#endif // COCINERO_H
