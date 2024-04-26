#pragma once
namespace PasswordManager
{
	public ref struct Validator
	{
		Converter convert;
		String^ Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&?~=*[]{};:<>,.|`";
		// Проверка на допустимые все допустимые символы и пробелы
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
					if (InputStr[i] == symbol)
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
		bool NullOrWhiteSpace(String^ input_str)
		{
			std::string str = convert.to_string(input_str);

			// Проверка на пустую строку
			if (str.empty()) return false;

			//Проверка на наличие пробелов в строке
			for (char symb : str)
			{
				if (isspace(symb))
				{
					return false;
				}
			}

			// Если всё ок, то исход true
			return true;
		}

		// Проверка на правильность формата читаемых данных из файла
		bool fileData(String^ input_str)
		{
			std::string filepath = convert.to_string(input_str);
			std::ifstream file(filepath);
			return false;
			//доделать
		}

		// Проверка на успешное чтение/открытие файла
		bool fileExists(String^ input_str)
		{
			std::string filepath = convert.to_string(input_str);
			std::ifstream file(filepath);
			if (file.is_open()) return true;
			else return false;
		}

		bool isDigit(String^ input_str)
		{
			int result;
			if (Int32::TryParse(input_str, result)) return true;
			return false;
		}


	};
}
