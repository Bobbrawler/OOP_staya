#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "RedactorRecordWindow.h"
#include "ShowAllRecordsCode.h"
#include "QFileInfo"
#include "QFileDialog"
#include "QTextStream"
#include "Vector.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Студенты");
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
    setWindowTitle("*" + file_ + " – Студенты");
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
                       "Тема: Класс, характеризующий студентов\n"
                       "Вариант 1\n"
                       "Выполнил студент группы ИКПИ-35\n"
                       "Аллахяров Ренат\n"
                       "Санкт-Петербург\n"
                       "2024 год");
}

void MainWindow::on_action_Add_triggered()
{
    RedactorRecordWindow addRecordDialogWindow;
    if (addRecordDialogWindow.exec() == QDialog::Accepted)
    {
        Student newRecord = addRecordDialogWindow.getData();
        int newRow = ui->tableWidget->rowCount();  // Получаем текущий номер строки перед добавлением новой
        ui->tableWidget->setRowCount(newRow + 1);  // Увеличиваем количество строк

        // Устанавливаем номер строки в первой колонке
        ui->tableWidget->setItem(newRow, 0, new QTableWidgetItem(QString::number(newRow + 1)));

        // Устанавливаем остальные данные
        ui->tableWidget->setItem(newRow, 1, new QTableWidgetItem(newRecord.getFullName()));
        ui->tableWidget->setItem(newRow, 2, new QTableWidgetItem(newRecord.getGroup()));
        ui->tableWidget->setItem(newRow, 3, new QTableWidgetItem(newRecord.getCourse()));
        ui->tableWidget->setItem(newRow, 4, new QTableWidgetItem(newRecord.getFaculty()));

        main_vector.push_back(newRecord);
        ui->statusBar->showMessage("Запись добавлена");
        setWindowTitle("*" + file_ + " – Студенты");
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
        RedactorRecordWindow editRecordDialogWindow;
        editRecordDialogWindow.setFullName(list.at(1)->text());
        editRecordDialogWindow.setGroup(list.at(2)->text());
        editRecordDialogWindow.setCourse(list.at(3)->text());
        editRecordDialogWindow.setFaculty(list.at(4)->text());
        if (editRecordDialogWindow.exec() == QDialog::Accepted)
        {
            Student editedRecord = editRecordDialogWindow.getData();
            list.at(1)->setText(editedRecord.getFullName());
            list.at(2)->setText(editedRecord.getGroup());
            list.at(3)->setText(editedRecord.getCourse());
            list.at(4)->setText(editedRecord.getFaculty());
            main_vector[list.at(1)->row()].setFullName(editedRecord.getFullName());
            main_vector[list.at(2)->row()].setGroup(editedRecord.getGroup());
            main_vector[list.at(3)->row()].setCourse(editedRecord.getCourse());
            main_vector[list.at(4)->row()].setFaculty(editedRecord.getFaculty());
            ui->statusBar->showMessage("Запись отредактирована");
            setWindowTitle("*" + file_ + " – Студенты");
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
            setWindowTitle("*" + file_ + " – Студенты");
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
            setWindowTitle("*" + file_ + " – Студенты");
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
                Student record;
                QString line = in.readLine();
                QStringList fields = line.split(";");
                if (fields.size() == 4) {
                    record.setFullName(fields[0].simplified());
                    record.setGroup(fields[1].simplified());
                    record.setCourse(fields[2].simplified());
                    record.setFaculty(fields[3].simplified());
                    ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
                    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(record.getFullName()));
                    ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 0);
                    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(record.getGroup()));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(record.getCourse()));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(record.getFaculty()));
                    ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 4);
                    main_vector.push_back(record);
                }
            }
            file.close();
            ui->statusBar->showMessage("Записи из файла добавлены");
            file_ = file_name;
            setWindowTitle(file_ + " – Студенты");
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
        setWindowTitle(file_ + " – Студенты");
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
    setWindowTitle("*" + file_ + " – Студенты");
}

void MainWindow::on_tableWidget_cellDoubleClicked(int, int)
{
    MainWindow::on_action_Edit_triggered();
}

void MainWindow::on_action_ShowData_triggered()
{
    ShowAllRecordsCode showDataDialogWindow;
    QString recordsInString;
    for (auto &record : main_vector) {
        recordsInString += record.getFullName() + ";" + record.getGroup() + ";" + record.getCourse() + ";" + record.getFaculty() + "\n";
    }
    showDataDialogWindow.setText(recordsInString);
    showDataDialogWindow.exec();
}
