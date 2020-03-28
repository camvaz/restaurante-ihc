#ifndef ELEMENTOSTATUS_H
#define ELEMENTOSTATUS_H

#include <QWidget>

namespace Ui {
class ElementoStatus;
}

class ElementoStatus : public QWidget
{
    Q_OBJECT

public:
    explicit ElementoStatus(QWidget *parent = nullptr);
    ~ElementoStatus();

private:
    Ui::ElementoStatus *ui;
};

#endif // ELEMENTOSTATUS_H
