#ifndef STATUSPLATILLOS_H
#define STATUSPLATILLOS_H

#include <QMainWindow>

namespace Ui {
class statusPlatillos;
}

class statusPlatillos : public QMainWindow
{
    Q_OBJECT

public:
    explicit statusPlatillos(QWidget *parent = nullptr);
    ~statusPlatillos();

private:
    Ui::statusPlatillos *ui;
};

#endif // STATUSPLATILLOS_H
