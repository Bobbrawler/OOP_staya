#ifndef THEATER_H
#define THEATER_H

#include <QString>
#include <QtAlgorithms>

class Theater {
 private:

    QString name = "";
    QString address = "";
    QString openingDate = "";
    QString artisticDirection = "";

 public:

    // Конструктор по умолчанию
    Theater();

    // Конструктор
    explicit Theater(QString name, QString address, QString openingDate, QString artisticDirection);

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
    void setAddress(QString AddressValue);

    // Получение адреса
    const QString &getAddress();

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
