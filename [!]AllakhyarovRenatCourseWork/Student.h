#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QtAlgorithms>

class Student {
private:

    // Имя
    QString fullName = "";
    // Тип
    QString group = "";
    // Тип
    QString course = "";
    // Комментарий к функции
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

    // Установка ФИО
    void setFullName(QString selectedValue);

    // Получение ФИО
    const QString &getFullName();

    // Установка группы
    void setGroup(QString selectedValue);

    // Получение группы
    const QString &getGroup();

    // Установка курса
    void setCourse(QString selectedValue);

    // Получение курса
    const QString &getCourse();

    // Установка факультета
    void setFaculty(QString selectedValue);

    // Получение факультета
    const QString &getFaculty();

    friend void swap(Student &firstRecord, Student &secondRecord) noexcept;
};

#endif // STUDENT_H
