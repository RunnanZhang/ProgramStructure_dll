TEMPLATE	= app

DESTDIR = ../../bin

TARGET = MainProgram #�ɵ������ӣ�Ĭ�Ϻ�pro������ͬ

LIBS	+= -L../../bin -lmethod

INCLUDEPATH += ../../include

HEADERS	+= mainwindow.h

SOURCES	+= mainwindow.cpp main.cpp

FORMS	+= mainwindow.ui

