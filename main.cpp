#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include "PublicFuntion.h"

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   SupportChinese();
   QSplashScreen *splash = new QSplashScreen;
   startScreen(splash);
   /*MainWindow w;
   w.paintFrame();
   w.show();
   w.setWindowTitle(QObject::tr("My RTSP Player,^_^"));
   */

    VLCMainwindow m;
    SupportChinese();
    m.setWindowTitle(QObject::tr("Streaming player."));
    m.show();
    splash->finish(&m);

    return a.exec();
}
