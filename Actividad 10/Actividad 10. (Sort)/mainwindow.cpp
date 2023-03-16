#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <qfiledialog.h>
#include <QList>

#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
    w.show();




    //qDebug() << "Adios mundo";

    return a.exec();
}




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Neuronas");
    QList <QString> neurona;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}



void MainWindow::on_btnCapturar_clicked()
{/*
    QString id = ui->txtID->text();
    QString voltaje = ui->txtVoltaje->text();
    QString posicion_x = ui->txtPx->text();
    QString posicion_y = ui->txtPy->text();
    QString red = ui->txtRed->text();
    QString green = ui->txtGreen->text();
    QString blue = ui->txtBlue->text();
    QString neurona = QString(" ID: %1\n Voltaje: %2\n Posicion X: %3\n Posicion Y: %4\n Red: %5\n Green: %6\n Blue: %7\n").arg(id).arg(voltaje).arg(posicion_x).arg(posicion_y).arg(red).arg(green).arg(blue);
    ui->listWidget->addItem(neurona);

    ui->txtID->clear();
    ui->txtVoltaje->clear();
    ui->txtPx->clear();
    ui->txtPy->clear();
    ui->txtRed->clear();
    ui->txtGreen->clear();
    ui->txtBlue->clear();
    QMessageBox::information(this, "Mensaje", "Neurona Capturada :)");*/
}


void MainWindow::on_btnCapturar_2_clicked()
{
    QString id = ui->txtID->text();
    QString voltaje = ui->txtVoltaje->text();
    QString posicion_x = ui->txtPx->text();
    QString posicion_y = ui->txtPy->text();
    QString red = ui->txtRed->text();
    QString green = ui->txtGreen->text();
    QString blue = ui->txtBlue->text();
    neurona = QString(" ID: %1\n Voltaje: %2\n Posicion X: %3\n Posicion Y: %4\n Red: %5\n Green: %6\n Blue: %7\n").arg(id).arg(voltaje).arg(posicion_x).arg(posicion_y).arg(red).arg(green).arg(blue);
    ui->Qlist->addItem(neurona);

    ui->txtID->clear();
    ui->txtVoltaje->clear();
    ui->txtPx->clear();
    ui->txtPy->clear();
    ui->txtRed->clear();
    ui->txtGreen->clear();
    ui->txtBlue->clear();
    QMessageBox::information(this, "Mensaje", "Neurona Capturada :)");
}

