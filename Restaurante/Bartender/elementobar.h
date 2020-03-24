#ifndef ELEMENTOBAR_H
#define ELEMENTOBAR_H

#include <QWidget>

namespace Ui {
class elementoBar;
}

class elementoBar : public QWidget
{
    Q_OBJECT

public:
    explicit elementoBar(QWidget *parent = nullptr);
    ~elementoBar();

private:
    Ui::elementoBar *ui;
};

#endif // ELEMENTOBAR_H
