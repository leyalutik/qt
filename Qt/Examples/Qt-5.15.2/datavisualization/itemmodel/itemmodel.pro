android|ios|winrt {
    error( "This example is not supported for android, ios, or winrt." )
}

!include( ../examples.pri ) {
    error( "Couldn't find the examples.pri file!" )
}

SOURCES += main.cpp

QT += widgets
requires(qtConfig(tablewidget))

OTHER_FILES += doc/src/* \
               doc/images/*
