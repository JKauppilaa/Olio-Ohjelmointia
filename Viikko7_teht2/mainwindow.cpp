#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->N0,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N1,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N2,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N3,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N4,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N5,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N6,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N7,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N8,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->N9,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->divide,&QPushButton::clicked,this,&MainWindow::plusMinusMulDivClickHandler);
    connect(ui->plus,&QPushButton::clicked,this,&MainWindow::plusMinusMulDivClickHandler);
    connect(ui->minus,&QPushButton::clicked,this,&MainWindow::plusMinusMulDivClickHandler);
    connect(ui->multiply,&QPushButton::clicked,this,&MainWindow::plusMinusMulDivClickHandler);
    connect(ui->enter,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);
    connect(ui->clear,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler(){
    if(state == 1){
        QPushButton * nappi = qobject_cast<QPushButton*>(sender());
        number1 = nappi->text();
        ui->laatikko1->insert(QString(number1));
        number1 = ui->laatikko1->text();
    }
    else{
        QPushButton * nappi = qobject_cast<QPushButton*>(sender());
        number2 = nappi->text();
        ui->laatikko2->insert(QString(number2));
        number2 = ui->laatikko2->text();
    }
}

void MainWindow::clearAndEnterClickHandler(){
    QPushButton * nappi = qobject_cast<QPushButton*>(sender());
    QString nimi = nappi->text();
    qDebug() << nimi ;
    if(nimi == "CLEAR"){
        resetLineEdits();
        state = 1;
    }
    else if(nimi == "ENTER" && state == 2){
        float num1 = number1.toFloat();
        float num2 = number2.toFloat();
        qDebug() << "TESTI";
        if(operand == 0){
            result = num1 + num2;
            qDebug() << result ;
            ui->tulos->setText(QString::number(result));
        }
        else if(operand == 1){
            result = num1 - num2;
            ui->tulos->setText(QString::number(result));
        }
        else if(operand == 2){
             result = num1 / num2;
            ui->tulos->setText(QString::number(result));
        }
        else if(operand == 3){
            result = num1 * num2;
            ui->tulos->setText(QString::number(result));
        }
    }
}

void MainWindow::plusMinusMulDivClickHandler()
{
    if(state == 1){
        QPushButton * nappi = qobject_cast<QPushButton*>(sender());
        QString muuttuja = nappi->text();
        if(muuttuja == '+'){
            operand = 0;
        }
        else if(muuttuja == '-'){
            operand = 1;
        }
        else if(muuttuja == '/'){
            operand = 2;
        }
        else if(muuttuja == '*'){
            operand = 3;
        }
        state = 2;
    }
}

void MainWindow::resetLineEdits()
{
    ui->laatikko1->clear();
    ui->laatikko2->clear();
    ui->tulos->clear();
}

