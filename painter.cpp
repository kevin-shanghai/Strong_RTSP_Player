#include "painter.h"

Painter::Painter(QWidget *parent) :
    QWidget(parent)
{
}

void Painter::paintEvent()
{
    QPainter painter(this);
    QPixmap pix;
    pix.load("D:\\Programing\\Practice\\Qt\\Player\\player\\images\\1.jpg");
    painter.drawPixmap(100,100,60,40,pix);
}
