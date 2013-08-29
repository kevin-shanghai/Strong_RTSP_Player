#ifndef OPENURLDIALOG_H
#define OPENURLDIALOG_H

#include <QWidget>
#include <QtGui>
#include "player.h"


class VLCMainwindow;
class OpenURLDialog : public QDialog
{
    Q_OBJECT
public:
    QLineEdit *urlLineEdit;
    explicit OpenURLDialog(QWidget *parent = 0);




signals:

public slots:


private:
    QLabel *urlLabel;

    QPushButton *playButton;
    VLCMainwindow *vlcPlayer1;

};

#endif // OPENURLDIALOG_H
