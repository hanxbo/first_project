TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

CONFIG += C++11
LIBS +=  /usr/local/lib/libgtest.a
LIBS +=  /usr/local/lib/libgtest_main.a
LIBS += -pthread

SOURCES += main.cpp

