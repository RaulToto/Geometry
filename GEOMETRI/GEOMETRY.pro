QT += core
QT -= gui

CONFIG += c++11

TARGET = GEOMETRY
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    point.cpp \
    pointarray.cpp \
    vectorarray.cpp

HEADERS += \
    point.h \
    pointarray.h \
    vectorarray.h
