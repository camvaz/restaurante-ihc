#ifndef CAJERO_H
#define CAJERO_H

#include <QMainWindow>

namespace Ui {
class Cajero;
}

class Cajero : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cajero(QWidget *parent = nullptr);
    ~Cajero();

private:
    Ui::Cajero *ui;
};

#endif // CAJERO_H
