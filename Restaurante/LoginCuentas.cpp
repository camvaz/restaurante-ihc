#include "LoginCuentas.h"
#include "ui_LoginCuentas.h"

LoginCuentas::LoginCuentas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginCuentas)
{
    ui->setupUi(this);

    log     = new Login;
    QPixmap imagen;
    imagen.load("C:/imagenes/logo.jpg");
    ui->IMG->setFixedSize(ui->IMG->width(),ui->IMG->height());
    ui->IMG->setPixmap(imagen);
    ui->IMG->setScaledContents(true);

}

LoginCuentas::~LoginCuentas()
{
    delete ui;
}

void LoginCuentas::clearLayout(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))){
        if (item->layout()){
            clearLayout(item->layout());
            delete  item->layout();
        }
        if (item->widget()){
            delete item->widget();
        }
        delete item;
    }
}

void LoginCuentas::recargar(){
    int contadorc=0,contadorf=0;
    clearLayout(ui->LayLogin);

    // Consulta BD
    QSqlQuery cuentas;
    cuentas.prepare("select * from Usuario");
    cuentas.exec();

    //Llenandotela toda de tarjetas
    while (cuentas.next()){
        //Creando tarjetas
        TarjetaCuentas *tarjeta = new TarjetaCuentas(cuentas.value(0).toString());
        tarjeta->setFixedSize(100,129);
        ui->LayLogin->addWidget(tarjeta,contadorf,contadorc,1,1);
        //Contando columnas y arreglando
        if(contadorc==1){
            contadorf++;
            contadorc=0;
        }else{
            contadorc++;
        }

    }
}

void LoginCuentas::on_btn_OtraCuenta_clicked()
{
 //   QWidget *centralWidget  = this->parentWidget();
    QWidget *LoginW         = this;

    LoginW->close();
    log->show();
}
