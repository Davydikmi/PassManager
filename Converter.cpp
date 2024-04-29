#include "Converter.h"

using namespace System;


// ���������� ������ to_string
std::string ConverterStruct::to_string(String^ input_string)
{
    // ������� marshal_context ��� �����������
    msclr::interop::marshal_context context;
    // ����������� String^ � std::string
    std::string str = context.marshal_as<std::string>(input_string);
    return str;
}

// ���������� ������ to_msclr
String^ ConverterStruct::to_msclr(std::string input_string)
{
    // ����������� std::string � String^
    String^ marshal_string = gcnew String(input_string.c_str());
    return marshal_string;
}
