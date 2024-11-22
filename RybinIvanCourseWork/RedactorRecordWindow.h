#ifndef RedactorRecordWindow_H
#define RedactorRecordWindow_H

#include <QDialog>
#include "Theater.h"

namespace Ui {
    class RedactorRecordWindow;
}

class RedactorRecordWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RedactorRecordWindow(QWidget *parent = nullptr);

    void setName(QString lineValue);
    void setAddress(QString lineValue);
    void setOpeningDate(QString lineValue);
    void setArtisticDirection(QString lineValue);

    Theater getData();

    ~RedactorRecordWindow();

private:
    Ui::RedactorRecordWindow *ui;
};

#endif // RedactorRecordWindow_H

















