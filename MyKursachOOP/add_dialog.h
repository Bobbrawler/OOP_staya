#ifndef ADD_DIALOG_H
#define ADD_DIALOG_H

#include <QDialog>
#include "Theater.h"

namespace Ui {
    class Add_Dialog;
}

class Add_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Dialog(QWidget *parent = nullptr);
    ~Add_Dialog();
    Theater getData();
    void setName(QString lineValue);
    void setAdress(QString lineValue);
    void setOpeningDate(QString lineValue);
    void setArtisticDirection(QString lineValue);

private:
    Ui::Add_Dialog *ui;
};

#endif // ADD_DIALOG_H
