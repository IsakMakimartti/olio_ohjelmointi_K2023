#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "nostotalletus.h"
#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void receiveNostoAmount(float);
    void clickhandlerOpen();
    void updateUI();

private:
    Ui::MainWindow *ui;
    NostoTalletus * pNostoTalletus;
    float amount;
};
#endif // MAINWINDOW_H
