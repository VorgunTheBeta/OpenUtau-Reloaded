QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
VERSION = 0.0.1
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
DEFINES += APP_VERSION=\\\"$$VERSION\\\"

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    versionwindow.cpp

HEADERS += \
    mainwindow.h \
    versionwindow.h

FORMS += \
    mainwindow.ui \
    versionwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

OTHER_FILES += \
    readme.txt

DISTFILES += \
    ../../Kyle/Pictures/Vocaloid and Utau/Utau_logo_large.png \
    ../../Kyle/Pictures/Vocaloid and Utau/Utau_logo_large.png


