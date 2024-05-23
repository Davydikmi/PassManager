#pragma once

using namespace System;
using namespace System::IO;

public ref struct Validator
{
    // Поля
    String^ Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&?~=*[]{};:<>,.|`_-";
    String^ filepath = "database.txt";


    // Методы
    bool valid_symbols(String^ str);
    bool date_validation(String^ line);
    bool NullOrWhiteSpace(String^ input_str);
    bool isValidLine(String^ line);
    bool validateFileData();
    bool FileExists();
    bool isDigit(String^ input_str);
    bool FindData(String^ Service,String^ login, String^ password,String^ date);
    bool MaxLen(String^ input_str);
    bool MaxLenGenerated(String^ input_str);

};
