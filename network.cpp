#include "network.h"
#include "ui_network.h"
#include <QLabel>

Network::Network(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Network)


{
    ui->setupUi(this);

    //执行linux ping 命令
    system("echo `ping -c 1 www.baidu.com` > /software/network.txt");

    QString displayString;

    //将/software/network.txt文件的内容赋值给file
    QFile file("/software/network.txt");

    //判断是否有file这个文件
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to detection network"<<endl;
    }

    //读取file内容
    while(!file.atEnd())
    {
        //读取file文件传递给line
        QByteArray line = file.readLine();

        //将line转换成字符并传递给str
        QString str(line);

        //把str输出到qDebug
        qDebug()<< str;

        //把str里的内容连接到displayString
        displayString.append(str);
    };


       //清除控件 textEdit/label里面的内容
       //ui->textEdit->clear();
         ui->label->clear();

       //把displayString里面的内容显示在textEdit/label
       //ui->textEdit->setPlainText(displayString);
         ui->label->setText(displayString);

       //删除software/network.txt
       system("rm /software/network.txt");


}



Network::~Network()
{
    delete ui;
}
