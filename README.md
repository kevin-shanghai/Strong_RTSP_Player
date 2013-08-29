####Author:Kevin.Fu
####Email: kevinfu1985@gmail.com
####Date:  2013.8.29

The project Strong_RTSP_Player is mainly a RTSP Player which implemented with QT+libvlc
============================================

### all we known, VLC media player is a greate open source multimedia player which support almost all types of video. And libvlc is the core library of VLC, you can rewrite you own player by libvlc, it's very simple. I want to thank the open source orgnization "Video Lan" which make such a greate open source project. The follow picture is the main window of the RTSP player, you can click the menu "OpenURL" to input your rtsp URL which you want to streaming.

It's my greate hourner you can distribute or reuse part of this  progrme without for buiness. if you have any problem about this programe, please let me know!
=

![Alt text](/images/mainwindow.jpg)

###The follow picture is about the project, you can use either QTCretor or Codeblocks(which is a greate IDE for programing) to open this project on windows, if you want to trasport this project to Linux or embedded linux , you need to get the shared library libvlc.so or something like that. Before you compile this project, you must install QT library, the detail will be present at this link:
<http://blog.chinaunix.net/uid-26611383-id-3789962.html>
========================================================
###The player.h and player.cpp is the core implementation about the RTSP player, so keep in mind these two files, after that you will be clear about the detail of this project.
![Alt text](/images/project.jpg)
