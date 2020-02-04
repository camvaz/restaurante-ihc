#include "ver_info_usuario.h"
#include "ui_ver_info_usuario.h"

ver_info_usuario::ver_info_usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ver_info_usuario)
{
    ui->setupUi(this);
}

ver_info_usuario::~ver_info_usuario()
{
    delete ui;
}
