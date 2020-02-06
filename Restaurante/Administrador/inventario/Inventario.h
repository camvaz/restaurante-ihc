#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <QWidget>
#include <QSqlRelationalTableModel>

namespace Ui {
class Inventario;
}

class Inventario : public QWidget
{
    Q_OBJECT

public:
    explicit Inventario(QWidget *parent = nullptr);
    ~Inventario();

private:
    Ui::Inventario *ui;
    QSqlRelationalTableModel *tabla_inventario;
};

#endif // INVENTARIO_H
