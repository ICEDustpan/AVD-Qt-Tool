#include "screen.h"
#include "ui_screen.h"
#include <QLabel>
#include <QMovie>



Screen::Screen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Screen)
{
    ui->setupUi(this);


    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);

    //播放资源文件 gif 路径的sreen.gif
    QMovie *movie = new QMovie(":/gif/screen.gif");
    ui->label->setMovie(movie);
    movie->start();

}

Screen::~Screen()
{
    delete ui;
}


// 退出screen ui 界面
void Screen::on_bt_quit_screen_clicked()
{
    //退出当前窗口
    QDialog::accept();
}
