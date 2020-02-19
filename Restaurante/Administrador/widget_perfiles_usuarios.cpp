#include "widget_perfiles_usuarios.h"
#include "ui_widget_perfiles_usuarios.h"
#include <QDebug>
#include "tarjeta_perfil_empleado.h"

widget_perfiles_usuarios::widget_perfiles_usuarios(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_perfiles_usuarios)
{
    ui->setupUi(this);
    cargarPerfiles();
}



widget_perfiles_usuarios::~widget_perfiles_usuarios()
{
    delete ui;
}

void widget_perfiles_usuarios::cargarPerfiles()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM usuario");
    query.exec();

    limpiarCatalogo();

    int i = 0;
    int row = 0;
    int col = 0;

    while(query.next())
    {
        QString idUsuario=query.value(0).toString();

        row = i / 3;
        col = i % 3;

        tarjeta_perfil_empleado *tarjeta=new tarjeta_perfil_empleado(idUsuario);

        i++;
        ui->gridLayout->addWidget(tarjeta, row, col);
    }
}

void widget_perfiles_usuarios::limpiarCatalogo()
{
    while (QLayoutItem *item = ui->gridLayout->takeAt(0))
    {
        Q_ASSERT(!item->layout()); // otherwise the layout will leak
        delete item->widget();
        delete item;
    }
}
