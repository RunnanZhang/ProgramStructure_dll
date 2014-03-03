TEMPLATE	= lib
LANGUAGE	= C++

CONFIG	+= warn_on release

DESTDIR = ../../lib

LIBS	+= -L../../bin -lmethod

INCLUDEPATH += ../../include

HEADERS	+= module.h

SOURCES	+= module.cpp modulexport.cpp

FORMS	+= module.ui

