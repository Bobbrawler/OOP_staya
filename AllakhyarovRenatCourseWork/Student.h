#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QtAlgorithms>

class Student {
 private:

    QString fullName = "";
    QString group = "";
    QString course = "";
    QString faculty = "";

 public:

    // Конструктор по умолчанию
    Student();

    // Конструктор
    explicit Student(QString fullName, QString group, QString course, QString faculty);

    // Конструктор копирования
    Student(const Student &selectedRecord);

    // Оператор копирования
    Student &operator=(const Student &selectedRecord);

    // Конструктор перемещения
    Student(Student &&selectedRecord) noexcept;

    // Оператор перемещения
    Student &operator=(Student &&selectedRecord) noexcept;

    // Деструктор
    virtual ~Student();

    // Оператор получения элемента по индексу I
    QString &operator[](int index);

    // Очистка массива
    void clear();

    // Оператор приведения к типу bool
    explicit operator bool();

    // Установка свойств объекта
    void setFullName(QString nameValue);
    void setGroup(QString AddressValue);
    void setCourse(QString openingDateValue);
    void setFaculty(QString artisticDirectionValue);

    // Получение свойств объекта
    const QString &getFullName();
    const QString &getGroup();
    const QString &getCourse();
    const QString &getFaculty();

    friend void swap(Student &firstRecord, Student &secondRecord) noexcept;
};

#endif // STUDENT_H
