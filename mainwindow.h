#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_bt_screen_clicked();

    void on_bt_music_clicked();

    void on_bt_network_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
