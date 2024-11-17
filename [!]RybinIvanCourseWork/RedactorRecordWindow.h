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
    ~RedactorRecordWindow();
    Theater getData();
    void setName(QString lineValue);
    void setAdress(QString lineValue);
    void setOpeningDate(QString lineValue);
    void setArtisticDirection(QString lineValue);

private:
    Ui::RedactorRecordWindow *ui;
};

#endif // RedactorRecordWindow_H
