#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setEnabled(true);
    player = new VLCMainwindow;
    this->setFixedSize(this->width(), this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintFrame()
{
     QPixmap pixmap("D:\\Programing\\Practice\\Qt\\Player\\player\\images\\VLC.png");
     QPalette palette;
     palette.setBrush(ui->frame->backgroundRole(),QBrush(pixmap));
     ui->frame->setPalette(palette);
     ui->frame->setMask(pixmap.mask());
     ui->frame->setAutoFillBackground(true);
     ui->frame->show();
}


void MainWindow::on_Play_clicked()
{
  player->show();
}




void MainWindow::on_PlayURL_clicked()
{
    QString rtspURL = ui->URLlineEdit->text();
    player->StartPlayMainURL(rtspURL);
    player->show();
}
