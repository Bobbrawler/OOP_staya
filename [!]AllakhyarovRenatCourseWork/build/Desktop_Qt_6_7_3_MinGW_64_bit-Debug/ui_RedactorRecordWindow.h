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
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(29, 28, 27, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(43, 42, 40, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(36, 35, 33, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(14, 14, 13, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(19, 19, 18, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QBrush brush7(QColor(102, 102, 102, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush8(QColor(17, 8, 49, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(0, 0, 0, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(20, 20, 19, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        RedactorRecordWindow->setPalette(palette);
        QFont font;
        font.setPointSize(12);
        RedactorRecordWindow->setFont(font);
        buttonBox = new QDialogButtonBox(RedactorRecordWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(340, 300, 300, 51));
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
        lineEdit_2->setGeometry(QRect(440, 80, 431, 31));
        label = new QLabel(RedactorRecordWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 80, 191, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit = new QLineEdit(RedactorRecordWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(440, 20, 431, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush6);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush6);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush13(QColor(120, 120, 120, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        lineEdit->setPalette(palette1);
        label_2 = new QLabel(RedactorRecordWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 0, 271, 61));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_3 = new QLineEdit(RedactorRecordWindow);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(440, 160, 431, 31));
        label_3 = new QLabel(RedactorRecordWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 160, 381, 31));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_4 = new QLineEdit(RedactorRecordWindow);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(440, 230, 431, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush13);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        lineEdit_4->setPalette(palette2);
        label_4 = new QLabel(RedactorRecordWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 230, 381, 31));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_4->setFont(font3);
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
        label->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\244\320\230\320\236", nullptr));
        label_3->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\232\321\203\321\200\321\201", nullptr));
        label_4->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedactorRecordWindow: public Ui_RedactorRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDACTORRECORDWINDOW_H
