TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

CONFIG += C++11
LIBS +=  /usr/local/lib/libgtest.a
LIBS +=  /usr/local/lib/libgtest_main.a
LIBS += -pthread
LIBS += -L /usr/local/lib -lprotobuf

SOURCES += main.cpp \
    sample.cpp \
    send.cpp \
    packageName.MessageName.pb.cc

HEADERS += \
    includes.h \
    packageName.MessageName.pb.h

