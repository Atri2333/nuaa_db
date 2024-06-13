QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    coursea.cpp \
    courseq.cpp \
    global.cpp \
    main.cpp \
    mainwidget.cpp \
    sca.cpp \
    studenta.cpp \
    studentm.cpp \
    studentq.cpp \
    widget.cpp

HEADERS += \
    coursea.h \
    courseq.h \
    global.h \
    mainwidget.h \
    sca.h \
    studenta.h \
    studentm.h \
    studentq.h \
    widget.h

FORMS += \
    coursea.ui \
    courseq.ui \
    mainwidget.ui \
    sca.ui \
    studenta.ui \
    studentm.ui \
    studentq.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
