#ifndef RedactorRecordWindow_H
#define RedactorRecordWindow_H

#include <QDialog>
#include "Student.h"

namespace Ui {
    class RedactorRecordWindow;
}

class RedactorRecordWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RedactorRecordWindow(QWidget *parent = nullptr);

    void setFullName(QString lineValue);
    void setGroup(QString lineValue);
    void setCourse(QString lineValue);
    void setFaculty(QString lineValue);

    Student getData();

    ~RedactorRecordWindow();

private:
    Ui::RedactorRecordWindow *ui;
};

#endif // RedactorRecordWindow_H

















