#-------------------------------------------------
#
# Project created by QtCreator 2013-10-28T18:50:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Translator
TEMPLATE = app


SOURCES += main.cpp\
    DataStructs/nodo.cpp \
    DataStructs/c_list.cpp \
    DataStructs/avl_tree.cpp \
    Translator/translator.cpp \
    Translator/dictionary.cpp \
    UI/translatorwindow.cpp \
    Translator/LevenshteinDistance.cpp

HEADERS += \
    DataStructs/nodo.h \
    DataStructs/c_list.h \
    DataStructs/avl_tree.h \
    Translator/translator.h \
    Translator/LevenshteinDistance.h \
    Translator/dictionary.h \
    UI/translatorwindow.h \
    Translator/WeightedWord.h

FORMS += \
    UI/translatorwindow.ui
