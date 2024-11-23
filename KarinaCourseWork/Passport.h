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
    explicit Passport(QString fullName, QString number, QString issueDate, QString birthDate);

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

    // Установка свойств объекта
    void setFullName(QString nameValue);
    void setNumber(QString AddressValue);
    void setIssueDate(QString openingDateValue);
    void setBirthDate(QString artisticDirectionValue);

    // Получение свойств объекта
    const QString &getFullName();
    const QString &getNumber();
    const QString &getIssueDate();
    const QString &getBirthDate();

    friend void swap(Passport &firstRecord, Passport &secondRecord) noexcept;
};

#endif // PASSPORT_H
