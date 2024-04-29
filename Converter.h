#pragma once

#include <string>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>

using namespace System;

// Объявление структуры Converter
public ref struct ConverterStruct
{
    // Конвертация из String^ в std::string
    std::string to_string(String^ input_string);

    // Конвертация из std::string в String^
    String^ to_msclr(std::string input_string);
};
