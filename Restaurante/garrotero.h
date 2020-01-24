#ifndef GARROTERO_H
#define GARROTERO_H

#include <QMainWindow>

namespace Ui {
class Garrotero;
}

class Garrotero : public QMainWindow
{
    Q_OBJECT

public:
    explicit Garrotero(QWidget *parent = nullptr);
    ~Garrotero();

private:
    Ui::Garrotero *ui;
};

#endif // GARROTERO_H
