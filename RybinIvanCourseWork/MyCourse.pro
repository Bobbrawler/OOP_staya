QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyCourse
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++14

SOURCES += \
        MainWindow.cpp \
        RedactorRecordWindow.cpp \
        ShowAllRecordsCode.cpp \
        Theater.cpp \
        main.cpp

HEADERS += \
        MainWindow.h \
        RedactorRecordWindow.h \
        ShowAllRecordsCode.h \
        TextMessageDictionary.h \
        Theater.h \
        Vector.h

FORMS += \
        MainWindow.ui \
        RedactorRecordWindow.ui \
        ShowAllRecordsCode.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
