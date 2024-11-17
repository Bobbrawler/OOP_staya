#ifndef PASSPORT_H
#define PASSPORT_H

#include <QString>
#include <QtAlgorithms>

class Passport {
 private:

    // Имя
    QString fullName = "";
    // Адрес
    QString number = "";
    // Дата открытия
    QString dateIssue = "";
    // Художественное руководство
    QString dateBirth = "";

 public:

    // Конструктор по умолчанию
    Passport();

    // Конструктор
    explicit Passport(QString fullName, QString number, QString dateIssue, QString dateBirth);

    // Конструктор копирования
    Passport(const Passport &selectedRecord);

    // Оператор копирования
    Passport &operator=(const Passport &selectedRecord);

    // Конструктор перемещения
    Passport(Passport &&selectedRecord) noexcept;

    // Оператор перемещения
    Passport &operator=(Passport &&selectedRecord) noexcept;

    // Деструктор
    virtual ~Passport();

    // Оператор получения элемента по индексу I
    QString &operator[](int index);

    // Очистка массива
    void clear();

    // Оператор приведения к типу bool
    explicit operator bool();

    // Установка ФИО
    void setFullName(QString value);

    // Получение ФИО
    const QString &getFullName();

    // Установка номера
    void setNumber(QString value);

    // Получение номера
    const QString &getNumber();

    // Установка даты выдачи
    void setDateIssue(QString value);

    // Получение даты выдачи
    const QString &getDateIssue();

    // Установка даты рождения
    void setDateBirth(QString value);

    // Получение даты рождения
    const QString &getDateBirth();

    friend void swap(Passport &firstRecord, Passport &secondRecord) noexcept;
};

#endif // PASSPORT_H
