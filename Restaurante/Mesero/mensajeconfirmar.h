#ifndef MENSAJECONFIRMAR_H
#define MENSAJECONFIRMAR_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
class mensajeConfirmar;
}

class mensajeConfirmar : public QMainWindow
{
    Q_OBJECT

public:
    explicit mensajeConfirmar(QWidget *parent = nullptr);
    ~mensajeConfirmar();

private slots:
    int on_pushButton_2_clicked();

private:
    Ui::mensajeConfirmar *ui;
};

#endif // MENSAJECONFIRMAR_H
