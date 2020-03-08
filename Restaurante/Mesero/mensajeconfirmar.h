#ifndef MENSAJECONFIRMAR_H
#define MENSAJECONFIRMAR_H

#include <QMainWindow>

namespace Ui {
class mensajeConfirmar;
}

class mensajeConfirmar : public QMainWindow
{
    Q_OBJECT

public:
    explicit mensajeConfirmar(QWidget *parent = nullptr);
    ~mensajeConfirmar();

private:
    Ui::mensajeConfirmar *ui;
};

#endif // MENSAJECONFIRMAR_H
