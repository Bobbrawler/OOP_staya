/********************************************************************************
** Form generated from reading UI file 'RedactorRecordWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDACTORRECORDWINDOW_H
#define UI_REDACTORRECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_RedactorRecordWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;

    void setupUi(QDialog *RedactorRecordWindow)
    {
        if (RedactorRecordWindow->objectName().isEmpty())
            RedactorRecordWindow->setObjectName("RedactorRecordWindow");
        RedactorRecordWindow->resize(881, 368);
        QFont font;
        font.setPointSize(12);
        RedactorRecordWindow->setFont(font);
        buttonBox = new QDialogButtonBox(RedactorRecordWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(290, 300, 300, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        buttonBox->setFont(font1);
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(true);
        lineEdit_2 = new QLineEdit(RedactorRecordWindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(230, 90, 451, 51));
        QFont font2;
        font2.setPointSize(16);
        lineEdit_2->setFont(font2);
        label = new QLabel(RedactorRecordWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 80, 171, 31));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        label->setFont(font3);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit = new QLineEdit(RedactorRecordWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(230, 20, 451, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush);
        QBrush brush1(QColor(0, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        lineEdit->setPalette(palette);
        lineEdit->setFont(font2);
        label_2 = new QLabel(RedactorRecordWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-20, 10, 271, 61));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_3 = new QLineEdit(RedactorRecordWindow);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(230, 160, 451, 51));
        lineEdit_3->setFont(font2);
        label_3 = new QLabel(RedactorRecordWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-70, 160, 381, 31));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_4 = new QLineEdit(RedactorRecordWindow);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(230, 230, 451, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        lineEdit_4->setPalette(palette1);
        lineEdit_4->setFont(font2);
        label_4 = new QLabel(RedactorRecordWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-70, 230, 381, 31));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);

        retranslateUi(RedactorRecordWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RedactorRecordWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RedactorRecordWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RedactorRecordWindow);
    } // setupUi

    void retranslateUi(QDialog *RedactorRecordWindow)
    {
        RedactorRecordWindow->setWindowTitle(QString());
        label->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\244\320\230\320\236", nullptr));
        label_3->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\264\320\260\321\207\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedactorRecordWindow: public Ui_RedactorRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDACTORRECORDWINDOW_H