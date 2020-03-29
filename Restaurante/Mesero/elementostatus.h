#ifndef ELEMENTOSTATUS_H
#define ELEMENTOSTATUS_H

#include <QWidget>
#include <QSqlQuery>
#include <qdebug.h>

namespace Ui {
class ElementoStatus;
}

class ElementoStatus : public QWidget
{
    Q_OBJECT

public:
    explicit ElementoStatus(QWidget *parent = nullptr);
    void editaLabels(QString, QString,QString);
    ~ElementoStatus();

    void platilloListo(QString);

private slots:
    void on_btnActo_clicked();

private:
    Ui::ElementoStatus *ui;
};

#endif // ELEMENTOSTATUS_H
