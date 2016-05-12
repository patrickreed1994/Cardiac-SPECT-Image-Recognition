HEADERS += neural.h
SOURCES += heart.cpp
SOURCES += neural.cpp

target.path = heart
sources.files= $$SOURCES $$HEADERS heart.pro
sources.path = .
INSTALLS += target sources
