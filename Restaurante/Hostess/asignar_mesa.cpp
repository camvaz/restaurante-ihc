#include "asignar_mesa.h"
#include "ui_asignar_mesa.h"
#include "qmessagebox.h"

Asignar_mesa::Asignar_mesa(QString idMesa,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Asignar_mesa)
{
    ui->setupUi(this);
    this->idMesa=idMesa;
    cargarCombobox();

}

Asignar_mesa::~Asignar_mesa()
{
    delete ui;
}

void Asignar_mesa::cargarCombobox()
{
    QSqlQuery query,query2;
    int num=0;
    query.prepare("SELECT idUsuario,NombreUsuario FROM usuario WHERE Rol='Mesero'");
    query.exec();

    while(query.next())
    {
        query2.prepare("SELECT Usuario_idUsuario FROM mesa");
        query2.exec();
        while(query2.next())
        {
            if(query2.value(0).toString()==query.value(0).toString())
            {
                num++;
            }
        }
        if(num<3)
        {
            ui->comboBox_meseros->addItem(query.value(1).toString());
        }
        num=0;
    }


}



void Asignar_mesa::on_btn_asignar_clicked()
{
    QMessageBox info;

    QString comensales=QString::number(ui->num_comensales->value());
    QString usuario=ui->comboBox_meseros->currentText();
    QString id_usuario;
    if(usuario=="Seleccionar")
    {
        info.setWindowTitle("Información");
        info.setText("Debes seleccionar un mesero");
        info.setStandardButtons(QMessageBox::Ok);
        info.setDefaultButton(QMessageBox::Ok);
        info.setButtonText(QMessageBox::Ok,"Aceptar");
        info.exec();
    }else
    {
        if(comensales=="0")
        {
            info.setWindowTitle("Información");
            info.setText("El número de comensales debe ser mayor a 0");
            info.setStandardButtons(QMessageBox::Ok);
            info.setDefaultButton(QMessageBox::Ok);
            info.setButtonText(QMessageBox::Ok,"Aceptar");
            info.exec();
        }else
        {
            QSqlQuery query;
            query.prepare("SELECT idUsuario FROM usuario WHERE NombreUsuario='"+usuario+"'");
            query.exec();
            query.next();
            id_usuario=query.value(0).toString();

            query.prepare("UPDATE mesa SET Comensales="+comensales+", Usuario_idUsuario="+id_usuario+",Estado='ocupado' WHERE idMesa="+idMesa);
            if(query.exec())
            {
                info.setWindowTitle("Información");
                info.setText("Mesa asignada con éxito");
                info.setStandardButtons(QMessageBox::Ok);
                info.setDefaultButton(QMessageBox::Ok);
                info.setButtonText(QMessageBox::Ok,"Aceptar");
                info.exec();
                this->close();
            }
        }
    }
}
