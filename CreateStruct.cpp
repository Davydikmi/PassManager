#include <fstream>

#include "CreateStruct.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace PasswordManager;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

// ���������� ������ WriteToFile
void CreatePassword::WriteToFile()
{
    // ��������� ������� ����
    DateTime currentDateOnly = DateTime::Now.Date;
    String^ currentDateStr = currentDateOnly.ToString("dd.MM.yyyy");

    // ��������� ���� ��� ������ (���������� � ����� �����)
    StreamWriter^ writer = gcnew StreamWriter(filepath, true);

    String^ line = Service + " " + login + " " + password + " " + currentDateStr;
    writer->WriteLine(line);
    writer->Close();
}

// ���������� ������ Input_Random
void CreatePassword::random_generating(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb, int length)
{
    Random^ rand = gcnew Random();

    // ������, � ������� ����� ��������� ���������� ��������
    ArrayList^ elements = gcnew ArrayList();

    // ������� ���������� ��������� �������
    int arr_size = 0;

    // ���������� � ������ ������ ��� ���������, ������� ������ ������������
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

    // ��������� ������ � �������������� ��������� ���������
    for (int i = 0; i < length; i++)
    {
        int alphabet_index = rand->Next(arr_size);
        int new_symb_index = rand->Next(safe_cast<String^>(elements[alphabet_index])->Length);
        Char new_symb = safe_cast<String^>(elements[alphabet_index])[new_symb_index];
        password += new_symb;
    }
}

// ����� ������� �����
void CreatePassword::ClearFile()
{
    StreamWriter^ writer = gcnew StreamWriter(filepath,false);

    writer->Write(String::Empty);
    writer->Close();
}

// �������� ���������� ������������� ������
void CreatePassword::DeleteData()
{
    List<String^>^ lines = gcnew List<String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    // ������ �� ����� � ������
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        String^ record = Service + " " + login + " " + password + " " + date;

        if (line != record)
        {
            // ���� ������ �� ������������� ��������� ������, �� ��� ����������� � ������
            lines->Add(line);
        }
    }
    reader->Close();


    // ������ � ���� 
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);

    for each (String^ line in lines) writer->WriteLine(line);

    writer->Close();
}

// ��������� ������
void CreatePassword::ChangeData(String^ changedService, String^ changedLogin, String^ changedPassword)
{
    List<String^>^ lines = gcnew List<String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ words = line->Split(' ');

        // ������ ������ � �������
        if (words[0] == Service && words[1] == login && words[2] == password)
        {
            //��������� ������� ���� ��������� ������
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

    // ���������� ���������� ������
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (String ^ line in lines) writer->WriteLine(line);

    writer->Close();
}

// ���������� ������ �� ��������
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

    // ���������� ������ �� ��������
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

    // ���������� ��������������� ������
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

    // ���������� ������ �� ��������(� ������� �������)
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

    // ���������� ��������������� ������
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (String ^ line in lines) writer->WriteLine(line);

    writer->Close();
}

// ���������� ������ �� ����
void CreatePassword::DateSort()
{
    // �������, ��� ���� - ����, � �������� - ����� � �������
    Dictionary<DateTime, String^>^ datesWithLines = gcnew Dictionary<DateTime, String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    // ������ ������ �� ����� � ���������� �� ��������� �������
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ parts = line->Split(' ');

        String^ dateString = parts[3];
        DateTime dt;
        if (DateTime::TryParseExact(dateString, "dd.MM.yyyy", System::Globalization::CultureInfo::InvariantCulture, System::Globalization::DateTimeStyles::None, dt))
        {
            datesWithLines[dt] = line;
        }
        
    }
    reader->Close();

    // ���������� ������ ���
    List<DateTime>^ sortedDates = gcnew List<DateTime>(datesWithLines->Keys);
    sortedDates->Sort();

    // ���������� ��������������� ������ � ����
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    // ������� �� ���� ����� � ������������� �� � ������� ������
    for each (DateTime dt in sortedDates) writer->WriteLine(datesWithLines[dt]);
    writer->Close();
}
void CreatePassword::ReversedDateSort()
{
    Dictionary<DateTime, String^>^ datesWithLines = gcnew Dictionary<DateTime, String^>();
    StreamReader^ reader = gcnew StreamReader(filepath);

    // ������ ������ �� ����� � ���������� �� ��������� �������
    while (!reader->EndOfStream)
    {
        String^ line = reader->ReadLine();
        array<String^>^ parts = line->Split(' ');
        String^ dateString = parts[3];
        DateTime dt;
        if (DateTime::TryParseExact(dateString, "dd.MM.yyyy", System::Globalization::CultureInfo::InvariantCulture, System::Globalization::DateTimeStyles::None, dt))
        {
            datesWithLines[dt] = line;
        }
        
    }
    reader->Close();

    // ���������� ������ ��� �� ��������
    List<DateTime>^ sortedDates = gcnew List<DateTime>(datesWithLines->Keys);
    sortedDates->Sort();
    sortedDates->Reverse();

    // ���������� ��������������� ������ � ����
    StreamWriter^ writer = gcnew StreamWriter(filepath, false);
    for each (DateTime dt in sortedDates) writer->WriteLine(datesWithLines[dt]);
    writer->Close();
}
