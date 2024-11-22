#include "Theater.h"
#include <QtAlgorithms>

// Конструктор по умолчанию
Theater::Theater() {}

// Конструктор
Theater::Theater(QString name, QString address, QString openingDate, QString artisticDirection) {
    this->name = name;
    this->address = address;
    this->openingDate = openingDate;
    this->artisticDirection = artisticDirection;
}

// Конструктор копирования
Theater::Theater(const Theater &selectedRecord) {
    this->name = selectedRecord.name;
    this->address = selectedRecord.address;
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
    this->address = std::move(selectedRecord.address);
    this->openingDate = std::move(selectedRecord.openingDate);
    this->artisticDirection = std::move(selectedRecord.artisticDirection);
    selectedRecord.name = "";
    selectedRecord.address = "";
    selectedRecord.openingDate = "";
    selectedRecord.artisticDirection = "";
}

// Оператор перемещения
Theater & Theater::operator=(Theater &&selectedRecord) noexcept {
    if (this != &selectedRecord) {
        swap(*this, selectedRecord);
        selectedRecord.name = "";
        selectedRecord.address = "";
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
    return !this->name.isEmpty() || !this->address.isEmpty() || !this->openingDate.isEmpty() || !this->artisticDirection.isEmpty();
}

// Установка свойст объекта
void Theater::setName(QString selectedName) {
    this->name = selectedName;
}

void Theater::setAddress(QString selectedAddress) {
    this->address = selectedAddress;
}

void Theater::setOpeningDate(QString selectedOpeningDate) {
    this->openingDate = selectedOpeningDate;
}

void Theater::setArtisticDirection(QString selectedArtisticDirection) {
    this->artisticDirection = selectedArtisticDirection;
}

// Считывание свойств объекта

const QString & Theater::getName() {
    return this->name;
}


const QString & Theater::getAddress() {
    return this->address;
}

const QString & Theater::getOpeningDate() {
    return this->openingDate;
}

const QString & Theater::getArtisticDirection() {
    return this->artisticDirection;
}

//Копирование объекта при помощи swap
void swap(Theater &firstRecord, Theater &secondRecord) noexcept {
    std::swap(firstRecord.name, secondRecord.name);
    std::swap(firstRecord.address, secondRecord.address);
    std::swap(firstRecord.openingDate, secondRecord.openingDate);
    std::swap(firstRecord.artisticDirection, secondRecord.artisticDirection);

}
