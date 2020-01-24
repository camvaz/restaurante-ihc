#include "principal_hostess.h"
#include "ui_principal_hostess.h"

principal_hostess::principal_hostess(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal_hostess)
{
    ui->setupUi(this);
}

principal_hostess::~principal_hostess()
{
    delete ui;
}
