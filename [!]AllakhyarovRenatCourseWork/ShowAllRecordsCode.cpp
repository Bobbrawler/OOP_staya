#include "ShowAllRecordsCode.h"
#include "ui_ShowAllRecordsCode.h"

ShowAllRecordsCode::ShowAllRecordsCode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowAllRecordsCode)
{
    ui->setupUi(this);
}

void ShowAllRecordsCode::setText(const QString &str) {
    ui->textEdit->setText(str);
}

QString ShowAllRecordsCode::getText() {
    return ui->textEdit->toPlainText();
}

ShowAllRecordsCode::~ShowAllRecordsCode()
{
    delete ui;
}

void ShowAllRecordsCode::on_pushButton_clicked()
{
    this->close();
}
