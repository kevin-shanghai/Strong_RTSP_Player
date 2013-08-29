#include "openurldialog.h"
#include "mainwindow.h"
class MainWindow;

OpenURLDialog::OpenURLDialog(QWidget *parent):QDialog(parent = 0)
{
    //vlcPlayer1 = this->getPlayerInstance();
    //vlcPlayer1 = MainWindow::player;
    vlcPlayer1 = new VLCMainwindow;
    urlLabel = new QLabel("URL:");
    urlLineEdit = new QLineEdit;
    playButton = new QPushButton("Play");
    connect(playButton, SIGNAL(clicked()), vlcPlayer1, SLOT(StartPlay()));

    urlLineEdit->setText("rtsp://218.204.223.237:554/live/1/66251FC11353191F/e7ooqwcfbqjoo80j.sdp");

    QHBoxLayout *urllayout = new QHBoxLayout;
    urllayout->addWidget(urlLabel);
    urllayout->addWidget(urlLineEdit);
    urllayout->addWidget(playButton);
    QVBoxLayout *main = new QVBoxLayout;
    main->addLayout(urllayout);
    setLayout(main);
}




