#include "Validator.h"

using namespace System;
using namespace System::IO;

// ���������� ������ �������� ��������
bool Validator::valid_symbols(String^ str)
{
    // ���� �� ������� ������� � ������
    for (int i = 0; i < str->Length; i++)
    {
        bool found = false;

        // ���� �� ������� ������� � ��������
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

// ���������� ������ �������� �� ������� ������ ��������
bool Validator::NullOrWhiteSpace(String^ input_str)
{
    return !String::IsNullOrWhiteSpace(input_str);
}

// ���������� ������ �������� ���������� ������
bool Validator::isValidLine(String^ line)
{
    // ��������� ������ �� ��������
    array<String^>^ words = line->Split(' ');
    return words->Length == 3;
}

// ���������� ������ �������� ���������� ������ �����
bool Validator::validateFileData()
{
    StreamReader^ reader = gcnew StreamReader(filepath);

    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ words = line->Split(' ');

        if (!(words->Length == 3))
        {
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

// �������� �� ������ �����(������ ������ ���� ������)
bool Validator::doubleServiceValid(String^ service)
{
    StreamReader^ reader = gcnew StreamReader(filepath);
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ words = line->Split(' ');
        if (words[0] == service)
        {
            reader->Close();
            return false;
        }

    }
    reader->Close();
    return true;
}

// �������� �� ������������� �����
bool Validator::FileExists()
{
    return File::Exists(filepath);
}

// ���������� ������ �������� �� �����
bool Validator::isDigit(String^ input_str)
{
    int result;
    if (Int32::TryParse(input_str, result))
    {
        return true;
    }
    return false;
}



