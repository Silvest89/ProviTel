#-------------------------------------------------
#
# Project created by QtCreator 2016-03-13T14:10:06
#
#-------------------------------------------------

QT       += core gui network xml concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProviTel
TEMPLATE = app
win32:RC_FILE = ProviTel.rc

LIBS += -LC:/OpenSSL-Win32/lib -lubsec
INCLUDEPATH += C:/OpenSSL-Win32/include

SOURCES += main.cpp\
        provitel.cpp \
    provimap.cpp \
    intelmessages.cpp \
    htmldelegate.cpp \
    intel.cpp \
    intelmodel.cpp \
    intelchannellogparser.cpp \
    filedownloader.cpp \
    system.cpp

HEADERS  += provitel.h \
    provimap.h \
    intelmessages.h \
    htmldelegate.h \
    intel.h \
    intelmodel.h \
    intelchannellogparser.h \
    filedownloader.h \
    system.h

FORMS    += provitel.ui

RESOURCES += \
    resource.qrc
