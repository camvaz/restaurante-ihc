#ifndef PRINCIPAL_BARTENDER_H
#define PRINCIPAL_BARTENDER_H

#include <QMainWindow>

namespace Ui {
class principal_bartender;
}

class principal_bartender : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_bartender(QWidget *parent = nullptr);
    ~principal_bartender();

private:
    Ui::principal_bartender *ui;
};

#endif // PRINCIPAL_BARTENDER_H
