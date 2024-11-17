/********************************************************************************
** Form generated from reading UI file 'ShowAllRecordsCode.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLRECORDSCODE_H
#define UI_SHOWALLRECORDSCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowAllRecordsCode
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *ShowAllRecordsCode)
    {
        if (ShowAllRecordsCode->objectName().isEmpty())
            ShowAllRecordsCode->setObjectName("ShowAllRecordsCode");
        ShowAllRecordsCode->resize(570, 480);
        QFont font;
        font.setPointSize(12);
        ShowAllRecordsCode->setFont(font);
        verticalLayout = new QVBoxLayout(ShowAllRecordsCode);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(ShowAllRecordsCode);
        textEdit->setObjectName("textEdit");
        textEdit->setFont(font);
        textEdit->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(ShowAllRecordsCode);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(ShowAllRecordsCode);

        QMetaObject::connectSlotsByName(ShowAllRecordsCode);
    } // setupUi

    void retranslateUi(QDialog *ShowAllRecordsCode)
    {
        ShowAllRecordsCode->setWindowTitle(QCoreApplication::translate("ShowAllRecordsCode", "CSV-\320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("ShowAllRecordsCode", "\320\236\320\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowAllRecordsCode: public Ui_ShowAllRecordsCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLRECORDSCODE_H
