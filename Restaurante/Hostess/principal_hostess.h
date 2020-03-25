#ifndef PRINCIPAL_HOSTESS_H
#define PRINCIPAL_HOSTESS_H

#include <QMainWindow>
#include <Hostess/mapa_de_piso.h>

namespace Ui {
class principal_hostess;
}

class principal_hostess : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal_hostess(QWidget *parent = nullptr);
    principal_hostess(QString id, QWidget *parent = nullptr);
    ~principal_hostess();

private:
    Ui::principal_hostess *ui;
    Mapa_de_Piso piso;
    QString identifier = "";
};

#endif // PRINCIPAL_HOSTESS_H
