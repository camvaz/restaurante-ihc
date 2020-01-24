#ifndef BARTENDER_H
#define BARTENDER_H

#include <QMainWindow>

namespace Ui {
class Bartender;
}

class Bartender : public QMainWindow
{
    Q_OBJECT

public:
    explicit Bartender(QWidget *parent = nullptr);
    ~Bartender();

private:
    Ui::Bartender *ui;
};

#endif // BARTENDER_H
