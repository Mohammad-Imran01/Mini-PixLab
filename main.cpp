#include "mainwindow.h"
#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // // Get the screen's available geometry (excluding taskbar)
    // QScreen *screen = QGuiApplication::primaryScreen();
    // if (screen) {
    //     QRect screenGeometry = screen->availableGeometry(); // This excludes the taskbar and other system elements

    //     // Resize and move the window to fit within the available screen space
    //     w.resize(screenGeometry.size());
    //     w.move(screenGeometry.topLeft());
    // }

    // Show the main window
    w.show();

    return a.exec();
}
