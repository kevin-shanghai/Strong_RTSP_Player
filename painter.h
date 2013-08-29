#ifndef PAINTER_H
#define PAINTER_H
#include <QtGui>

#include <QWidget>

class Painter : public QWidget
{
    Q_OBJECT
public:
    explicit Painter(QWidget *parent = 0);
    void paintEvent();
    
signals:
    
public slots:
    
};

#endif // PAINTER_H
