#ifndef MENSAJE_H
#define MENSAJE_H

#include <QDialog>
#include <QMovie>

namespace Ui {
class mensaje;
}

class mensaje : public QDialog
{
    Q_OBJECT

public:
    explicit mensaje(QWidget *parent = nullptr);
    ~mensaje();

private:
    Ui::mensaje *ui;
};

#endif // MENSAJE_H
