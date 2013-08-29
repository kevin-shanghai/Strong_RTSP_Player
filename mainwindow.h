#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "painter.h"
#include "player.h"
#include "vlc.h"

class VLCMainwindow;
class Painter;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintFrame();

private slots:
    void on_Play_clicked();


    void on_PlayURL_clicked();

private:
    Ui::MainWindow *ui;
    VLCMainwindow *player;
};



#endif // MAINWINDOW_H
