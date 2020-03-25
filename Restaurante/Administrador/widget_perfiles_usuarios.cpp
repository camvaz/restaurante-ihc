#include "widget_perfiles_usuarios.h"
#include "ui_widget_perfiles_usuarios.h"
#include <QDebug>
#include "tarjeta_perfil_empleado.h"
#include "Administrador/crear_usuario.h"

widget_perfiles_usuarios::widget_perfiles_usuarios(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_perfiles_usuarios)
{
    ui->setupUi(this);
    cargarPerfiles();
    QString imagen;
    imagen="C:/Imagenes tamaño pequeño/more";QIcon boton_users(imagen);ui->btnAgregarEmpleadoPerfiles->setIcon(boton_users);
    imagen="C:/Imagenes tamaño pequeño/search";
    QPixmap map=imagen;
    ui->label_2->setPixmap(map);
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
    query.next();

    while(query.next())
    {
        QString idUsuario=query.value(0).toString();

        row = i / 3;
        col = i % 3;

        tarjeta_perfil_empleado *tarjeta=new tarjeta_perfil_empleado(idUsuario,this);

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

void widget_perfiles_usuarios::on_btnAgregarEmpleadoPerfiles_clicked()
{
    crear_usuario *u=new crear_usuario();
    u->exec();
    cargarPerfiles();
}

void widget_perfiles_usuarios::on_lineEdit_textChanged(const QString &arg1)
{
    QSqlQuery query;
    char caracter = '%';
    query.prepare("select * from informacionpersonal where nombre like '"+ arg1 + caracter +"'");
    query.exec();

    limpiarCatalogo();

    int i = 0;
    int row = 0;
    int col = 0;

    while(query.next())
    {
        QString idUsuario=query.value(6).toString();

        row = i / 3;
        col = i % 3;

        tarjeta_perfil_empleado *tarjeta=new tarjeta_perfil_empleado(idUsuario,this);

        i++;
        ui->gridLayout->addWidget(tarjeta, row, col);
    }
}
