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

// Установка свойст объекта
void Student::setFullName(QString selectedName) {
    this->fullName = selectedName;
}

void Student::setGroup(QString selectedAddress) {
    this->group = selectedAddress;
}

void Student::setCourse(QString selectedOpeningDate) {
    this->course = selectedOpeningDate;
}

void Student::setFaculty(QString selectedArtisticDirection) {
    this->faculty = selectedArtisticDirection;
}

// Считывание свойств объекта

const QString & Student::getFullName() {
    return this->fullName;
}


const QString & Student::getGroup() {
    return this->group;
}

const QString & Student::getCourse() {
    return this->course;
}

const QString & Student::getFaculty() {
    return this->faculty;
}

//Копирование объекта при помощи swap
void swap(Student &firstRecord, Student &secondRecord) noexcept {
    std::swap(firstRecord.fullName, secondRecord.fullName);
    std::swap(firstRecord.group, secondRecord.group);
    std::swap(firstRecord.course, secondRecord.course);
    std::swap(firstRecord.faculty, secondRecord.faculty);

}
