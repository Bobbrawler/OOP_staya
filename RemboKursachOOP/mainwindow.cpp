#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add_dialog.h"
#include "show_data.h"
#include "QFileInfo"
#include "QFileDialog"
#include "QTextStream"
#include "Vector.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_New_triggered()
{
    if (ui->tableWidget->rowCount() > 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Внимание");
        msgBox.setText("Вы уверены, что хотите создать новый файл?\nВсе проделанные изменения не будут сохранены.");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        if (msgBox.exec() == QMessageBox::No) {
            return;
        }
    }
    ui->tableWidget->setRowCount(0);
    main_vector.clear();
    file_ = "";
    setWindowTitle("*" + file_ + " – Функции языка программирования");
}

void MainWindow::on_action_Exit_triggered()
{
    if (ui->tableWidget->rowCount() > 0 || file_ != "") {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Внимание");
        msgBox.setText("Вы уверены, что хотите выйти?\nВсе проделанные изменения не будут сохранены.");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        if (msgBox.exec() == QMessageBox::No) {
            return;
        }
    }
    exit(0);
}

void MainWindow::on_action_About_triggered()
{
    QMessageBox::about(this,
                       "О программе",
                       "Курсовая работа по дисциплине ООП\n"
                       "Тема: Класс, характеризующий театры Петербурга\n"
                       "Вариант 22\n"
                       "Выполнил студент группы ИКПИ-35\n"
                       "Рыбин Иван\n"
                       "Санкт-Петербург\n"
                       "2024 год");
}

void MainWindow::on_action_Add_triggered()
{
    Add_Dialog addRecordDialogWindow;
    if (addRecordDialogWindow.exec() == QDialog::Accepted)
    {
        Theater newRecord = addRecordDialogWindow.getData();
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(newRecord.getName()));
        ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 0);
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(newRecord.getAdress()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(newRecord.getOpeningDate()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(newRecord.getArtisticDirection()));
        ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 4);
        main_vector.push_back(newRecord);
        ui->statusBar->showMessage("Запись добавлена");
        setWindowTitle("*" + file_ + " – Театры Петербурга");
    }
}


void MainWindow::on_lineEdit_textChanged(const QString &textToSearch)
{
    ui->tableWidget->setCurrentCell(-1, -1);
    if (textToSearch == "") {
        return;
    }
    ui->tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);
    auto find_items = ui->tableWidget->findItems(textToSearch, Qt::MatchContains);
    int len = find_items.size();
    for (int i = 0; i < len; ++i) {
        auto item = find_items.at(i);
        item->setSelected(true);
    }
    ui->tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    ui->statusBar->showMessage("Найдено " + QString::number(len) + " ячеек");
}

void MainWindow::on_action_Edit_triggered()
{
    auto list = ui->tableWidget->selectedItems();
    if (list.size() > 0) {
        Add_Dialog editRecordDialogWindow;
        editRecordDialogWindow.setName(list.at(0)->text());
        editRecordDialogWindow.setAdress(list.at(1)->text());
        editRecordDialogWindow.setOpeningDate(list.at(2)->text());
        editRecordDialogWindow.setArtisticDirection(list.at(3)->text());
        if (editRecordDialogWindow.exec() == QDialog::Accepted)
        {
            Theater editedRecord = editRecordDialogWindow.getData();
            list.at(0)->setText(editedRecord.getName());
            list.at(1)->setText(editedRecord.getAdress());
            list.at(2)->setText(editedRecord.getOpeningDate());
            list.at(3)->setText(editedRecord.getArtisticDirection());
            main_vector[list.at(0)->row()].setName(editedRecord.getName());
            main_vector[list.at(1)->row()].setAdress(editedRecord.getAdress());
            main_vector[list.at(2)->row()].setOpeningDate(editedRecord.getOpeningDate());
            main_vector[list.at(3)->row()].setArtisticDirection(editedRecord.getArtisticDirection());
            ui->statusBar->showMessage("Запись отредактирована");
            setWindowTitle("*" + file_ + " – Театры Петербурга");
        }
    }
}

void MainWindow::on_action_Delete_triggered()
{
    auto selectRecordslist = ui->tableWidget->selectionModel()->selectedRows();
    if (selectRecordslist.size() > 0) {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Внимание");
        messageBox.setText("Вы уверены, что хотите удалить строки с выбранными элементами?");
        messageBox.setIcon(QMessageBox::Question);
        messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        messageBox.setDefaultButton(QMessageBox::Yes);
        if (messageBox.exec() == QMessageBox::Yes) {
            for (auto k = selectRecordslist.rbegin(); k != selectRecordslist.rend(); ++k) {
                auto idx = (*k).row();
                main_vector.erase(idx);
                ui->tableWidget->removeRow(idx);
            }
            ui->statusBar->showMessage("Запись удалена");
            setWindowTitle("*" + file_ + " – Театры Петербурга");
        }
    } else ui->statusBar->showMessage("Таблица пуста");
}

void MainWindow::on_action_Clear_triggered()
{
    if (ui->tableWidget->rowCount() > 0) {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Внимание");
        messageBox.setText("Вы уверены, что хотите очистить таблицу?");
        messageBox.setIcon(QMessageBox::Question);
        messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        messageBox.setDefaultButton(QMessageBox::Yes);
        if (messageBox.exec() == QMessageBox::Yes) {
            ui->tableWidget->setRowCount(0);
            main_vector.clear();
            ui->statusBar->showMessage("Таблица очищена");
            setWindowTitle("*" + file_ + " – Театры Петербурга");
        }
    } else ui->statusBar->showMessage("Таблица пуста");
}

void MainWindow::on_action_Open_triggered(bool isClean)
{
    QString file_name = QFileDialog::getOpenFileName(this, "Открыть файл...", ".", "CSV files (*.csv);;All files (*.*);;");
    QFileInfo check_file(file_name);
    if (check_file.exists() && check_file.isFile()) {
        if (isClean) {
            MainWindow::on_action_New_triggered();
        }
        QFile file(file_name);
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream in(&file);
            while (!in.atEnd()) {
                Theater record;
                QString line = in.readLine();
                QStringList fields = line.split(";");
                if (fields.size() == 4) {
                    record.setName(fields[0].simplified());
                    record.setAdress(fields[1].simplified());
                    record.setOpeningDate(fields[2].simplified());
                    record.setArtisticDirection(fields[3].simplified());
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
                    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(record.getName()));
                    ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 0);
                    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(record.getAdress()));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(record.getOpeningDate()));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(record.getArtisticDirection()));
                    ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 4);
                    main_vector.push_back(record);
                }
            }
            file.close();
            ui->statusBar->showMessage("Записи из файла добавлены");
            file_ = file_name;
            setWindowTitle(file_ + " – Театры Петербурга");
        } else ui->statusBar->showMessage("Файл '" + file_name + "' не удалось открыть на чтение (" + file.errorString() + ")");
    } else ui->statusBar->showMessage("Файл '" + file_name + "' не существует");
}

void MainWindow::on_action_Save_triggered()
{
    if (file_ == "") {
        MainWindow::on_action_SaveAs_triggered();
        return;
    }
    QFile file(file_);
    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);
        int len = ui->tableWidget->rowCount();
        for (int i = 0; i < len; ++i) {
            QString name = ui->tableWidget->item(i, 0)->text();
            QString adress = ui->tableWidget->item(i, 1)->text();
            QString openingDate = ui->tableWidget->item(i, 2)->text();
            QString artisticDirection = ui->tableWidget->item(i, 3)->text();
            out << name << ";" << adress << ";" << openingDate << ";" << artisticDirection << "\n";
        }
        file.close();
        ui->statusBar->showMessage("Файл записан");
        setWindowTitle(file_ + " – Театры Петербурга");
    }
}

void MainWindow::on_action_SaveAs_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Сохранить файл...", ".", "CSV files (*.csv);;All files (*.*);;");
    if (file_name != "") {
        file_ = file_name;
        MainWindow::on_action_Save_triggered();
    }
}

void MainWindow::on_action_Merge_triggered()
{
    QString old_file = file_;
    MainWindow::on_action_Open_triggered(false);
    file_ = old_file;
    ui->statusBar->showMessage("Данные объединены");
    setWindowTitle("*" + file_ + " – Театры Петербурга");
}

void MainWindow::on_tableWidget_cellDoubleClicked(int, int)
{
    MainWindow::on_action_Edit_triggered();
}

void MainWindow::on_action_ShowData_triggered()
{
    Show_Data showDataDialogWindow;
    QString recordsInString;
    for (auto &record : main_vector) {
        recordsInString += record.getName() + ";" + record.getAdress() + ";" + record.getOpeningDate() + ";" + record.getArtisticDirection() + "\n";
    }
    showDataDialogWindow.setText(recordsInString);
    showDataDialogWindow.exec();
}
