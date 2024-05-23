#include <fstream>

#include "CreateStruct.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace PasswordManager;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

// Реализация метода WriteToFile
void CreatePassword::WriteToFile()
{
    // Получение текущей даты
    DateTime currentDateOnly = DateTime::Now.Date;
    String^ currentDateStr = currentDateOnly.ToString("dd.MM.yyyy");

    // Открываем файл для записи (добавление к концу файла)
    StreamWriter^ writer = gcnew StreamWriter(filepath, true);

    String^ line = Service + " " + login + " " + password + " " + currentDateStr;
    writer->WriteLine(line);
    writer->Close();
}

// Реализация метода Input_Random
void CreatePassword::random_generating(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb, int length)
{
    Random^ rand = gcnew Random();

    // Массив, в котором будут храниться допустимые алфавиты
    ArrayList^ elements = gcnew ArrayList();

    // Счетчик количества элементов массива
    int arr_size = 0;

    // Добавление в массив только тех элементов, которые выбрал пользователь
    if (Digits)
    {
        elements->Add(digits);
        arr_size++;
    }
    if (Uppercase)
    {
        elements->Add(uppercase_letters);
        arr_size++;
    }
    if (Lowercase)
    {
        elements->Add(lowercase_letters);
        arr_size++;
    }
    if (Special_symb)
    {
        elements->Add(special_characters);
        arr_size++;
    }

    // Генерация пароля с использованием выбранных алфавитов
    for (int i = 0; i < length; i++)
    {
        int alphabet_index = rand->Next(arr_size);
        int new_symb_index = rand->Next(safe_cast<String^>(elements[alphabet_index])->Length);
        Char new_symb = safe_cast<String^>(elements[alphabet_index])[new_symb_index];
        password += new_symb;
    }
}

// Метод очистки файла
void CreatePassword::ClearFile()
{
    StreamWriter^ writer = gcnew StreamWriter(filepath,false);

    writer->Write(String::Empty);
    writer->Close();
}

// Удаление выделенных пользователем данных
void CreatePassword::DeleteData()
{
    List<String^>^ lines = gcnew List<String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    // Чтение из файла в массив
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        String^ record = Service + " " + login + " " + password + " " + date;

        if (line != record)
        {
            // Если строка не соответствует удаляемой записи, то она сохраняется в список
            lines->Add(line);
        }
    }
    reader->Close();


    // Запись в файл 
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);

    for each (String^ line in lines) writer->WriteLine(line);

    writer->Close();
}

// Изменение данных
void CreatePassword::ChangeData(String^ changedService, String^ changedLogin, String^ changedPassword)
{
    List<String^>^ lines = gcnew List<String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ words = line->Split(' ');

        // Замена данных в массиве
        if (words[0] == Service && words[1] == login && words[2] == password)
        {
            //Получение текущей даты изменения данных
            DateTime currentDateOnly = DateTime::Now.Date;
            String^ currentDateStr = currentDateOnly.ToString("dd.MM.yyyy");

            Service = changedService;
            login = changedLogin;
            password = changedPassword;

            line = Service + " " + login + " " + password + " " + currentDateStr;
        }
        lines->Add(line);
    }
    reader->Close();

    // Перезапись измененных данных
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (String ^ line in lines) writer->WriteLine(line);

    writer->Close();
}

// Сортировка данных по алфавиту
void CreatePassword::AlphabetSort()
{
    List<String^>^ temp_lines = gcnew List<String^>();
    List<String^>^ lines = gcnew List<String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ words = line->Split(' ');
        temp_lines->Add(line);
    }
    reader->Close();

    // Сортировка данных по алфавиту
    for each (Char symb in Alphabet)
    {
        for each (String ^ line in temp_lines)
        {
            if (line[0] == symb)
            {
                lines->Add(line);
            }
        }
    }

    // Перезапись отсортированных данных
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (String ^ line in lines) writer->WriteLine(line);

    writer->Close();
}
void CreatePassword::ReversedAlphabetSort()
{
    int size = 0;
    List<String^>^ temp_lines = gcnew List<String^>();
    List<String^>^ lines = gcnew List<String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ words = line->Split(' ');
        temp_lines->Add(line);
        size++;
    }
    reader->Close();

    // Сортировка данных по алфавиту(в обратом порядке)
    for (int i = Alphabet->Length - 1; i >= 0; i--)
    {
        Char symb = Alphabet[i];
        for each (String ^ line in temp_lines)
        {
            if (line[0] == symb)
            {
                lines->Add(line);
            }
        }
    }

    // Перезапись отсортированных данных
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (String ^ line in lines) writer->WriteLine(line);

    writer->Close();
}

