#pragma once

using namespace System;
using namespace System::IO;

public ref struct Validator
{
    // ����
    String^ Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&?~=*[]{};:<>,.|`";
    String^ filepath = "database.txt";


    // ������
    bool valid_symbols(String^ str);
    bool NullOrWhiteSpace(String^ input_str);
    bool isValidLine(String^ line);
    bool validateFileData();
    bool FileExists();
    bool isDigit(String^ input_str);
    bool FindData(String^ Service,String^ login, String^ password);
    bool MaxLen(String^ input_str);
    bool MaxLenGenerated(String^ input_str);

};
