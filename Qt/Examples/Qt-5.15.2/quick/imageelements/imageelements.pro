TEMPLATE = app

QT += quick qml
SOURCES += main.cpp
RESOURCES += \
    imageelements.qrc \
    ../shared/shared.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/quick/imageelements
INSTALLS += target
