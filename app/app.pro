TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    append_line.cpp \
    load.cpp \
    m.cpp \
    mnwbf.cpp \
    process_forward.cpp \
    remove_all.cpp \
    rp.cpp \
    save.cpp \
    show.cpp \
    showlenght.cpp

HEADERS += \
        text.h \
        _text.h \
        common.h

QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
