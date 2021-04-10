#-------------------------------------------------
#
# Project created by QtCreator 2020-03-25T22:45:55
#
#-------------------------------------------------

QT       += core gui sql printsupport charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    connexion.cpp \
    fid.cpp \
    lieu.cpp \
    main.cpp \
    mainwindow.cpp \


HEADERS += \
    connexion.h \
    fid.h \
    lieu.h \
    mainwindow.h \


FORMS += \
    mainwindow.ui \
    fid.ui

RC_ICONS = logo.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    test.pro \
RESOURCES += \
    rsc.qrc \

DISTFILES += \
    RSC/69728218-azulejo-de-textura-azul-papel-tapiz-patrón-floral-.jpg \
    RSC/blue-honeycomb-abstract-background-wallpaper-and-texture-concept-minimal-theme-vector.jpg \
    RSC/body-bg.jpg \
    RSC/mac_computer_stats_statistics-512.png \

RESOURCES += \
    rsc.qrc
