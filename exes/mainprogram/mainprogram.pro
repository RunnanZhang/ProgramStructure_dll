TEMPLATE	= app

DESTDIR = ../../bin

TARGET = MainProgram #可调整名子，默认和pro名字相同

LIBS	+= -L../../bin -lmethod

INCLUDEPATH += ../../include

HEADERS	+= mainwindow.h

SOURCES	+= mainwindow.cpp main.cpp

FORMS	+= mainwindow.ui

