#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QIcon icon(":/images/icons/main_icon.png");
    a.setWindowIcon(icon);
    w.show();
    return a.exec();
}
