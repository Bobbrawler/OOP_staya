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
    ~RedactorRecordWindow();
    Passport getData();
    void setFullName(QString lineValue);
    void setNumber(QString lineValue);
    void setDateIssue(QString lineValue);
    void setDateBirth(QString lineValue);

private:
    Ui::RedactorRecordWindow *ui;
};

#endif // RedactorRecordWindow_H
