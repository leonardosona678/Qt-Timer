#include <iostream>

#include <QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow window;
    window.setWindowTitle("App Timer");
    window.resize(300, 150);
    window.show();

    return app.exec();
}
