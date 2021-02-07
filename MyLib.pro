QT += gui widgets

TEMPLATE = lib
DEFINES += MYLIB_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += C:\Users\User\Documents\LibReader
LIBS += C:\Users\User\Documents\build-LibReader-Desktop_Qt_5_15_2_MinGW_64_bit-Debug\debug\LibReader.dll

SOURCES += \
    mylib.cpp \
    pluginclass.cpp \
    pluginfactory.cpp

HEADERS += \
    MyLib_global.h \
    mylib.h \
    pluginclass.h \
    pluginfactory.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
