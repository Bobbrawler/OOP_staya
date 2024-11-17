#ifndef THEATER_H
#define THEATER_H

#include <QString>
#include <QtAlgorithms>

class Theater {
 private:

    // Имя
    QString name = "";
    // Адрес
    QString adress = "";
    // Дата открытия
    QString openingDate = "";
    // Художественное руководство
    QString artisticDirection = "";

 public:

    // Конструктор по умолчанию
    Theater();

    // Конструктор
    explicit Theater(QString name, QString adress, QString openingDate, QString artisticDirection);

    // Конструктор копирования
    Theater(const Theater &selectedRecord);

    // Оператор копирования
    Theater &operator=(const Theater &selectedRecord);

    // Конструктор перемещения
    Theater(Theater &&selectedRecord) noexcept;

    // Оператор перемещения
    Theater &operator=(Theater &&selectedRecord) noexcept;

    // Деструктор
    virtual ~Theater();

    // Оператор получения элемента по индексу I
    QString &operator[](int index);

    // Очистка массива
    void clear();

    // Оператор приведения к типу bool
    explicit operator bool();

    // Установка имени
    void setName(QString nameValue);

    // Получение имени
    const QString &getName();

    // Установка адреса
    void setAdress(QString adressValue);

    // Получение адреса
    const QString &getAdress();

    // Установка даты открытия
    void setOpeningDate(QString openingDateValue);

    // Получение даты открытия
    const QString &getOpeningDate();

    // Установка художественного руководства
    void setArtisticDirection(QString artisticDirectionValue);

    // Получение художественного руководства
    const QString &getArtisticDirection();

    friend void swap(Theater &firstRecord, Theater &secondRecord) noexcept;
};

#endif // THEATER_H
