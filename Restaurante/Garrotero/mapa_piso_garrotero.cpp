#include "mapa_piso_garrotero.h"
#include "ui_mapa_piso_garrotero.h"
#include "qmessagebox.h"

mapa_piso_garrotero::mapa_piso_garrotero(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mapa_piso_garrotero)
{
    ui->setupUi(this);
    cargarMesas();
}

mapa_piso_garrotero::~mapa_piso_garrotero()
{
    delete ui;
}

void mapa_piso_garrotero::cargarMesas()
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

void mapa_piso_garrotero::on_mesa_1_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=1");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=1");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}



void mapa_piso_garrotero::on_mesa_2_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=2");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=2");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_3_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=3");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=3");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_4_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=4");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=4");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_5_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=5");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=5");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_6_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=6");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=6");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_7_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=7");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=7");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_8_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=8");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=8");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_9_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=9");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=9");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_10_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=10");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=10");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_11_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=11");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=11");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_12_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=12");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=12");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_13_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=13");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=13");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_14_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=14");
    query.exec();
    query.next();
    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=14");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}

void mapa_piso_garrotero::on_mesa_15_clicked()
{
    QSqlQuery query;
    query.prepare("select estado from mesa where idMesa=15");
    query.exec();
    query.next();

    if(query.value(0).toString()=="sucio")
    {
        QMessageBox msgBox(QMessageBox::Question,"Confimación","¿Estás seguro de cambiar el estado de la mesa?",QMessageBox::Yes|QMessageBox::No);
         msgBox.setButtonText(QMessageBox::Yes,"Sí");
         msgBox.setButtonText(QMessageBox::No,"No");

          if(msgBox.exec()==QMessageBox::Yes){
              query.prepare("UPDATE mesa SET Estado='disponible' WHERE idMesa=15");
              query.exec();
              cargarMesas();
          }
    }else
    {
        if(query.value(0).toString()=="ocupado")
        {
            QMessageBox info;
            info.setWindowTitle("Información");
            info.setText("No puedes cambiar el estado de una mesa ocupada.");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }
    }
}
