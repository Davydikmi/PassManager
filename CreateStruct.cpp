#include <fstream>

#include "CreateStruct.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace PasswordManager;
using namespace System::Collections::Generic;

// Реализация метода WriteToFile
void CreatePassword::WriteToFile()
{
    // Открываем файл для записи (добавление к концу файла)
    StreamWriter^ writer = gcnew StreamWriter(filepath, true);

    String^ line = Service + " " + login + " " + password;
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

void CreatePassword::ClearFile()
{
    StreamWriter^ writer = gcnew StreamWriter(filepath,false);

    writer->Write(String::Empty);
    writer->Close();
}

void CreatePassword::DeleteData()
{
    List<String^>^ lines = gcnew List<String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    // Чтение из файла в массив
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        String^ record = Service + " " + login + " " + password;

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
            Service = changedService;
            login = changedLogin;
            password = changedPassword;
            line = Service + " " + login + " " + password;
        }
        lines->Add(line);
    }
    reader->Close();

    // Перезапись измененных данных
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (String ^ line in lines) writer->WriteLine(line);

    writer->Close();
}
