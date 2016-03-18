#-------------------------------------------------
#
# Project created by QtCreator 2016-03-13T14:10:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProviTel
TEMPLATE = app


SOURCES += main.cpp\
        provitel.cpp \
    provimap.cpp \
    planets.cpp \
    channelintel.cpp \
    intelmessages.cpp

HEADERS  += provitel.h \
    provimap.h \
    planets.h \
    channelintel.h \
    intelmessages.h

FORMS    += provitel.ui

RESOURCES += \
    resource.qrc
