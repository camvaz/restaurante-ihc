#include "mapa_de_piso.h"
#include "ui_mapa_de_piso.h"
#include "asignar_mesa.h"

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

            if(query.value(0).toInt()==13)
                ui->mesa_13->setIcon(mesas_1);

            if(query.value(0).toInt()==14)
                ui->mesa_14->setIcon(mesas_1);

            if(query.value(0).toInt()==15)
                ui->mesa_15->setIcon(mesas_1);

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

                if(query.value(0).toInt()==13)
                    ui->mesa_13->setIcon(mesas_2);

                if(query.value(0).toInt()==14)
                    ui->mesa_14->setIcon(mesas_2);

                if(query.value(0).toInt()==15)
                    ui->mesa_15->setIcon(mesas_2);
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

                    if(query.value(0).toInt()==13)
                        ui->mesa_13->setIcon(mesas_3);

                    if(query.value(0).toInt()==14)
                        ui->mesa_14->setIcon(mesas_3);

                    if(query.value(0).toInt()==15)
                        ui->mesa_15->setIcon(mesas_3);

                }
            }
        }

    }
}

void Mapa_de_Piso::on_mesa_1_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=1");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("1");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_2_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=2");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("2");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_3_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=3");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("3");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_4_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=4");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("4");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_5_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=5");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("5");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_6_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=6");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("6");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_7_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=7");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("7");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_8_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=8");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("8");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_9_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=9");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("9");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_10_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=10");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("10");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_11_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=11");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("11");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_12_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=12");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("12");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_13_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=13");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("13");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_14_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=14");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("14");
        asignar.exec();
        cargarMesas();
    }
}

void Mapa_de_Piso::on_mesa_15_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=15");
    query.exec();
    query.next();
    if(query.value(0).toString()=="disponible")
    {
        Asignar_mesa asignar("15");
        asignar.exec();
        cargarMesas();
    }
}
