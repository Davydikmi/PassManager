#include <fstream>

#include "Validator.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

// Реализация метода проверки символов
bool Validator::valid_symbols(String^ str)
{
    // Цикл по каждому символу в строке
    for (int i = 0; i < str->Length; i++)
    {
        bool found = false;

        // Цикл по каждому символу в алфавите
        for each (Char symbol in Alphabet)
        {
            if (str[i] == symbol)
            {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

// Реализация метода проверки на наличие пустых пробелов
bool Validator::NullOrWhiteSpace(String^ input_str)
{
    return !String::IsNullOrWhiteSpace(input_str);
}

// Реализация метода проверки валидности строки
bool Validator::isValidLine(String^ line)
{
    // Разделяем строку по пробелам
    array<String^>^ words = line->Split(' ');
    return words->Length == 3;
}

// Реализация метода проверки валидности данных файла
bool Validator::validateFileData()
{
    StreamReader^ reader = gcnew StreamReader(filepath);

    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ words = line->Split(' ');

        if (!(words->Length == 3))
        {
            reader->Close();
            return false;
        }
        for (int i = 0; i < 3; i++)
        {
            if (!valid_symbols(words[i]))
            {
                reader->Close();
                return false;
            }
        }
    }
    reader->Close();
    return true;
}

// Проверка на существование файла
bool Validator::FileExists()
{
    return File::Exists(filepath);
}

// Реализация метода проверки на число
bool Validator::isDigit(String^ input_str)
{
    int result;
    if (Int32::TryParse(input_str, result))
    {
        return true;
    }
    return false;
}

// Проверка на существование выделенных данных в файле
bool Validator::FindData(String^ Service, String^ login, String^ password)
{
    StreamReader^ reader = gcnew StreamReader(filepath);
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ words = line->Split(' ');

        if (words[0] == Service && words[1] == login && words[2] == password)
        {
            reader->Close();
            return true;
        }
    }

    reader->Close();
    return false;
}

// Проверка введенного значения на макс. длинну
bool Validator::MaxLen(String^ input_str)
{
    if (input_str->Length <= 40)
    {
        return true;
    }
    return false;
}

// Проверка на макс. длинну генерируемого пароля
bool Validator::MaxLenGenerated(String^ input_str)
{
    int length;
    if (Int32::TryParse(input_str, length))
    {
        if (0 < length && length <= 40)
        {
            return true;
        }
    }
    return false;
    
}


