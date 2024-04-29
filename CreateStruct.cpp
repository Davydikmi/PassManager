#include "CreateStruct.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace PasswordManager;

// ���������� ������ WriteToFile
void GeneratePassword::WriteToFile(String^& inp_service, String^& inp_login, String^& inp_password)
{
    // ��������� ���� ��� ������ (���������� � ����� �����)
    StreamWriter^ writer = gcnew StreamWriter(filepath, true);

    Service = inp_service;
    login = inp_login;
    password = inp_password;

    String^ line = Service + " " + login + " " + password;
    writer->WriteLine(line);

    writer->Close();
}

// ���������� ������ Input_Random
void GeneratePassword::random_generating(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb, int length)
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
