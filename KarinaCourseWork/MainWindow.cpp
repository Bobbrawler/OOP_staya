#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "RedactorRecordWindow.h"
#include "ShowAllRecordsCode.h"
#include "QFileInfo"
#include "QFileDialog"
#include "QTextStream"
#include "Vector.h"
#include "TextMessageDictionary.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), // Инициализация базового класса QMainWindow с указателем на родительский виджет

    ui(new Ui::MainWindow) // Создание нового объекта ui типа Ui::MainWindow
{
    ui->setupUi(this); // Подключение пользовательского интерфейса к текущему объекту MainWindow

    setWindowTitle(NAME_OF_OBJECT_TYPE); // Установка заголовка окна приложения

}

MainWindow::~MainWindow()
{
    delete ui; // Освобождение ресурсов, занимаемых ui, при уничтожении объекта MainWindow
}

//МЕТОД ДОБАВЛЕНИЕ ЗАПИСИ
void MainWindow::on_action_Add_triggered()
{
    //Создание объекта окна добавления записи
    RedactorRecordWindow addRecordDialogWindow;
    //Внутри этого оператора выполняются действия, пока не будет закрыто окно
    if (addRecordDialogWindow.exec() == QDialog::Accepted)
    {
        //Получение новой записи из полей окна добавления
        Passport newRecord = addRecordDialogWindow.getData();

        //Добавление новой записи в массив записей
        main_vector.push_back(newRecord);

        //Обновление таблицы главного окна
        int newRowIndex = ui->tableWidget->rowCount();

        ui->tableWidget->setRowCount(newRowIndex + 1);
        ui->tableWidget->setItem(newRowIndex, 0, new QTableWidgetItem(QString::number(newRowIndex + 1)));
        ui->tableWidget->setItem(newRowIndex, 1, new QTableWidgetItem(newRecord.getFullName()));
        ui->tableWidget->setItem(newRowIndex, 2, new QTableWidgetItem(newRecord.getNumber()));
        ui->tableWidget->setItem(newRowIndex, 3, new QTableWidgetItem(newRecord.getIssueDate()));
        ui->tableWidget->setItem(newRowIndex, 4, new QTableWidgetItem(newRecord.getBirthDate()));

        ui->statusBar->showMessage(OBJECT_ADD_MESSAGE);
        setWindowTitle(WINDOW_TITLE_UNSAVED_SYMBOL + file_ + WINDOW_TITLE_TYPE_OBJECT);
    }
}

//МЕТОД РЕДАКТИРОВАНИЯ ЗАПИСИ
void MainWindow::on_action_Edit_triggered()
{
    //Лист со всеми выбранными элементами для редактирования
    auto selectedItemsList = ui->tableWidget->selectedItems();
    //Проверка, были ли выбраны элементы вообще
    if (selectedItemsList.size() == 0) {
        return;
    }

    //Создание объекта окна редактирования записи
    RedactorRecordWindow editRecordDialogWindow;
    //Загрузка в окно редактирования последних данных выбранной записи
    editRecordDialogWindow.setFullName(selectedItemsList.at(1)->text());
    editRecordDialogWindow.setNumber(selectedItemsList.at(2)->text());
    editRecordDialogWindow.setIssueDate(selectedItemsList.at(3)->text());
    editRecordDialogWindow.setBirthDate(selectedItemsList.at(4)->text());
    //Внутри этого оператора выполняются действия, пока не будет закрыто окно
    if (editRecordDialogWindow.exec() == QDialog::Accepted) {
        //Получение отредактированной записи
        Passport editedRecord = editRecordDialogWindow.getData();

        //Обновление всех свойств соответстввующего элемента в массиве записей
        main_vector[selectedItemsList.at(1)->row()].setFullName(editedRecord.getFullName());
        main_vector[selectedItemsList.at(2)->row()].setNumber(editedRecord.getNumber());
        main_vector[selectedItemsList.at(3)->row()].setIssueDate(editedRecord.getIssueDate());
        main_vector[selectedItemsList.at(4)->row()].setBirthDate(editedRecord.getBirthDate());

        //Обновление таблицы главного окна приложения в соответсвие с редактированием
        selectedItemsList.at(1)->setText(editedRecord.getFullName());
        selectedItemsList.at(2)->setText(editedRecord.getNumber());
        selectedItemsList.at(3)->setText(editedRecord.getIssueDate());
        selectedItemsList.at(4)->setText(editedRecord.getBirthDate());

        ui->statusBar->showMessage(OBJECT_REDACT_MESSAGE);
        setWindowTitle(WINDOW_TITLE_UNSAVED_SYMBOL + file_ + WINDOW_TITLE_TYPE_OBJECT);
    }
}

