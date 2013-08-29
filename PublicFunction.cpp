#include "PublicFuntion.h"
void sleep(unsigned int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void startScreen(QSplashScreen *splash)
{
    //QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap("D:\\Programing\\Practice\\Qt\\Player\\player\\images\\VLC.jpg"));
    splash->show();
    Qt::Alignment center = Qt::AlignCenter | Qt::AlignTop;
    Qt::Alignment topright = Qt::AlignRight | Qt::AlignTop;
    splash->showMessage(QObject::tr("Welcome to use kevin's RTSP streaming player......"), center, Qt::red);
    sleep(2000);
    splash->showMessage(QObject::tr("程序正在启动中,请稍等......"), center, Qt::red);
    sleep(2000);
}

void SupportChinese()
{
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
}
