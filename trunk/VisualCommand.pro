# -------------------------------------------------
# Project created by QtCreator 2009-06-11T15:31:16
# -------------------------------------------------
include(./src/qtpropertybrowser.pri)
QT += network \
    xml \
    xmlpatterns
TARGET = VisualCommand
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    dialogsearch.cpp \
    dialogupload.cpp \
    arguments/argtab.cpp \
    arguments/checkBoxEditor.cpp \
    arguments/argbase.cpp \
    arguments/numericEditor.cpp \
    arguments/stringEditor.cpp \
    arguments/argstring.cpp \
    arguments/argnumericform.cpp \
    arguments/argformbase.cpp \
    arguments/argfileform.cpp \
    dialogsettings.cpp \
    dialogabout.cpp
HEADERS += mainwindow.h \
    dialogsearch.h \
    dialogupload.h \
    globals.h \
    arguments/checkBoxEditor.h \
    arguments/numericEditor.h \
    arguments/stringEditor.h \
    arguments/argumentinterface.h \
    arguments/argbase.h \
    arguments/argtab.h \
    arguments/argstring.h \
    arguments/argnumericform.h \
    arguments/argforminterface.h \
    arguments/argformbase.h \
    arguments/argfileform.h \
    dialogsettings.h \
    dialogabout.h
FORMS += mainwindow.ui \
    dialogsearch.ui \
    dialogupload.ui \
    arguments/argbase.ui \
    arguments/argnumericform.ui \
    arguments/argfileform.ui \
    dialogsettings.ui \
    dialogabout.ui
RESOURCES += Images.qrc
CONFIG += static
