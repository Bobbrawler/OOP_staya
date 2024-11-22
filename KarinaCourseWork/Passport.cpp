#include "Passport.h"
#include <QtAlgorithms>

// Конструктор по умолчанию
Passport::Passport() {}

// Конструктор
Passport::Passport(QString fullName, QString number, QString issueDate, QString birthDate) {
    this->fullName = fullName;
    this->number = number;
    this->issueDate = issueDate;
    this->birthDate = birthDate;
}

// Конструктор копирования
Passport::Passport(const Passport &selectedRecord) {
    this->fullName = selectedRecord.fullName;
    this->number = selectedRecord.number;
    this->issueDate = selectedRecord.issueDate;
    this->birthDate = selectedRecord.birthDate;
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
    this->issueDate = std::move(selectedRecord.issueDate);
    this->birthDate = std::move(selectedRecord.birthDate);
    selectedRecord.fullName = "";
    selectedRecord.number = "";
    selectedRecord.issueDate = "";
    selectedRecord.birthDate = "";
}

// Оператор перемещения
Passport & Passport::operator=(Passport &&selectedRecord) noexcept {
    if (this != &selectedRecord) {
        swap(*this, selectedRecord);
        selectedRecord.fullName = "";
        selectedRecord.number = "";
        selectedRecord.issueDate = "";
        selectedRecord.birthDate = "";
    }
    return *this;
}

// Деструктор
Passport::~Passport() {
}


// Оператор приведения к типу bool
Passport::operator bool() {
    return !this->fullName.isEmpty() || !this->number.isEmpty() || !this->issueDate.isEmpty() || !this->birthDate.isEmpty();
}

// Установка свойст объекта
void Passport::setFullName(QString selectedName) {
    this->fullName = selectedName;
}

void Passport::setNumber(QString selectedAddress) {
    this->number = selectedAddress;
}

void Passport::setIssueDate(QString selectedOpeningDate) {
    this->issueDate = selectedOpeningDate;
}

void Passport::setBirthDate(QString selectedArtisticDirection) {
    this->birthDate = selectedArtisticDirection;
}

// Считывание свойств объекта

const QString & Passport::getFullName() {
    return this->fullName;
}


const QString & Passport::getNumber() {
    return this->number;
}

const QString & Passport::getIssueDate() {
    return this->issueDate;
}

const QString & Passport::getBirthDate() {
    return this->birthDate;
}

//Копирование объекта при помощи swap
void swap(Passport &firstRecord, Passport &secondRecord) noexcept {
    std::swap(firstRecord.fullName, secondRecord.fullName);
    std::swap(firstRecord.number, secondRecord.number);
    std::swap(firstRecord.issueDate, secondRecord.issueDate);
    std::swap(firstRecord.birthDate, secondRecord.birthDate);

}
