QT       += core sql charts gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    connection.cpp \
    controle.cpp \
    emp.cpp \
    equi.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    rendv.cpp \
    resutat.cpp \
    vehicule.cpp \
    vehicule2.cpp

HEADERS += \
    client.h \
    connection.h \
    controle.h \
    emp.h \
    equi.h \
    mainwindow.h \
    menu.h \
    rendv.h \
    resutat.h \
    vehicule.h \
    vehicule2.h

FORMS += \
    client.ui \
    controle.ui \
    emp.ui \
    equi.ui \
    mainwindow.ui \
    menu.ui \
    rendv.ui \
    resutat.ui \
    vehicule.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    style.qrc

DISTFILES +=
