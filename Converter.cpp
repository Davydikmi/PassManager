#include "Converter.h"

using namespace System;


// Реализация метода to_string
std::string ConverterStruct::to_string(String^ input_string)
{
    // Создаем marshal_context для конвертации
    msclr::interop::marshal_context context;
    // Конвертация String^ в std::string
    std::string str = context.marshal_as<std::string>(input_string);
    return str;
}

// Реализация метода to_msclr
String^ ConverterStruct::to_msclr(std::string input_string)
{
    // Конвертация std::string в String^
    String^ marshal_string = gcnew String(input_string.c_str());
    return marshal_string;
}
