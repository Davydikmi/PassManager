#pragma once

// ���������� ��������� Converter
public ref struct ConverterStruct
{
    // ����������� �� String^ � std::string
    std::string to_string(String^ input_string);

    // ����������� �� std::string � String^
    String^ to_msclr(std::string input_string);
};
