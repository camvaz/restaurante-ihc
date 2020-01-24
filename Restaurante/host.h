#ifndef HOST_H
#define HOST_H

#include <QMainWindow>

namespace Ui {
class Host;
}

class Host : public QMainWindow
{
    Q_OBJECT

public:
    explicit Host(QWidget *parent = nullptr);
    ~Host();

private:
    Ui::Host *ui;
};

#endif // HOST_H
