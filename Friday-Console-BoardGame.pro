TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    robinson_card.cpp \
    hazard_card.cpp \
    card.cpp \
    hazard_robinson_card.cpp \
    friday.cpp

HEADERS += \
    robinson_card.h \
    hazard_card.h \
    card.h \
    hazard_robinson_card.h \
    friday.h

