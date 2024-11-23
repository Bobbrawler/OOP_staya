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
void RedactorRecordWindow::setFullName(QString lineValue) {
    ui->lineEdit->setText(lineValue);
}

void RedactorRecordWindow::setGroup(QString lineValue) {
    ui->lineEdit_2->setText(lineValue);
}

void RedactorRecordWindow::setCourse(QString lineValue) {
    ui->lineEdit_3->setText(lineValue);
}

void RedactorRecordWindow::setFaculty(QString lineValue) {
    ui->lineEdit_4->setText(lineValue);
}

//Метод, который обеспечивает считывание данных, которые пользователь ввёл в окне
Student RedactorRecordWindow::getData() {
    Student resultRecord;
    resultRecord.setFullName(ui->lineEdit->text().simplified());
    resultRecord.setGroup(ui->lineEdit_2->text().simplified());
    resultRecord.setCourse(ui->lineEdit_3->text().simplified());
    resultRecord.setFaculty(ui->lineEdit_4->text().simplified());
    return resultRecord;
}
