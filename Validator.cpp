#include "Validator.h"

using namespace System;
using namespace System::IO;

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
    // Открываем файл для чтения
    StreamReader^ reader = gcnew StreamReader(filepath);

    // Проверка валидности всех строк
    bool allLinesValid = true;

    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();

        if (!isValidLine(line))
        {
            // Если строка не валидна, выводим сообщение и отмечаем это
            Console::WriteLine("Invalid line: " + line);
            allLinesValid = false;
        }
    }
    reader->Close();

    return allLinesValid;
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
