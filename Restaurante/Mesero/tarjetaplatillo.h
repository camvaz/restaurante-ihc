#ifndef TARJETAPLATILLO_H
#define TARJETAPLATILLO_H

#include <QWidget>

namespace Ui {
class tarjetaPlatillo;
}

class tarjetaPlatillo : public QWidget
{
    Q_OBJECT

public:
    explicit tarjetaPlatillo(QWidget *parent = nullptr);
    ~tarjetaPlatillo();

private:
    Ui::tarjetaPlatillo *ui;
};

#endif // TARJETAPLATILLO_H