//МЕТОД СОЗДАНИЯ НОВОГО ФАЙЛА
void MainWindow::on_action_New_triggered()
{
    //Проверка на наличие записей в таблице
    if (ui->tableWidget->rowCount() == 0) {
        //Создание нового файла и завершение операции
        MainWindow::createNewDatabase();
        return;
    }

    //Вывод предупреждения о необходимости сохранить все изменения
    QMessageBox msgBox;

    msgBox.setWindowTitle(ATTENTION_MESSAGE);
    msgBox.setText(WARNING_WHEN_CREATING_NEW_FILE);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);

    //Отмена операции при нажатии кнопки "No" в окне предупреждения
    if (msgBox.exec() == QMessageBox::No) {
        return;
    }
    //Создание нового файла
    MainWindow::createNewDatabase();
}

//МЕТОД ЗАКРЫТИЯ ПРИЛОЖЕНИЯ
void MainWindow::on_action_Exit_triggered()
{
    //Проверка есть ли уже сохранённый файл или если в таблице есть записи. Если нет то выход без предупрждения.
    if (ui->tableWidget->rowCount() == 0 && file_ == "") {
        exit(0);
    }
    //Вывод предупреждения о необходимости сохранения данных
    QMessageBox msgBox;

    msgBox.setWindowTitle(ATTENTION_MESSAGE);
    msgBox.setText(WARNING_WHEN_CLOSE_APPLICATION);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    //Если в окне подтверждения пользователь нажмёт "No", отмена операции
    if (msgBox.exec() == QMessageBox::No) {
        return;
    }
    //Выключение приложения
    exit(0);
}

//МЕТОД ОПИСАНИЯ КУРСОВОЙ РАБОТЫ
void MainWindow::on_action_About_triggered()
{
    //Открытие окна информации о курсовой работе
    QMessageBox::about(this,
                       ABOUT_COURSE_WORK_MESSAGE_TITLE,
                       ABOUT_COURSE_WORK_MESSAGE_NAME
                       ABOUT_COURSE_WORK_MESSAGE_THEME
                       ABOUT_COURSE_WORK_MESSAGE_VERSION
                       ABOUT_COURSE_WORK_MESSAGE_GROUP
                       ABOUT_COURSE_WORK_MESSAGE_FULL_NAME
                       ABOUT_COURSE_WORK_MESSAGE_CITY
                       ABOUT_COURSE_WORK_MESSAGE_YEAR);
}

//МЕТОД ПОИСКОВОЙ СТРОКИ
void MainWindow::on_lineEdit_textChanged(const QString &textToSearch)
{
    //Считывание строки поиска
    ui->tableWidget->setCurrentCell(-1, -1);

    //Если она пустая ничего не выводим в статусную строку
    if (textToSearch == "") {
        ui->statusBar->showMessage("");
        return;
    }

    //Создание массива найденных элементов
    ui->tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);

    auto find_items = ui->tableWidget->findItems(textToSearch, Qt::MatchContains);

    //Нахождение кол-ва найденных записей
    int len = find_items.size();
    //Выделение всех найденных записей
    for (int i = 0; i < len; ++i) {
        auto item = find_items.at(i);
        item->setSelected(true);
    }

    ui->tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    ui->statusBar->showMessage(RESULT_SEARCH_MESSAGE_FIRST_PART + QString::number(len) + RESULT_SEARCH_MESSAGE_SECOND_PART);
}

//МЕТОД УДАЛЕНИЯ ВЫДЕЛЕННЫХ ЗАПИСЕЙ В ТАБЛИЦЕ
void MainWindow::on_action_Delete_triggered()
{
    //Создание массива индексов строк выделенных записей
    auto selectRecordsList = ui->tableWidget->selectionModel()->selectedRows();

    //Проверка, были ли вообще выделены записи
    if (selectRecordsList.size() == 0) {
        ui->statusBar->showMessage(NO_OBJECTS_MESSAGE);
        return;
    }

    //Сортировка массива по возрастанию, для корректного удаления записей
    std::sort(selectRecordsList.begin(), selectRecordsList.end(), [](const QModelIndex &a, const QModelIndex &b) {
        return a.row() < b.row();
    });

    //Предупреждение о том что несохранённые данные будут удалены безвозвратно
    QMessageBox messageBox;

    messageBox.setWindowTitle(ATTENTION_MESSAGE);
    messageBox.setText(WARNING_WHEN_DELETED_SELECTED_LINES);
    messageBox.setIcon(QMessageBox::Question);
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::Yes);

    //Если в окне подтверждения пользователь нажмёт "No", отмена операции
    if (messageBox.exec() == QMessageBox::No) {
        return;
    }

    //Вспомогательная переменная
    int indexOffset = 0;

    //Удаление выделенных записей из таблицы и массива записей
    for (auto selectedListIndex = 0; selectedListIndex < selectRecordsList.size(); selectedListIndex++) {
        auto objectIndex = selectRecordsList[selectedListIndex].row()  - indexOffset;

        main_vector.erase(objectIndex);
        ui->tableWidget->removeRow(objectIndex);

        indexOffset++;
    }

    ui->statusBar->showMessage(SELECTED_OBJECTS_DELETED_MESSAGE);
    setWindowTitle(WINDOW_TITLE_UNSAVED_SYMBOL + file_ + WINDOW_TITLE_TYPE_OBJECT);
}

