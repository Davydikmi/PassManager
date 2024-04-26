#pragma once
#include "Converter.h"

namespace PasswordManager
{
	public ref struct GeneratePassword
	{
		// Экземпляр для удобной конвертации строк
		Converter convert;

		// Все допустимые символы для генерации пароля
		String^ digits = "0123456789";
		String^ uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		String^ lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
		String^ special_characters = "!@#$%^&?~=*[]{};:<>,.|`";

		String^ Service;
		String^ login;
		String^ password;

		void WriteToFile()
		{
			std::string ServiceStr = convert.to_string(Service);
			std::string loginStr = convert.to_string(login);
			std::string passwordStr = convert.to_string(password);

			
			// Открытие TXT файла и передача данных в формат JSON
			std::ifstream input_file("database.txt");
			nlohmann::json j;
			input_file >> j;
			input_file.close();

			// Добавляем данные
			j[ServiceStr]["login"] = loginStr;
			j[ServiceStr]["password"] = passwordStr;

			// Записываем обновленные данные в файл
			std::ofstream output_file("database.txt");
			output_file << j;
			output_file.close();
		}

		void Input_Random(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb, int length)
		{
			Random^ rand = gcnew Random();

			std::string digitsStr = convert.to_string(digits);
			std::string uppercase_lettersStr = convert.to_string(uppercase_letters);
			std::string lowercase_lettersStr = convert.to_string(lowercase_letters);
			std::string special_charactersStr = convert.to_string(special_characters);

			// Вектор, в котором будут храниться допустимые алфавиты
			std::vector<std::string> elements;

			// Добавление в массив только тех элементов, которые выбрал пользователь
			if (Digits) elements.push_back(digitsStr);
			else if (Uppercase) elements.push_back(uppercase_lettersStr);
			else if (Lowercase) elements.push_back(lowercase_lettersStr);
			else if (Special_symb) elements.push_back(special_charactersStr);

			for (int i = 0; i < length; i++)
			{
				int alphabet_index = rand->Next(elements.size());
				password += elements[alphabet_index][elements[alphabet_index].size()];
			}

		}
		
	};
};
