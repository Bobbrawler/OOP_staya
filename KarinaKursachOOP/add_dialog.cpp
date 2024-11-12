#include "add_dialog.h"
#include "ui_add_dialog.h"

Add_Dialog::Add_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Dialog)
{
    ui->setupUi(this);
    setFixedSize(size());
    setWindowTitle(" ");
}

Add_Dialog::~Add_Dialog()
{
    delete ui;
}

void Add_Dialog::setName(QString lineValue) {
    ui->lineEdit->setText(lineValue);
}

void Add_Dialog::setAdress(QString lineValue) {
    ui->lineEdit_2->setText(lineValue);
}

void Add_Dialog::setOpeningDate(QString lineValue) {
    ui->lineEdit_3->setText(lineValue);
}

void Add_Dialog::setArtisticDirection(QString lineValue) {
    ui->lineEdit_4->setText(lineValue);
}

Theater Add_Dialog::getData() {
    Theater resultRecord;
    resultRecord.setName(ui->lineEdit->text().simplified().replace(";", ","));
    resultRecord.setAdress(ui->lineEdit_2->text().simplified().replace(";", ","));
    resultRecord.setOpeningDate(ui->lineEdit_3->text().simplified().replace(";", ","));
    resultRecord.setArtisticDirection(ui->lineEdit_4->text().simplified().replace(";", ","));
    return resultRecord;
}
