#include "RedactorRecordWindow.h"
#include "ui_RedactorRecordWindow.h"

//Инициализация и открытие окна
RedactorRecordWindow::RedactorRecordWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RedactorRecordWindow)
{
    ui->setupUi(this);
    setFixedSize(size());
    setWindowTitle(" ");
}

//Деструктор
RedactorRecordWindow::~RedactorRecordWindow()
{
    delete ui;
}

//Все методы, которые устанавливают значения полей окна
void RedactorRecordWindow::setName(QString lineValue) {
    ui->lineEdit->setText(lineValue);
}

void RedactorRecordWindow::setAddress(QString lineValue) {
    ui->lineEdit_2->setText(lineValue);
}

void RedactorRecordWindow::setOpeningDate(QString lineValue) {
    ui->lineEdit_3->setText(lineValue);
}

void RedactorRecordWindow::setArtisticDirection(QString lineValue) {
    ui->lineEdit_4->setText(lineValue);
}

//Метод, который обеспечивает считывание данных, которые пользователь ввёл в окне
Theater RedactorRecordWindow::getData() {
    Theater resultRecord;
    resultRecord.setName(ui->lineEdit->text().simplified());
    resultRecord.setAddress(ui->lineEdit_2->text().simplified());
    resultRecord.setOpeningDate(ui->lineEdit_3->text().simplified());
    resultRecord.setArtisticDirection(ui->lineEdit_4->text().simplified());
    return resultRecord;
}
