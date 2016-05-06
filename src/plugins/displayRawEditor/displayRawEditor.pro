# -------------------------------------------------
# Project created by QtCreator 2009-02-24T08:55:52
# -------------------------------------------------
include ( ../../GPSBook/GPSBookConfig.pro)

#DEFINES  += QT_NO_WARNING_OUTPUT
#DEFINES  += QT_NO_DEBUG_OUTPUT

TARGET = displayRawEditor

CONFIG += release
DESTDIR = ../../../delivery/plugins
TEMPLATE = lib
INCLUDEPATH += ../../GPSBook
DEFINES += DISPLAYRAWEDITOR_LIBRARY
SOURCES += displayraweditor.cpp \
    displayraweditoroptionsframe.cpp \
    displayraweditorframe.cpp \
    displayraweditorhelp.cpp \
    ../../GPSBook/gpsdata.cpp
HEADERS += displayraweditor.h \
    displayraweditoroptionsframe.h \
    displayraweditorframe.h \
    displayraweditorhelp.h \
    ../../GPSBook/gpsdata.h \
    pixmap.h \
    ../../GPSBook/interface.h \
    pixmap.h
FORMS += displayraweditorhelp.ui \
    displayraweditorframe.ui \
    displayraweditoroptionsframe.ui
TRANSLATIONS = displayRawEditor_fr_fr.ts

linux-g++ {
    # libqscintilla2 libraries
    INCLUDEPATH += /usr/include/x86_64-linux-gnu/qt5/
    #INCLUDEPATH += /usr/include/x86_64-linux-gnu/qt5/QtWidgets/
    LIBS += -L../../../delivery/lib -lqscintilla2
}
mac {

}
win32 {

}
