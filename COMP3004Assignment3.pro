QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    button.cpp \
    display.cpp \
    doorclosebutton.cpp \
    dooropenbutton.cpp \
    doorsensor.cpp \
    elevator.cpp \
    elevatorcontrolsystem.cpp \
    floor.cpp \
    floorbutton.cpp \
    floorsensor.cpp \
    helpbutton.cpp \
    main.cpp \
    mainwindow.cpp \
    overloadsensor.cpp \
    phone.cpp \
    speaker.cpp

HEADERS += \
    button.h \
    display.h \
    doorclosebutton.h \
    dooropenbutton.h \
    doorsensor.h \
    elevator.h \
    elevatorcontrolsystem.h \
    floor.h \
    floorbutton.h \
    floorsensor.h \
    helpbutton.h \
    mainwindow.h \
    overloadsensor.h \
    phone.h \
    resources.h \
    speaker.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
