#ifndef ELEMENTOCOLA_H
#define ELEMENTOCOLA_H

#include <QWidget>
#include <QString>

namespace Ui {
class elementoCola;
}

class elementoCola : public QWidget
{
    Q_OBJECT

public:
    explicit elementoCola(QWidget *parent = nullptr);
    void editaLabels(QString, QString, QString);
    ~elementoCola();

private:
    Ui::elementoCola *ui;
};

#endif // ELEMENTOCOLA_H