//МЕТОД ОЧИСТКИ ВСЕЙ ТАБЛИЦЫ
void MainWindow::on_action_Clear_triggered()
{
    //Если таблица пустая, выход из операции
    if (ui->tableWidget->rowCount() == 0) {
        ui->statusBar->showMessage(NO_OBJECTS_MESSAGE);
        return;
    }

    //Предупреждение о том, что все несохранённые данные будут удалены безвозвратно
    QMessageBox messageBox;

    messageBox.setWindowTitle(ATTENTION_MESSAGE);
    messageBox.setText(WARNING_WHEN_CLEAR_FULL_TABLE);
    messageBox.setIcon(QMessageBox::Question);
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::Yes);

    //Если в окне подтверждения пользователь нажмёт "No", отмена операции
    if (messageBox.exec() == QMessageBox::No) {
        return;
    }

    //Очистка массива записей
    main_vector.clear();

    //Очистка таблицы главного окна приложения
    ui->tableWidget->setRowCount(0);

    ui->statusBar->showMessage(FULL_TABLE_CLEARED_MESSAGE);
    setWindowTitle(WINDOW_TITLE_UNSAVED_SYMBOL + file_ + WINDOW_TITLE_TYPE_OBJECT);
}

//МЕТОД ОТКРЫТИЯ ФАЙЛА
void MainWindow::on_action_Open_triggered(bool isCleanCurrentTable)
{
    //Инициализация файла
    QString file_name = QFileDialog::getOpenFileName(this, OPEN_FILE_MESSAGE_FIRST_PART, OPEN_FILE_MESSAGE_SECOND_PART, OPEN_FILE_MESSAGE_THIRD_PART);
    QFileInfo check_file(file_name);

    //Проверка существует ли данный файл. Если нет, то происходит преждевременный выход из операции
    if (!check_file.exists() || !check_file.isFile())
    {
        ui->statusBar->showMessage(FILE_DOES_NOT_EXIST_MESSAGE_FIRST_PART + file_name + FILE_DOES_NOT_EXIST_MESSAGE_SECOND_PART);
        return;
    }

    //isCleanCurrentTable изначально = true. Если так, все уже написанные записи очистятся и затем загрузится записи из файла, иначе загрузятся только те записи, которых (по индексу) еще нет в таблице
    if (isCleanCurrentTable) {
        MainWindow::on_action_New_triggered();
    }

    QFile file(file_name);

    //Проверка на читаемость файла
    if (!file.open(QIODevice::ReadOnly)) {
        ui->statusBar->showMessage(FILE_DOES_NOT_EXIST_MESSAGE_FIRST_PART + file_name + FILE_DOES_NOT_EXIST_MESSAGE_SECOND_PART);
        return;
    }

    QTextStream in(&file);

    //Процесс считывания данных из файла и загрузка в таблицу
    while (!in.atEnd()) {
        //Создание записи
        Passport record;
        QString line = in.readLine();
        QStringList fields = line.split(DELIMITER);
        //Проверка на кол-во столбцов в записи загружаемого файла. Если не соответствует, мы не загружаем данную запись во избежание ошибок
        if (fields.size() != 5) {
            ui->statusBar->showMessage(INCORRECT_NUMBER_PROPERTIES_OBJECT);
            continue;
        }
        //Установка всех полей созданной записи
        QString recordNumber = fields[0].simplified();

        record.setFullName(fields[1].simplified());
        record.setNumber(fields[2].simplified());
        record.setIssueDate(fields[3].simplified());
        record.setBirthDate(fields[4].simplified());

        //Добавление считанной записи в массив записей
        main_vector.push_back(record);

        //Добавление считанной записи в таблицу записей главного окна
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(recordNumber));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(record.getFullName()));
        ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 0);
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(record.getNumber()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(record.getIssueDate()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 4, new QTableWidgetItem(record.getBirthDate()));
        ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 4);

    }

    file.close();
    file_ = file_name;

    ui->statusBar->showMessage(FILE_RECORDS_ADDED_MESSAGE);
    setWindowTitle(file_ + WINDOW_TITLE_TYPE_OBJECT);
}

