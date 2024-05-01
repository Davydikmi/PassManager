#pragma once

using namespace System;
using namespace System::IO;

public ref struct Validator
{
    // Поля
    String^ Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&?~=*[]{};:<>,.|`";
    String^ filepath = "database.txt";


    // Методы
    bool valid_symbols(String^ str);
    bool NullOrWhiteSpace(String^ input_str);
    bool isValidLine(String^ line);
    bool validateFileData();
    bool FileExists();
    bool isDigit(String^ input_str);
    bool doubleServiceValid(String^ service);
    bool FindDelData(String^ Service,String^ login, String^ password);

};
