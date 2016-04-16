TEMPLATE = app

QT += qml quick core
CONFIG += c++11

SOURCES += main.cpp \
    Person.cpp \
    chineseletterhelper.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    Person.h \
    chineseletterhelper.h