// Сортировка данных по дате
void CreatePassword::DateSort()
{
    Dictionary<DateTime, String^>^ datesWithLines = gcnew Dictionary<DateTime, String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    // Чтение данных из файла и сохранение во временном словаре
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ parts = line->Split(' ');
        if (parts->Length >= 4)
        {
            String^ dateString = parts[3];
            DateTime dt;
            if (DateTime::TryParseExact(dateString, "dd.MM.yyyy", System::Globalization::CultureInfo::InvariantCulture, System::Globalization::DateTimeStyles::None, dt))
            {
                datesWithLines[dt] = line;
            }
        }
    }
    reader->Close();

    // Сортировка списка дат
    List<DateTime>^ sortedDates = gcnew List<DateTime>(datesWithLines->Keys);
    sortedDates->Sort();

    // Перезапись отсортированных данных в файл
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (DateTime dt in sortedDates)
    {
        writer->WriteLine(datesWithLines[dt]);
    }
    writer->Close();
}

int CreatePassword::CompareDates(String^ line, int day, int month, int year)
{
    array<String^>^ parts = line->Split(' ');
    String^ dateString = parts[3]; // Дата на четвёртом месте
    array<String^>^ dateParts = dateString->Split('.'); // Разделение на компоненты даты
    int day2 = Int32::Parse(dateParts[0]);
    int month2 = Int32::Parse(dateParts[1]);
    int year2 = Int32::Parse(dateParts[2]);

    if (year != year2) return year - year2;
    else if (month != month2) return month - month2;
    else return day - day2;
}
void CreatePassword::ReversedDateSort()
{
    List<String^>^ temp_lines = gcnew List<String^>();
    List<String^>^ lines = gcnew List<String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    // Чтение данных из файла и сохранение во временном списке
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        temp_lines->Add(line);
    }
    reader->Close();

    // Алгоритм сортировки
    for (int i = 0; i < temp_lines->Count; i++)
    {
        // Извлечение даты из строки
        String^ line = temp_lines[i];
        array<String^>^ parts = line->Split(' ');
        String^ dateString = parts[3]; // Дата на четвёртом месте
        array<String^>^ dateParts = dateString->Split('.'); // Разделение на компоненты даты
        int day = Int32::Parse(dateParts[0]);
        int month = Int32::Parse(dateParts[1]);
        int year = Int32::Parse(dateParts[2]);

        // Процедура сортировки вставками
        int j = i;
        while (j > 0 && CompareReversedDates(temp_lines[j - 1], day, month, year) < 0)
        {
            temp_lines[j] = temp_lines[j - 1];
            j--;
        }
        temp_lines[j] = line;
    }

    // Перезапись отсортированных данных в список lines
    for each (String ^ line in temp_lines)
    {
        lines->Add(line);
    }

    // Перезапись отсортированных данных в файл
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (String ^ line in lines)
    {
        writer->WriteLine(line);
    }
    writer->Close();
}
int CreatePassword::CompareReversedDates(String^ line, int day, int month, int year)
{
    array<String^>^ parts = line->Split(' ');
    String^ dateString = parts[3]; // Дата на четвёртом месте
    array<String^>^ dateParts = dateString->Split('.'); // Разделение на компоненты даты
    int day2 = Int32::Parse(dateParts[0]);
    int month2 = Int32::Parse(dateParts[1]);
    int year2 = Int32::Parse(dateParts[2]);

    if (year != year2)
    {
        return year2 - year;
    }
    else if (month != month2)
    {
        return month2 - month;
    }
    else
    {
        return day2 - day;
    }
}

