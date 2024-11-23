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
        RedactorRecordWindow->resize(810, 368);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(18, 7, 1, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(121, 45, 6, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(101, 37, 5, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(40, 15, 2, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(54, 20, 3, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(140, 38, 4, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(81, 30, 4, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush9(QColor(254, 85, 1, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush9);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        QBrush brush11(QColor(255, 255, 255, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        QBrush brush12(QColor(40, 15, 2, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush13(QColor(57, 21, 3, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush13);
        RedactorRecordWindow->setPalette(palette);
        QFont font;
        font.setPointSize(12);
        RedactorRecordWindow->setFont(font);
        buttonBox = new QDialogButtonBox(RedactorRecordWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(250, 300, 300, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush14(QColor(255, 69, 7, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        buttonBox->setPalette(palette1);
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
        lineEdit_2->setGeometry(QRect(330, 80, 461, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush15(QColor(255, 42, 5, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush15);
        QBrush brush16(QColor(255, 151, 132, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush16);
        QBrush brush17(QColor(255, 96, 68, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush17);
        QBrush brush18(QColor(127, 21, 2, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush18);
        QBrush brush19(QColor(170, 28, 3, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush19);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush20(QColor(255, 97, 6, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush15);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush21(QColor(255, 148, 130, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush21);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush22(QColor(255, 107, 81, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush22);
        lineEdit_2->setPalette(palette2);
        QFont font2;
        font2.setPointSize(16);
        lineEdit_2->setFont(font2);
        label = new QLabel(RedactorRecordWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 80, 191, 31));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        label->setFont(font3);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit = new QLineEdit(RedactorRecordWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(330, 20, 461, 51));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush16);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush17);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush18);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush19);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush15);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette3.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush21);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush18);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush19);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush21);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush22);
        lineEdit->setPalette(palette3);
        lineEdit->setFont(font2);
        label_2 = new QLabel(RedactorRecordWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 10, 271, 61));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_3 = new QLineEdit(RedactorRecordWindow);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(330, 150, 461, 51));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush16);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush19);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush15);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush21);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush21);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush22);
        lineEdit_3->setPalette(palette4);
        lineEdit_3->setFont(font2);
        label_3 = new QLabel(RedactorRecordWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-30, 160, 381, 31));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_4 = new QLineEdit(RedactorRecordWindow);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(330, 220, 461, 51));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush16);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush18);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush19);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush15);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush21);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush18);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush19);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush21);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush22);
        lineEdit_4->setPalette(palette5);
        lineEdit_4->setFont(font2);
        label_4 = new QLabel(RedactorRecordWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-30, 220, 381, 31));
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
        lineEdit_2->setText(QString());
        label->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\244\320\230\320\236", nullptr));
        lineEdit_3->setText(QString());
        label_3->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\232\321\203\321\200\321\201", nullptr));
        lineEdit_4->setText(QString());
        label_4->setText(QCoreApplication::translate("RedactorRecordWindow", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedactorRecordWindow: public Ui_RedactorRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDACTORRECORDWINDOW_H
