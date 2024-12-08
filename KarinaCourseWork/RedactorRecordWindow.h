#ifndef RedactorRecordWindow_H
#define RedactorRecordWindow_H

#include <QDialog>
#include "Passport.h"

namespace Ui {
    class RedactorRecordWindow;
}

class RedactorRecordWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RedactorRecordWindow(QWidget *parent = nullptr);

    void setFullName(QString lineValue);
    void setNumber(QString lineValue);
    void setIssueDate(QString lineValue);
    void setBirthDate(QString lineValue);

    Passport getData();

    ~RedactorRecordWindow();

private:
    Ui::RedactorRecordWindow *ui;
};

#endif // RedactorRecordWindow_H

















