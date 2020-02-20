#ifndef MAPA_DE_PISO_H
#define MAPA_DE_PISO_H

#include <QWidget>

namespace Ui {
class Mapa_de_Piso;
}

class Mapa_de_Piso : public QWidget
{
    Q_OBJECT

public:
    explicit Mapa_de_Piso(QWidget *parent = nullptr);
    ~Mapa_de_Piso();

private:
    Ui::Mapa_de_Piso *ui;
};

#endif // MAPA_DE_PISO_H
