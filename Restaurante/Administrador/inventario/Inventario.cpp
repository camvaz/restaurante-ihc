#include "Inventario.h"
#include "ui_Inventario.h"
#include <QSqlRelationalTableModel>

Inventario::Inventario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inventario)
{
    ui->setupUi(this);

    ui->TV_inventario->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //Asignar nombre de la tabla
    tabla_inventario = new QSqlRelationalTableModel(this);
    tabla_inventario->setTable("");
    tabla_inventario->select();

    ui->TV_inventario->setModel(tabla_inventario);
    //cambiar el primer index es el de l tabla que selecciono
    //el segundo de como quiero que aparezca
    tabla_inventario->setHeaderData(tabla_inventario->fieldIndex("ID"),Qt::Horizontal,"ID");
    tabla_inventario->setHeaderData(tabla_inventario->fieldIndex("nombre"),Qt::Horizontal,"Nombre del Insumo");
    tabla_inventario->setHeaderData(tabla_inventario->fieldIndex("cantidad"),Qt::Horizontal,"Cantidad");

     //en caso de tener mas cosas que mostrar se ocultan asi
/*
    ui->TV_inventario->hideColumn(3);
    ui->TV_inventario->hideColumn(4);
    ui->TV_inventario->hideColumn(5);
*/

}

Inventario::~Inventario()
{
    delete ui;
}