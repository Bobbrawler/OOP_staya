#include "MainWindow.h"
#include <QApplication>
#include <QPalette>  // Подключаем этот заголовок для работы с палитрой

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QIcon icon(":/images/icons/main_icon.png"); // путь к иконке в ресурсах
    a.setWindowIcon(icon);
    w.show();
    return a.exec();
}
