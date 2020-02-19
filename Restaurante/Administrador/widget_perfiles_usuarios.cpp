#include "widget_perfiles_usuarios.h"
#include "ui_widget_perfiles_usuarios.h"

widget_perfiles_usuarios::widget_perfiles_usuarios(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_perfiles_usuarios)
{
    ui->setupUi(this);
}

widget_perfiles_usuarios::~widget_perfiles_usuarios()
{
    delete ui;
}
