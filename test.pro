QT       += core gui \
    quick

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
    connexionform.cpp \
    dao/daopointcollecte.cpp \
    dao/daoproducteur.cpp \
    dao/daoresponsablepc.cpp \
    dao/testdao.cpp \
    inscription.cpp \
    main.cpp \
    mainwindow.cpp \
    opener.cpp \
    pc/attentevalidation.cpp \
    pc/pointdecollecte.cpp \
    pc/testpointdecollecte.cpp \
    pc/valide.cpp \
    pc/venteencours.cpp \
    pc/ventetermine.cpp \
    utilisateur/producteur.cpp \
    utilisateur/responsablepc.cpp \
    utilisateur/testproducteur.cpp \
    utilisateur/testresponsablepc.cpp \
    utilisateur/testutilisateur.cpp \
    utilisateur/utilisateur.cpp

HEADERS += \
    connexionform.h \
    dao/dao.h \
    dao/daopointcollecte.h \
    dao/daoproducteur.h \
    dao/daoresponsablepc.h \
    dao/testdao.h \
    inscription.h \
    mainwindow.h \
    opener.h \
    pc/attentevalidation.h \
    pc/etatpointdecollecte.h \
    pc/pointdecollecte.h \
    pc/testpointdecollecte.h \
    pc/valide.h \
    pc/venteencours.h \
    pc/ventetermine.h \
    utilisateur/producteur.h \
    utilisateur/responsablepc.h \
    utilisateur/testproducteur.h \
    utilisateur/testresponsablepc.h \
    utilisateur/testutilisateur.h \
    utilisateur/utilisateur.h

FORMS += \
    connexionform.ui \
    inscription.ui \
    mainwindow.ui \
    opener.ui

TRANSLATIONS += \
    test_fr_FR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
