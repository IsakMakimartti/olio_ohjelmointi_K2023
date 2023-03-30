#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Main");
    connect(ui->buttonOpenNostoTalletus, SIGNAL(clicked(bool)),
            this, SLOT(clickhandlerOpen()));

    pNostoTalletus = new NostoTalletus(this);
    connect(pNostoTalletus, SIGNAL(sendAmount(float)),
            this, SLOT(receiveNostoAmount(float)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receiveNostoAmount(float luku)
{
    qDebug()<<"MainWindow | ReceiveNostoAmount";
    amount = luku;
    updateUI();
}

void MainWindow::clickhandlerOpen()
{
    pNostoTalletus->open();
}

void MainWindow::updateUI()
{
    ui->textAmount->setText(QString::number(amount));
}

