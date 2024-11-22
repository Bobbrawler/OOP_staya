#ifndef PASSPORT_H
#define PASSPORT_H

#include <QString>
#include <QtAlgorithms>

class Passport {
 private:

    QString fullName = "";
    QString number = "";
    QString issueDate = "";
    QString birthDate = "";

 public:

    // Конструктор по умолчанию
    Passport();

    // Конструктор
    explicit Passport(QString fullName, QString address, QString openingDate, QString artisticDirection);

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

    // Установка имени
    void setFullName(QString nameValue);

    // Получение имени
    const QString &getFullName();

    // Установка адреса
    void setNumber(QString AddressValue);

    // Получение адреса
    const QString &getNumber();

    // Установка даты открытия
    void setIssueDate(QString openingDateValue);

    // Получение даты открытия
    const QString &getIssueDate();

    // Установка художественного руководства
    void setBirthDate(QString artisticDirectionValue);

    // Получение художественного руководства
    const QString &getBirthDate();

    friend void swap(Passport &firstRecord, Passport &secondRecord) noexcept;
};

#endif // PASSPORT_H
