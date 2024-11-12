#include "mainwindow.h"
#include <QApplication>
#include <QPalette>  // Подключаем этот заголовок для работы с палитрой

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QIcon icon(":/images/icons/main_icon.png"); // путь к иконке в ресурсах
    a.setWindowIcon(icon);

    // Установка светло-голубого цвета фона
    QPalette palette = w.palette(); // Получаем текущую палитру окна
    palette.setColor(QPalette::Window, QColor(173, 216, 230)); // Устанавливаем светло-голубой цвет (лунный свет)
    w.setPalette(palette); // Применяем палитру к окну
    w.setAutoFillBackground(true); // Включаем автоматическую заливку фона с использованием палитры

    w.show();
    return a.exec();
}
