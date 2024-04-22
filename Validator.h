#pragma once
namespace PasswordManager
{
	public ref struct Validator
	{
		Converter convert;
		String^ Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&?~=*[]{};:<>,.|`";
		// �������� �� ���������� ��� ���������� ������� � ������
		bool symbol_validation(String^ input_str)
		{
			std::string InputStr = convert.to_string(input_str);
			std::string alphabet = convert.to_string(Alphabet);

			// �������� �������� �������� � ������
			for (int i = 0; i < InputStr.length(); i++)
			{
				bool switcher = false;
				for (char symbol : alphabet)
				{
					if (InputStr[i] == symbol)
					{
						switcher = true;
						break;
					}
				}
				// �����: ��������� ������������ ������(�� ������ � ��������)
				if (!switcher)
				{
					return false;
					break;
				}
			}

			// �����: �� ������ �������
			return true;
			
		}
		bool NullOrWhiteSpace_validation(String^ input_str)
		{
			std::string str = convert.to_string(input_str);

			// �������� �� ������ ������
			if (str.empty()) return false;

			//�������� �� ������� �������� � ������
			for (char symb : str)
			{
				if (isspace(symb))
				{
					return false;
				}
			}

			// ���� �� ��, �� ����� true
			return true;
		}

		bool length_validation(String^ input_str)
		{
			std::string str = convert.to_string(input_str);
			if (0 < str.length() && str.length() <= 40)
			{
				return true;
			}
			else return false;
		}

		// �������� �� ������������ ������� �������� ������ �� �����
		bool fileData_validation(String^ input_str)
		{
			std::string filepath = convert.to_string(input_str);
			std::ifstream file(filepath);
			//��������
		}

		// �������� �� �������� ������/�������� �����
		bool fileExists_validation(String^ input_str)
		{
			std::string filepath = convert.to_string(input_str);
			std::ifstream file(filepath);
			if (file.is_open()) return true;
			else return false;
		}
	};
}
