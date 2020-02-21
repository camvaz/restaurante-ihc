#include "mapa_de_piso.h"
#include "ui_mapa_de_piso.h"

Mapa_de_Piso::Mapa_de_Piso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mapa_de_Piso)
{
    ui->setupUi(this);
    cargarMesas();
}

Mapa_de_Piso::~Mapa_de_Piso()
{
    delete ui;
}

void Mapa_de_Piso::cargarMesas()
{
    QString mesalimpia="C:/Imagenes tamaño pequeño/disponible";
    QIcon mesas_1(mesalimpia);
    QString mesaOcupada="C:/Imagenes tamaño pequeño/ocupada";
    QIcon mesas_2(mesaOcupada);
    QString mesaSucia="C:/Imagenes tamaño pequeño/sucia";
    QIcon mesas_3(mesaSucia);
    QSqlQuery query;
    query.prepare("SELECT * FROM mesa");
    query.exec();
    while(query.next())
    {
        if(query.value(3).toString()=="disponible")
        {
            if(query.value(0).toInt()==1)
               ui->mesa_1->setIcon(mesas_1);

            if(query.value(0).toInt()==2)
                ui->mesa_2->setIcon(mesas_1);

            if(query.value(0).toInt()==3)
                ui->mesa_3->setIcon(mesas_1);

            if(query.value(0).toInt()==4)
                ui->mesa_4->setIcon(mesas_1);

            if(query.value(0).toInt()==5)
                ui->mesa_5->setIcon(mesas_1);

            if(query.value(0).toInt()==6)
                ui->mesa_6->setIcon(mesas_1);

            if(query.value(0).toInt()==7)
                ui->mesa_7->setIcon(mesas_1);

            if(query.value(0).toInt()==8)
                ui->mesa_8->setIcon(mesas_1);

            if(query.value(0).toInt()==9)
                ui->mesa_9->setIcon(mesas_1);

            if(query.value(0).toInt()==10)
                ui->mesa_10->setIcon(mesas_1);

            if(query.value(0).toInt()==11)
                ui->mesa_11->setIcon(mesas_1);

            if(query.value(0).toInt()==12)
                ui->mesa_12->setIcon(mesas_1);

        }else {
            if(query.value(3).toString()=="ocupado")
            {
                if(query.value(0).toInt()==1)
                   ui->mesa_1->setIcon(mesas_2);

                if(query.value(0).toInt()==2)
                    ui->mesa_2->setIcon(mesas_2);

                if(query.value(0).toInt()==3)
                    ui->mesa_3->setIcon(mesas_2);

                if(query.value(0).toInt()==4)
                    ui->mesa_4->setIcon(mesas_2);

                if(query.value(0).toInt()==5)
                    ui->mesa_5->setIcon(mesas_2);

                if(query.value(0).toInt()==6)
                    ui->mesa_6->setIcon(mesas_2);

                if(query.value(0).toInt()==7)
                    ui->mesa_7->setIcon(mesas_2);

                if(query.value(0).toInt()==8)
                    ui->mesa_8->setIcon(mesas_2);

                if(query.value(0).toInt()==9)
                    ui->mesa_9->setIcon(mesas_2);

                if(query.value(0).toInt()==10)
                    ui->mesa_10->setIcon(mesas_2);

                if(query.value(0).toInt()==11)
                    ui->mesa_11->setIcon(mesas_2);

                if(query.value(0).toInt()==12)
                    ui->mesa_12->setIcon(mesas_2);
            }else
            {
                if(query.value(3).toString()=="sucio")
                {
                    if(query.value(0).toInt()==1)
                       ui->mesa_1->setIcon(mesas_3);

                    if(query.value(0).toInt()==2)
                        ui->mesa_2->setIcon(mesas_3);

                    if(query.value(0).toInt()==3)
                        ui->mesa_3->setIcon(mesas_3);

                    if(query.value(0).toInt()==4)
                        ui->mesa_4->setIcon(mesas_3);

                    if(query.value(0).toInt()==5)
                        ui->mesa_5->setIcon(mesas_3);

                    if(query.value(0).toInt()==6)
                        ui->mesa_6->setIcon(mesas_3);

                    if(query.value(0).toInt()==7)
                        ui->mesa_7->setIcon(mesas_3);

                    if(query.value(0).toInt()==8)
                        ui->mesa_8->setIcon(mesas_3);

                    if(query.value(0).toInt()==9)
                        ui->mesa_9->setIcon(mesas_3);

                    if(query.value(0).toInt()==10)
                        ui->mesa_10->setIcon(mesas_3);

                    if(query.value(0).toInt()==11)
                        ui->mesa_11->setIcon(mesas_3);

                    if(query.value(0).toInt()==12)
                        ui->mesa_12->setIcon(mesas_3);

                }
            }
        }

    }
}
