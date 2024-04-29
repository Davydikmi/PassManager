#include "CreateStruct.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace PasswordManager;

// Реализация метода WriteToFile
void GeneratePassword::WriteToFile(String^& inp_service, String^& inp_login, String^& inp_password)
{
    // Открываем файл для записи (добавление к концу файла)
    StreamWriter^ writer = gcnew StreamWriter(filepath, true);

    Service = inp_service;
    login = inp_login;
    password = inp_password;

    String^ line = Service + " " + login + " " + password;
    writer->WriteLine(line);

    writer->Close();
}

// Реализация метода Input_Random
void GeneratePassword::random_generating(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb, int length)
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
