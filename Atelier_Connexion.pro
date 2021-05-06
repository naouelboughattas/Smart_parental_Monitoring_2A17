#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------
#accés base de donnés
QT +=  sql
CONFIG += console
#son
QT += core gui multimedia
#mailll

QT       += core network
TARGET = SMTPEmail
#pdf
QT += core gui sql axcontainer printsupport
#arduino
QT += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TRANSLATIONS += QtLanguage_ru.ts
TARGET = Atelier_Connexion
TEMPLATE = app
DEFINES += SMTP_BUILD
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++14

QMAKE_LFLAGS += -static
QMAKE_LFLAGS += -static-libgcc
QMAKE_LFLAGS += -static-libstdc++

SOURCES += \
    arduino.cpp \
    chambres.cpp \
    emailaddress.cpp \
    etages.cpp \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    mimeattachment.cpp \
    mimecontentformatter.cpp \
    mimefile.cpp \
    mimehtml.cpp \
    mimeinlinefile.cpp \
    mimemessage.cpp \
    mimemultipart.cpp \
    mimepart.cpp \
    mimetext.cpp \
    quotedprintable.cpp \
    smtpclient.cpp


HEADERS += \
    arduino.h \
    chambres.h \
    emailaddress.h \
    etages.h \
        mainwindow.h \
    connection.h \
    mimeattachment.h \
    mimecontentformatter.h \
    mimefile.h \
    mimehtml.h \
    mimeinlinefile.h \
    mimemessage.h \
    mimemultipart.h \
    mimepart.h \
    mimetext.h \
    quotedprintable.h \
    smtpclient.h \
    smtpexports.h

FORMS += \
        mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    traduction.qrc

