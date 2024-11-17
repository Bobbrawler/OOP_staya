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

void RedactorRecordWindow::setName(QString lineValue) {
    ui->lineEdit->setText(lineValue);
}

void RedactorRecordWindow::setAdress(QString lineValue) {
    ui->lineEdit_2->setText(lineValue);
}

void RedactorRecordWindow::setOpeningDate(QString lineValue) {
    ui->lineEdit_3->setText(lineValue);
}

void RedactorRecordWindow::setArtisticDirection(QString lineValue) {
    ui->lineEdit_4->setText(lineValue);
}

Theater RedactorRecordWindow::getData() {
    Theater resultRecord;
    resultRecord.setName(ui->lineEdit->text().simplified().replace(";", ","));
    resultRecord.setAdress(ui->lineEdit_2->text().simplified().replace(";", ","));
    resultRecord.setOpeningDate(ui->lineEdit_3->text().simplified().replace(";", ","));
    resultRecord.setArtisticDirection(ui->lineEdit_4->text().simplified().replace(";", ","));
    return resultRecord;
}
