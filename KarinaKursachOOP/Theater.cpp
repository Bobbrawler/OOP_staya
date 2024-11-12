#include "Theater.h"
#include <QtAlgorithms>

// Конструктор по умолчанию
Theater::Theater() {}

// Конструктор
Theater::Theater(QString name, QString adress, QString openingDate, QString artisticDirection) {
    this->name = name;
    this->adress = adress;
    this->openingDate = openingDate;
    this->artisticDirection = artisticDirection;
}

// Конструктор копирования
Theater::Theater(const Theater &selectedRecord) {
    this->name = selectedRecord.name;
    this->adress = selectedRecord.adress;
    this->openingDate = selectedRecord.openingDate;
    this->artisticDirection = selectedRecord.artisticDirection;
}

// Оператор копирования
Theater & Theater::operator=(const Theater &selectedRecord) {
    Theater tempRecord(selectedRecord);
    swap(*this, tempRecord);
    return *this;
}

// Конструктор перемещения
Theater::Theater(Theater &&selectedRecord) noexcept {
    this->name = std::move(selectedRecord.name);
    this->adress = std::move(selectedRecord.adress);
    this->openingDate = std::move(selectedRecord.openingDate);
    this->artisticDirection = std::move(selectedRecord.artisticDirection);
    selectedRecord.name = "0";
    selectedRecord.adress = "0";
    selectedRecord.openingDate = "0";
    selectedRecord.artisticDirection = "0";
}

// Оператор перемещения
Theater & Theater::operator=(Theater &&selectedRecord) noexcept {
    if (this != &selectedRecord) {
        swap(*this, selectedRecord);
        selectedRecord.name = "";
        selectedRecord.adress = "";
        selectedRecord.openingDate = "";
        selectedRecord.artisticDirection = "";
    }
    return *this;
}

// Деструктор
Theater::~Theater() {
}


// Оператор приведения к типу bool
Theater::operator bool() {
    return !this->name.isEmpty() || !this->adress.isEmpty() || !this->openingDate.isEmpty() || !this->artisticDirection.isEmpty();
}

// Установка имени
void Theater::setName(QString selectedName) {
    this->name = selectedName;
}

// Получение имени
const QString & Theater::getName() {
    return this->name;
}

// Установка имени
void Theater::setAdress(QString selectedAdress) {
    this->adress = selectedAdress;
}

// Получение имени
const QString & Theater::getAdress() {
    return this->adress;
}

// Установка имени
void Theater::setOpeningDate(QString selectedOpeningDate) {
    this->openingDate = selectedOpeningDate;
}

// Получение имени
const QString & Theater::getOpeningDate() {
    return this->openingDate;
}

// Установка имени
void Theater::setArtisticDirection(QString selectedArtisticDirection) {
    this->artisticDirection = selectedArtisticDirection;
}

// Получение имени
const QString & Theater::getArtisticDirection() {
    return this->artisticDirection;
}

void swap(Theater &firstRecord, Theater &secondRecord) noexcept {
    std::swap(firstRecord.name, secondRecord.name);
    std::swap(firstRecord.adress, secondRecord.adress);
    std::swap(firstRecord.openingDate, secondRecord.openingDate);
    std::swap(firstRecord.artisticDirection, secondRecord.artisticDirection);

}
