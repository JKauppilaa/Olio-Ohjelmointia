#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lisaa,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->vahenna,&QPushButton::clicked,this,&MainWindow::handleClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick(){
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString nimi = button->objectName();
    if(nimi == "lisaa"){
        luku = luku + 1;
        ui->lineEdit->setText(QString::number(luku));
    }
    else{
        luku = 0;
        ui->lineEdit->setText(QString::number(luku));
    }
}


