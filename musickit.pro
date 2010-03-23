# -------------------------------------------------
# Project created by QtCreator 2009-12-22T13:28:55
# -------------------------------------------------
QT += webkit network phonon gui xml
TARGET = musickit
TEMPLATE = app

SOURCES  += main.cpp \
            mainwindow.cpp \
            WebkitApi.cpp \
            qplaydarclient/src/query.cpp \
            qplaydarclient/src/result.cpp \
            qplaydarclient/src/client.cpp \
            player/playengine.cpp \
    spoon/SpoonCore.cpp \
    spoon/JavaBridge.cpp

HEADERS  += mainwindow.h \
            WebkitApi.h \
            qplaydarclient/include/qplaydar.h \
            qplaydarclient/include/qplaydar/client.h \
            qplaydarclient/include/qplaydar/query.h \
            qplaydarclient/include/qplaydar/result.h \
            player/playengine.h \
    spoon/SpoonCore.h \
    spoon/JavaBridge.h



LIBS += -L/usr/local/lib -lqjson -framework JavaVM

INCLUDEPATH += qplaydarclient/include /Library/Java/Home/include

#CONFIG += static warn_off # for static qt

#windows:LIBS += -lws2_32 # explicitly link to winsock (not sure why this is needed)
