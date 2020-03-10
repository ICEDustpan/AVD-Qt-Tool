#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <screen.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//跳转到 screen ui 界面
void MainWindow::on_bt_screen_clicked()
{
    Screen d;
    d.exec();
}
