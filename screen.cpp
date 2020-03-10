#include "screen.h"
#include "ui_screen.h"
#include <QLabel>
#include <QMovie>


Screen::Screen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Screen)
{
    ui->setupUi(this);

    //播放资源文件 gif 路径的sreen.gif
    QMovie *movie = new QMovie(":/gif/screen.gif");
    ui->label->setMovie(movie);
    movie->start();

}

Screen::~Screen()
{
    delete ui;
}
