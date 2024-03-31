#pragma once

namespace PasswordManager 
{
	// ��������� ����� ��� ������� �����������
	public ref struct Converter
	{
		// ����������� � ������ std
		std::string to_string(String^ input_string)
		{
			msclr::interop::marshal_context context;
			std::string str = context.marshal_as<std::string>(input_string);
			return str;
		}

		// ����������� � ������ Marshal
		String^ to_msclr(std::string input_string)
		{
			String^ marshal_string = gcnew String(input_string.c_str());
			return marshal_string;
		}
	};

}