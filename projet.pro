QT       += core gui sql printsupport network charts

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
    mdp_oublie.cpp

HEADERS += \
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
    menu.h

FORMS += \
    chat.ui \
    compte.ui \
    connexion.ui \
    emp.ui \
    mainwindow.ui \
    equi.ui\
    mdp_oublie.ui \
    menu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    style.qrc

DISTFILES +=
