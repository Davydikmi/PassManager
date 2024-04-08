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
					if (InputStr[i] == symbol && InputStr[i] != ' ')
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
			std::string InputStr = convert.to_string(input_str);

			//����, ������ ���� ����� ���� ����� �������
		}
	};
}
