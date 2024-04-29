#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Collections;

// ���������� ������������ ���� � ��������� CreatePassword
namespace PasswordManager
{
    public ref struct CreatePassword
    {
        String^ digits = "0123456789";
        String^ uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String^ lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
        String^ special_characters = "!@#$%^&?~=*[]{};:<>,.|`";
        String^ Service;
        String^ login;
        String^ password;
        String^ filepath = "database.txt";

        // ������
        void WriteToFile();
        void random_generating(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb, int length);
    };
}
