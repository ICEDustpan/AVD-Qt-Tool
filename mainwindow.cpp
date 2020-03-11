#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <screen.h>
#include <network.h>
#include <softkeyboard.h>

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

//通过调用linux命令播放音乐
void MainWindow::on_bt_music_clicked()
{
    system("aplay /music/music.wav");
}


//跳转到 network ui 界面
void MainWindow::on_bt_network_clicked()
{
    Network d;
    d.exec();
}


//跳转到Soft keyboard ui 界面
void MainWindow::on_bt_softkeyboard_clicked()
{
    Softkeyboard d;
    d.exec();
}
