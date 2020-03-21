#include "elementocola.h"
#include "ui_elementocola.h"

elementoCola::elementoCola(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::elementoCola)
{
    ui->setupUi(this);
}

elementoCola::~elementoCola()
{
    delete ui;
}

void elementoCola::editaLabels(QString nomPlato, QString cant, QString comentarios){
    ui->lblPlatillo->setText(nomPlato);
    ui->lblCantidad->setText(cant);
    ui->lblComentario->setText(comentarios);
}
