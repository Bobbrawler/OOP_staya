#include "RedactorRecordWindow.h"
#include "ui_RedactorRecordWindow.h"

RedactorRecordWindow::RedactorRecordWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RedactorRecordWindow)
{
    ui->setupUi(this);
    setFixedSize(size());
    setWindowTitle(" ");
}

RedactorRecordWindow::~RedactorRecordWindow()
{
    delete ui;
}

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

Student RedactorRecordWindow::getData() {
    Student resultRecord;
    resultRecord.setFullName(ui->lineEdit->text().simplified().replace(";", ","));
    resultRecord.setGroup(ui->lineEdit_2->text().simplified().replace(";", ","));
    resultRecord.setCourse(ui->lineEdit_3->text().simplified().replace(";", ","));
    resultRecord.setFaculty(ui->lineEdit_4->text().simplified().replace(";", ","));
    return resultRecord;
}
