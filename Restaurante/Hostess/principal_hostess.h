#ifndef PRINCIPAL_HOSTESS_H
#define PRINCIPAL_HOSTESS_H

#include <QMainWindow>

namespace Ui {
class principal_hostess;
}

class principal_hostess : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_hostess(QWidget *parent = nullptr);
    ~principal_hostess();

private:
    Ui::principal_hostess *ui;
};

#endif // PRINCIPAL_HOSTESS_H
