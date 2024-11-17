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

void RedactorRecordWindow::setNumber(QString lineValue) {
    ui->lineEdit_2->setText(lineValue);
}

void RedactorRecordWindow::setDateIssue(QString lineValue) {
    ui->lineEdit_3->setText(lineValue);
}

void RedactorRecordWindow::setDateBirth(QString lineValue) {
    ui->lineEdit_4->setText(lineValue);
}

Passport RedactorRecordWindow::getData() {
    Passport resultRecord;
    resultRecord.setFullName(ui->lineEdit->text().simplified().replace(";", ","));
    resultRecord.setNumber(ui->lineEdit_2->text().simplified().replace(";", ","));
    resultRecord.setDateIssue(ui->lineEdit_3->text().simplified().replace(";", ","));
    resultRecord.setDateBirth(ui->lineEdit_4->text().simplified().replace(";", ","));
    return resultRecord;
}
