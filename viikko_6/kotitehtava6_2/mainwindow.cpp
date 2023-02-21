#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   /* connect(ui->n1,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n2,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n3,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n4,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n5,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n6,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n7,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n8,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n9,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n9,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->n0,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->add,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->sub,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->mul,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->div,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->clear,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    connect(ui->enter,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler(double a)
{    
    if (state==2){
            ui->num2->setText(number2.number(a));
            number2 = number2.number(a);
            float n2 = number2.toFloat();
            qDebug() << "Button name: " << "N" <<n2;
            qDebug() << "Number 2:" <<n2;
}
    else {
            ui->num1->setText(number1.number(a));
            number1 = number1.number(a);
            float n1 = number1.toFloat();
            qDebug() << "Button name: " << "N"<<n1;
            qDebug() << "Number 1: " <<n1;
    }

}

void MainWindow::on_n1_clicked()
{    
    numberClickedHandler(1);
}

void MainWindow::on_n2_clicked()
{
    numberClickedHandler(2);
}

void MainWindow::on_n3_clicked()
{
    numberClickedHandler(3);
}

void MainWindow::on_n4_clicked()
{
    numberClickedHandler(4);
}

void MainWindow::on_n5_clicked()
{
    numberClickedHandler(5);
}

void MainWindow::on_n6_clicked()
{
    numberClickedHandler(6);
}

void MainWindow::on_n7_clicked()
{
    numberClickedHandler(7);
}

void MainWindow::on_n8_clicked()
{
    numberClickedHandler(8);
}

void MainWindow::on_n9_clicked()
{
    numberClickedHandler(9);
}

void MainWindow::on_n0_clicked()
{
    numberClickedHandler(0);
}

void MainWindow::on_clear_clicked()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();

    state = 1;

    number1 = "";
    number2 = "";
}

void MainWindow::on_enter_clicked()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();

    if (operand==0){
        result=n1+n2;
        ui->result->setText(QString::number(result));

    }
    else if (operand==1){
        result=n1-n2;
        ui->result->setText(QString::number(result));
    }
    else if (operand==2){
        result=n1*n2;
        ui->result->setText(QString::number(result));
    }
    else {
        result=n1/n2;
        ui->result->setText(QString::number(result));
    }

}

void MainWindow::on_add_clicked()
{
    operand = 0;
    state = 2;
}

void MainWindow::on_sub_clicked()
{
    operand = 1;
    state = 2;
}

void MainWindow::on_mul_clicked()
{
    operand = 2;
    state = 2;
}

void MainWindow::on_div_clicked()
{
    operand = 3;
    state = 2;
}

