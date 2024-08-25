QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# TARGET = superpixels-segmentation-opencv
# TEMPLATE = app

INCLUDEPATH += C:/msys64/mingw32/include/ImageMagick-7
LIBS += -LC:/msys64/mingw32/bin \
    -llibMagick++-7.Q16HDRI-5 \
    -llibMagickCore-7.Q16HDRI-10 \
    -llibMagickWand-7.Q16HDRI-10

DEFINES += MAGICKCORE_HDRI_ENABLE


INCLUDEPATH += D:/Apps/opencv/open-cv-4.6.0-build/install/include
LIBS += -LD:/Apps/opencv/open-cv-4.6.0-build/install/x64/mingw/lib \
        -lopencv_core460 \
        -lopencv_imgcodecs460 \
        -lopencv_highgui460 \
        -lopencv_imgproc460 \
        -lopencv_photo460 \
        -lopencv_ximgproc460

SOURCES +=  main.cpp\
            mainwindow.cpp \
            mat-image-tools.cpp \

HEADERS  += mainwindow.h \
            mat-image-tools.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -std=c++11

RESOURCES += resources.qrc
