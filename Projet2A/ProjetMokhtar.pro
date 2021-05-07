QT       += core gui sql printsupport charts network multimedia serialport

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
    arduino.cpp \
    chambres.cpp \
    connection.cpp \
    devoir.cpp \
    dialog.cpp \
    enfant.cpp \
    etages.cpp \
    etat.cpp \
    fid.cpp \
    interetat.cpp \
    interface_chambres.cpp \
    interface_devoir.cpp \
    interface_utilisateur.cpp \
    lieu.cpp \
    mail/emailaddress.cpp \
    mail/mimeattachment.cpp \
    mail/mimecontentformatter.cpp \
    mail/mimefile.cpp \
    mail/mimehtml.cpp \
    mail/mimeinlinefile.cpp \
    mail/mimemessage.cpp \
    mail/mimemultipart.cpp \
    mail/mimepart.cpp \
    mail/mimetext.cpp \
    mail/quotedprintable.cpp \
    mail/smtp.cpp \
    mail/smtpclient.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    modes.cpp \
    modesinter.cpp \
    profil.cpp \
    tableprinter.cpp \
    utilisateur.cpp

HEADERS += \
    arduino.h \
    chambres.h \
    connection.h \
    devoir.h \
    dialog.h \
    enfant.h \
    etages.h \
    etat.h \
    fid.h \
    interetat.h \
    interface_chambres.h \
    interface_devoir.h \
    interface_utilisateur.h \
    lieu.h \
    mail/SmtpMime \
    mail/emailaddress.h \
    mail/mimeattachment.h \
    mail/mimecontentformatter.h \
    mail/mimefile.h \
    mail/mimehtml.h \
    mail/mimeinlinefile.h \
    mail/mimemessage.h \
    mail/mimemultipart.h \
    mail/mimepart.h \
    mail/mimetext.h \
    mail/quotedprintable.h \
    mail/smtp.h \
    mail/smtpclient.h \
    mail/smtpexports.h \
    mainwindow.h \
    menu.h \
    modes.h \
    modesinter.h \
    profil.h \
    tableprinter.h \
    utilisateur.h

FORMS += \
    dialog.ui \
    fid.ui \
    interetat.ui \
    interface_chambres.ui \
    interface_devoir.ui \
    interface_utilisateur.ui \
    mainwindow.ui \
    menu.ui \
    modesinter.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rsc.qrc
