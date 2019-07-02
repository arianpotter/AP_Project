#-------------------------------------------------
#
# Project created by QtCreator 2019-06-09T13:40:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AP_Project
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
        addnewapartment_ui.cpp \
        login.cpp \
        main.cpp \
        ap.cpp \
        main_ui.cpp \
        register_ui.cpp \
        showbuilding_widget.cpp

HEADERS += \
        addnewapartment_ui.h \
        ap.h \
        apartment.h \
        building.h \
        file.h \
        have_file.h \
        headers.h \
        login.h \
        main_ui.h \
        manager.h \
        north_villa.h \
        person.h \
        register_ui.h \
        rent_file.h \
        sale_file.h \
        showbuilding_widget.h \
        south_villa.h \
        user.h \
        villa.h
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    test.js

RESOURCES += \
    resource.qrc