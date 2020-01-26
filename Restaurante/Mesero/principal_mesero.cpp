#include "principal_mesero.h"
#include "ui_principal_mesero.h"

Principal_Mesero::Principal_Mesero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal_Mesero)
{
    ui->setupUi(this);
}

Principal_Mesero::~Principal_Mesero()
{
    delete ui;
}

void Principal_Mesero::on_parilla_clicked()
{

}

void Principal_Mesero::on_ensalada_clicked()
{

}

void Principal_Mesero::on_mar_clicked()
{

}

void Principal_Mesero::on_sopa_clicked()
{

}

void Principal_Mesero::on_entrada_clicked()
{

}

void Principal_Mesero::on_guarnicion_clicked()
{

}

void Principal_Mesero::on_reposteria_clicked()
{

}

void Principal_Mesero::on_infantil_clicked()
{

}
