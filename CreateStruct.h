#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Collections;

// ќбъ€вление пространства имен и структуры CreatePassword
namespace PasswordManager
{
    public ref struct CreatePassword
    {
        String^ digits = "0123456789";
        String^ uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String^ lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
        String^ special_characters = "!@#$%^&?~=*[]{};:<>,.|`-_";
        String^ Service;
        String^ login;
        String^ password;
        String^ date;
        String^ filepath = "database.txt";
        String^ Alphabet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz_0123456789!@#$%^&?~=*[]{};:<>,.|`-";

        // ‘ункции
        void WriteToFile();
        void random_generating(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb, int length);
        void ClearFile();     
        void DeleteData();
        void ChangeData(String^ changedService, String^ changedLogin, String^ changedPassword);
        void AlphabetSort();
        void ReversedAlphabetSort();
        void DateSort();
        void ReversedDateSort();
    };
}
