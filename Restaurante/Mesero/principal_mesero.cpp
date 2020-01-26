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
//SLOT DE PLATILLOS
void Principal_Mesero::on_parilla_clicked(){ui->paginas->setCurrentIndex(2);}

void Principal_Mesero::on_ensalada_clicked(){ui->paginas->setCurrentIndex(3);}

void Principal_Mesero::on_mar_clicked(){ui->paginas->setCurrentIndex(4);}

void Principal_Mesero::on_sopa_clicked(){ui->paginas->setCurrentIndex(5);}

void Principal_Mesero::on_entrada_clicked(){ui->paginas->setCurrentIndex(6);}

void Principal_Mesero::on_guarnicion_clicked(){ui->paginas->setCurrentIndex(7);}

void Principal_Mesero::on_reposteria_clicked(){ui->paginas->setCurrentIndex(8);}

void Principal_Mesero::on_infantil_clicked(){ui->paginas->setCurrentIndex(9);}

//SLOT DE MENU DE NAVEGACION
void Principal_Mesero::on_comanda_clicked(){ui->paginas->setCurrentIndex(1);}

void Principal_Mesero::on_mesas_clicked(){ui->paginas->setCurrentIndex(0);}
