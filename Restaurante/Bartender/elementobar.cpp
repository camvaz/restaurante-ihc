#include "elementobar.h"
#include "ui_elementobar.h"

elementoBar::elementoBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::elementoBar)
{
    ui->setupUi(this);
}

elementoBar::~elementoBar()
{
    delete ui;
}
