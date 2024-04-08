#pragma once
namespace PasswordManager
{
	public ref struct Validator
	{
		Converter convert;
		String^ Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&?~=*[]{};:<>,.|`";
		// Проверка на допустимые все допустимые символы и пробел
		bool symbol_validation(String^ input_str)
		{
			std::string InputStr = convert.to_string(input_str);
			std::string alphabet = convert.to_string(Alphabet);

			// Аглоритм проверки символов в пароле
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
				// Исход: обнаружен недопустимый символ(не найден в алфавите)
				if (!switcher)
				{
					return false;
					break;
				}
			}

			// Исход: всё прошло успешно
			return true;
			
		}
		bool NullOrWhiteSpace_validation(String^ input_str)
		{
			std::string InputStr = convert.to_string(input_str);

			//суки, почему нету здесь нету такой функции
		}
	};
}
