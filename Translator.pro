#-------------------------------------------------
#
# Project created by QtCreator 2013-10-05T15:03:24
#
#-------------------------------------------------

#GUI ---------------------
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Translator
TEMPLATE = app
#GUI--------------

SOURCES += main.cpp \
    UI/translatorwindow.cpp \      #GUI----------
    Translator/translator.cpp \
    Translator/dictionary.cpp \
    DataStructs/avl_tree.cpp

HEADERS  += \
    UI/translatorwindow.h \        #GUI----------
    Translator/translator.h \
    Translator/dictionary.h \
    DataStructs/avl_tree.h

FORMS    += \
    UI/translatorwindow.ui         #GUI----------
