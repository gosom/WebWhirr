TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

<<<<<<< HEAD
LIBS += -L/usr/lib/sdl

SOURCES += main.cpp \
    htmlreader.cpp \
    rendernode.cpp \
=======
LIBS += -L/usr/lib/skia/trunk -skia

SOURCES += main.cpp \
    htmlreader.cpp \
    renderobject.cpp \
>>>>>>> caf0e5f71f03e2eeef0c2e69104f8692afffc831
    painter.cpp

HEADERS += \
    htmlreader.h \
<<<<<<< HEAD
    rendernode.h \
=======
    renderobject.h \
>>>>>>> caf0e5f71f03e2eeef0c2e69104f8692afffc831
    painter.h

