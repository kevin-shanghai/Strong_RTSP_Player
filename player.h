/******************************
 * Qt player using libVLC     *
 * By protonux                *
 *                            *
 * Under WTFPL                *
 ******************************/

#ifndef PLAYER
#define PLAYER

#include <QtGui>
#include "vlc.h"
#include "openurldialog.h"
#include "mainwindow.h"

class OpenURLDialog;
class MainWindow;

class VLCMainwindow : public QMainWindow {

    Q_OBJECT

        public:
               VLCMainwindow();
               virtual ~VLCMainwindow();
               void StartPlayMainURL(QString rtspURL);

        private slots:
               void openFile();
               void ShowopenURLDialog();
               void StartPlay();

               void play();
               void stop();
               void mute();

               int changeVolume(int);
               void changePosition(int);
               void updateInterface();

        protected:
               virtual void closeEvent(QCloseEvent*);

        private:
               QString current;
               QPushButton *playBut;
               QPushButton *stopBut;
               QPushButton *muteBut;
               QSlider *volumeSlider;
               QSlider *slider;
               QWidget *videoWidget;
               QWidget *centralWidget;
               libvlc_instance_t *vlcObject;
               libvlc_media_player_t *vlcPlayer;
               OpenURLDialog* URLDialog;
               MainWindow* mainwindow;



               void initMenus();
               void initComponents();
};


#endif