//МЕТОД СОХРАНЕНИЯ ФАЙЛА
void MainWindow::on_action_Save_triggered()
{

    QFile file(file_);

    //Проверка файла на возможность записи в него
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        MainWindow::on_action_SaveAs_triggered();
        return;
    }

    QTextStream out(&file);

    int len = ui->tableWidget->rowCount();

    //Сохранение каждой записи таблицы записей главного окна в файл
    for (int i = 0; i < len; ++i) {
        QString recordNumber = ui->tableWidget->item(i, 0)->text();
        QString fullName = ui->tableWidget->item(i, 1)->text();
        QString number = ui->tableWidget->item(i, 2)->text();
        QString issueDate = ui->tableWidget->item(i, 3)->text();
        QString birthDate = ui->tableWidget->item(i, 4)->text();

        out << recordNumber << DELIMITER << fullName << DELIMITER << number << DELIMITER << issueDate << DELIMITER << birthDate << "\n";
    }

    file.close();

    ui->statusBar->showMessage(FILE_SAVED_MESSAGE);
    setWindowTitle(file_ + WINDOW_TITLE_TYPE_OBJECT);
}

//МЕТОД СОХРАНЕНИЯ ФАЙЛА КАК
void MainWindow::on_action_SaveAs_triggered()
{
    //Считывание название файла, которое задаёт пользователь
    QString file_name = QFileDialog::getSaveFileName(this, SAVE_FILE_MESSAGE_FIRST_PART, SAVE_FILE_MESSAGE_SECOND_PART, SAVE_FILE_MESSAGE_THIRD_PART);

    //Проверка что название было задано.
    if (file_name != "") {

        file_ = file_name;
        //Процесс сохранения данных в файл с выбранным названием
        MainWindow::on_action_Save_triggered();
    }
}

//МЕТОД ОБЪЕДИНЕНИЯ ДАННОГО ФАЙЛА С ДРУГИМ
void MainWindow::on_action_Merge_triggered()
{
    //Сохраняем название данного файла
    QString current_file = file_;

    //Открываем выбранный для объединения файл (без удаления всех изначальных записей)
    MainWindow::on_action_Open_triggered(false);
    //Возвращаем итоговому файлу название исходного
    file_ =current_file;

    ui->statusBar->showMessage(DATA_UNITED_MESSAGE);
    setWindowTitle(WINDOW_TITLE_UNSAVED_SYMBOL + file_ + WINDOW_TITLE_TYPE_OBJECT);
}

//МЕТОД АКТИВАЦИИ ИЗМЕНЕНИЯ ЗАПИСИ В ТАБЛИЦЕ ПУТЁМ ДВОЙНОГО НАЖАТИЯ НА ЗАПИСЬ
void MainWindow::on_tableWidget_cellDoubleClicked(int, int)
{
    //Запуск операции редактирования выбранной записи
    MainWindow::on_action_Edit_triggered();
}

//МЕТОД ОТОБРАЖЕНИЯ ВСЕЙ ТАБЛИЦЫ В ФОРМАТЕ, В КОТОРОМ БУДЕТ ЗАПИСАНА В ФАЙЛ
void MainWindow::on_action_ShowData_triggered()
{
    //Открытие и создание окна
    ShowAllRecordsCode showDataDialogWindow;

    QString recordsInString;
    //Считывание всех записей из таблицы записей главного окна
    for (auto &record : main_vector) {
        recordsInString += record.getFullName() + DELIMITER + record.getNumber() + DELIMITER + record.getIssueDate() + DELIMITER + record.getBirthDate() + "\n";
    }

    //Загрузка всех считанных данных в окно
    showDataDialogWindow.setText(recordsInString);
    showDataDialogWindow.exec();
}

//ВСПОМОГАТЕЛЬНЫЙ МЕТОД ОБНОВЛЕНИЯ ТАБЛИЦЫ И САМОГО ФАЙЛА
void MainWindow::createNewDatabase() {
    //Очистка массива записей
    main_vector.clear();
    //Очистка таблицы записей главного окна
    ui->tableWidget->setRowCount(0);
    //Сбрасываем привязку к файлу
    file_ = "";

    setWindowTitle(WINDOW_TITLE_UNSAVED_SYMBOL + file_ + WINDOW_TITLE_TYPE_OBJECT);
}
