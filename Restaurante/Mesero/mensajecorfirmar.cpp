#include "mensajecorfirmar.h"
#include "ui_mensajecorfirmar.h"

mensajeCorfirmar::mensajeCorfirmar(QString idPedido,QString idPlatillo,QString cantidad,QString descripcion,QString numMesa,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mensajeCorfirmar)
{
    ui->setupUi(this);


   idPedido1=idPedido;
   idPlatillo1=idPlatillo;
   cantidad1=cantidad;
   descripcion1=descripcion;
   numMesa1=numMesa;

   QString imagen;
   imagen="C:/Imagenes tamaño pequeño/Advertencia";
   QPixmap adver(imagen);
   ui->Advertencia_2->setPixmap(adver);

}

mensajeCorfirmar::~mensajeCorfirmar()
{
    delete ui;
}

void mensajeCorfirmar::on_aceptar_clicked()
{
    QString pedido,ulti,mesa,estado,pedidoActual;
    QSqlQuery queryPedido,queryComaPedi,queryUlti,queryUpdate,mesas;

    QDate fecha=QDate::currentDate();QString fecha_Actual=fecha.toString("yyyy-MM-dd");
    pedido="insert into Pedido(Mesa_idMesa,fecha)values('"+numMesa1+"','"+fecha_Actual+"')";
    queryPedido.exec(pedido);queryPedido.next();


    qDebug()<<"cantidad:"<<cantidad1;
    qDebug()<<"numero mesa: "<<numMesa1;
    qDebug()<<"fecha actual: "<<fecha_Actual;
    qDebug()<<"id comanda desde dialogo: "<<idPlatillo1;
    qDebug()<<"Descripcion del platillo"<<descripcion1;


    ulti="SELECT  max(idPedido) AS id FROM Pedido";
    queryUlti.exec(ulti);queryUlti.next();ulti=queryUlti.value(0).toString();

    qDebug()<<"ultimo id: "<<ulti;

    pedidoActual="insert into Comanda_has_Platillo(idPedido,idPlatillo,cantidad,describcion)"
                 "values('"+ulti+"','"+idPlatillo1+"','"+cantidad1+"','"+descripcion1+"')";
    queryComaPedi.exec(pedidoActual);
    queryComaPedi.next();

    mesa="select *from mesa where idMesa='"+numMesa1+"'";
    mesas.exec(mesa);
    mesas.next();
    estado=mesas.value(3).toString();

    if(estado=="disponible"){
        qDebug()<<"mesa pasa a ocupada";
      estado="UPDATE mesa SET Estado='ocupado' WHERE idMesa='"+numMesa1+"'";
      queryUpdate.exec(estado);
      queryUpdate.next();
     }
   close();
   confirmado=1;
   //confirmar();

}

void mensajeCorfirmar::on_cancelar_clicked()
{

    close();


}

int mensajeCorfirmar::confirmar(){
    //qDebug()<<"skjsl"<<confirmado;
    return confirmado;
}
