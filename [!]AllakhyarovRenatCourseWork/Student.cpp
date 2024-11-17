#include "Student.h"
#include <QtAlgorithms>

// Конструктор по умолчанию
Student::Student() {}

// Конструктор
Student::Student(QString fullName, QString group, QString course, QString faculty) {
    this->fullName = fullName;
    this->group = group;
    this->course = course;
    this->faculty = faculty;
}

// Конструктор копирования
Student::Student(const Student &selectedRecord) {
    this->fullName = selectedRecord.fullName;
    this->group = selectedRecord.group;
    this->course = selectedRecord.course;
    this->faculty = selectedRecord.faculty;
}

// Оператор копирования
Student & Student::operator=(const Student &selectedRecord) {
    Student tempRecord(selectedRecord);
    swap(*this, tempRecord);
    return *this;
}

// Конструктор перемещения
Student::Student(Student &&selectedRecord) noexcept {
    this->fullName = std::move(selectedRecord.fullName);
    this->group = std::move(selectedRecord.group);
    this->course = std::move(selectedRecord.course);
    this->faculty = std::move(selectedRecord.faculty);
    selectedRecord.fullName = "";
    selectedRecord.group = "";
    selectedRecord.course = "";
    selectedRecord.faculty = "";
}

// Оператор перемещения
Student & Student::operator=(Student &&selectedRecord) noexcept {
    if (this != &selectedRecord) {
        swap(*this, selectedRecord);
        selectedRecord.fullName = "";
        selectedRecord.group = "";
        selectedRecord.course = "";
        selectedRecord.faculty = "";
    }
    return *this;
}

// Деструктор
Student::~Student() {
}


// Оператор приведения к типу bool
Student::operator bool() {
    return !this->fullName.isEmpty() || !this->group.isEmpty() || !this->course.isEmpty() || !this->faculty.isEmpty();
}

// Установка ФИО
void Student::setFullName(QString selectedValue) {
    this->fullName = selectedValue;
}

// Получение ФИО
const QString & Student::getFullName() {
    return this->fullName;
}

// Установка группы
void Student::setGroup(QString selectedValue) {
    this->group = selectedValue;
}

// Получение группы
const QString & Student::getGroup() {
    return this->group;
}

// Установка курса
void Student::setCourse(QString selectedValue) {
    this->course = selectedValue;
}

// Получение курса
const QString & Student::getCourse() {
    return this->course;
}

// Установка факультета
void Student::setFaculty(QString selectedValue) {
    this->faculty = selectedValue;
}

// Получение факультета
const QString & Student::getFaculty() {
    return this->faculty;
}

void swap(Student &firstRecord, Student &secondRecord) noexcept {
    std::swap(firstRecord.fullName, secondRecord.fullName);
    std::swap(firstRecord.group, secondRecord.group);
    std::swap(firstRecord.course, secondRecord.course);
    std::swap(firstRecord.faculty, secondRecord.faculty);

}
