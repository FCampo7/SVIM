QT       += core gui openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

win32: LIBS += -L$$PWD -lopengl32

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
	mainwindow.cpp \
	clases/detectordeestructuras.cpp \
	clases/filtrocolor.cpp \
	clases/formatomif.cpp \
	clases/graficador.cpp \
	clases/imagen.cpp \
	clases/metadato.cpp \
	clases/pixel.cpp \
	clases/sistema.cpp

HEADERS += \
    mainwindow.h \
	clases/archivo.cpp \
	clases/detectordeestructuras.h \
	clases/filtrocolor.h \
	clases/formatomif.h \
	clases/graficador.h \
	clases/imagen.h \
	clases/metadato.h \
	clases/pixel.h \
	clases/procesador.cpp \
	clases/sistema.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
