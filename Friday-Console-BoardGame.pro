TEMPLATE = app
CONFIG += console c++0x
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    robinson_card.cpp \
    hazard_card.cpp \
    card.cpp \
    hazard_robinson_card.cpp \
    friday.cpp \
    input.cpp \
    output.cpp

HEADERS += \
    robinson_card.h \
    hazard_card.h \
    card.h \
    hazard_robinson_card.h \
    friday.h \
    locale_eng.h \
    input.h \
    output.h

