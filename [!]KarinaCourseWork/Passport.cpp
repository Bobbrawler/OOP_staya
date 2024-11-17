#include "Passport.h"
#include <QtAlgorithms>

// Конструктор по умолчанию
Passport::Passport() {}

// Конструктор
Passport::Passport(QString fullName, QString number, QString dateIssue, QString dateBirth) {
    this->fullName = fullName;
    this->number = number;
    this->dateIssue = dateIssue;
    this->dateBirth = dateBirth;
}

// Конструктор копирования
Passport::Passport(const Passport &selectedRecord) {
    this->fullName = selectedRecord.fullName;
    this->number = selectedRecord.number;
    this->dateIssue = selectedRecord.dateIssue;
    this->dateBirth = selectedRecord.dateBirth;
}

// Оператор копирования
Passport & Passport::operator=(const Passport &selectedRecord) {
    Passport tempRecord(selectedRecord);
    swap(*this, tempRecord);
    return *this;
}

// Конструктор перемещения
Passport::Passport(Passport &&selectedRecord) noexcept {
    this->fullName = std::move(selectedRecord.fullName);
    this->number = std::move(selectedRecord.number);
    this->dateIssue = std::move(selectedRecord.dateIssue);
    this->dateBirth = std::move(selectedRecord.dateBirth);
    selectedRecord.fullName = "";
    selectedRecord.number = "";
    selectedRecord.dateIssue = "";
    selectedRecord.dateBirth = "";
}

// Оператор перемещения
Passport & Passport::operator=(Passport &&selectedRecord) noexcept {
    if (this != &selectedRecord) {
        swap(*this, selectedRecord);
        selectedRecord.fullName = "";
        selectedRecord.number = "";
        selectedRecord.dateIssue = "";
        selectedRecord.dateBirth = "";
    }
    return *this;
}

// Деструктор
Passport::~Passport() {
}


// Оператор приведения к типу bool
Passport::operator bool() {
    return !this->fullName.isEmpty() || !this->number.isEmpty() || !this->dateIssue.isEmpty() || !this->dateBirth.isEmpty();
}

// Установка имени
void Passport::setFullName(QString selectedfullName) {
    this->fullName = selectedfullName;
}

// Получение имени
const QString & Passport::getFullName() {
    return this->fullName;
}

// Установка адреса
void Passport::setNumber(QString selectednumber) {
    this->number = selectednumber;
}

// Получение адреса
const QString & Passport::getNumber() {
    return this->number;
}

// Установка даты выхода
void Passport::setDateIssue(QString selecteddateIssue) {
    this->dateIssue = selecteddateIssue;
}

// Получение даты выхода
const QString & Passport::getDateIssue() {
    return this->dateIssue;
}

// Установка художественного руководства
void Passport::setDateBirth(QString selecteddateBirth) {
    this->dateBirth = selecteddateBirth;
}

// Получение художественного руководства
const QString & Passport::getDateBirth() {
    return this->dateBirth;
}

void swap(Passport &firstRecord, Passport &secondRecord) noexcept {
    std::swap(firstRecord.fullName, secondRecord.fullName);
    std::swap(firstRecord.number, secondRecord.number);
    std::swap(firstRecord.dateIssue, secondRecord.dateIssue);
    std::swap(firstRecord.dateBirth, secondRecord.dateBirth);

}
