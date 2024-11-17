#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;

    QIcon icon(":/images/icons/main_icon.png");
    app.setWindowIcon(icon);

    window.show();
    return app.exec();
}
