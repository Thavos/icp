# Makefile for ICP robot simulation
# xhruzs00

TEMPLATE = app
TARGET = icp
INCLUDEPATH += .
CONFIG += c++17
QT += gui widgets
DEFINES += QT_DEPRECATED_WARNINGS

# Input
HEADERS += src/controller/SimulationController.h \
            src/model/Map.h \
            src/model/Obstacle.h \
            src/model/Robot.h \
            src/observer/Observable.h \
            src/observer/Observer.h \
            src/view/MapView.h \
            src/view/main_window.h \
            src/view/simulation_dialog.h \
            src/view/editor_dialog.h

SOURCES += src/controller/SimulationController.cpp \
            src/model/Map.cpp \
            src/model/Obstacle.cpp \
            src/model/Robot.cpp \
            src/view/MapView.cpp \
            src/main.cpp \
            src/view/main_window.cpp \
            src/view/simulation_dialog.cpp \
            src/view/editor_dialog.cpp

# Custom commands
QMAKE_CLEAN += -rf ./latex & rm -rf ./html

run.target = run
run.commands = build/$${TARGET}
QMAKE_EXTRA_TARGETS += run

doxygen.target = doxygen
doxygen.commands = doxygen doc/Doxyfile
QMAKE_EXTRA_TARGETS += doxygen

pack.target = pack
pack.commands = zip -r xhruzs00-xhruzs00.zip doc/ resources/ src/ Makefile README.txt
QMAKE_EXTRA_TARGETS += pack

# Custom buildpath
DESTDIR = build/
OBJECTS_DIR = build/obj
MOC_DIR = build/moc
RCC_DIR = build/rcc
UI_DIR = build/ui