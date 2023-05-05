QT       += core gui sql printsupport network charts serialport axcontainer


#INCLUDEPATH += "C:\Users\BOUZIDI MALEK\Desktop\projet\qrcodegen.hpp"




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

# Include QtSMTP library

#LIBS += -lesmtp



SOURCES += \
    arduino.cpp \
    doorlock.cpp \
    qrcodegen.cpp\
    chat.cpp \
    chatserver.cpp \
    compte.cpp \
    connexion.cpp \
    emp.cpp \
    menu.cpp\
    equi.cpp\
    equipement.cpp\
    employe.cpp \
    global.cpp \
    main.cpp \
    mainwindow.cpp \
    mdp_oublie.cpp \
    resutat.cpp \
    vehicule.cpp \
    vehicule2.cpp \
    controle.cpp \
    client.cpp \
    client_b.cpp \
    histo.cpp \
    graph.cpp \
    facture.cpp \
    rendv.cpp \
    rendezvous.cpp \
    excel.cpp


HEADERS += \
    arduino.h \
    doorlock.h \
    qrcodegen.hpp\
    chat.h \
    chatserver.h \
    compte.h \
    connexion.h \
    emp.h \
    equi.h\
    equipement.h\
    employe.h \
    global.h \
    mainwindow.h \
    mdp_oublie.h \
    menu.h \
    resutat.h \
    vehicule.h \
    vehicule2.h \
    controle.h \
    client.h \
    client_b.h \
    histo.h \
    graph.h \
    facture.h \
    rendv.h \
    rendezvous.h \
    excel.h


FORMS += \
    chat.ui \
    compte.ui \
    connexion.ui \
    doorlock.ui \
    emp.ui \
    mainwindow.ui \
    equi.ui\
    mdp_oublie.ui \
    menu.ui \
    resutat.ui \
    vehicule.ui \
    controle.ui \
    client.ui \
    histo.ui \
    graph.ui \
    facture.ui \
    rendv.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    style.qrc

DISTFILES +=
