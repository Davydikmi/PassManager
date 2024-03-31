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
		String^ created_time;
		String^ changed_time;

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

			// Получение текущей даты и времени
			time_t currentTime = time(nullptr);
			struct tm* localTime = localtime(&currentTime);
			std::stringstream ss;
			ss << std::put_time(localTime, "%d.%m.%Y, %H:%M:%S"); 

			created_time = convert.to_msclr(ss.str());
			changed_time = "-";
			ss.clear();
			ss.str("");

			// Добавляем данные
			j[ServiceStr]["login"] = loginStr;
			j[ServiceStr]["password"] = passwordStr;
			j[ServiceStr]["created_time"] = convert.to_string(created_time);
			j[ServiceStr]["changed_time"] = convert.to_string(changed_time);

			// Записываем обновленные данные в файл
			std::ofstream output_file("database.txt");
			output_file << j;
			output_file.close();
		}

		void Input_Random(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb)
		{
			std::string digitsStr = convert.to_string(digits);
			std::string uppercase_lettersStr = convert.to_string(uppercase_letters);
			std::string lowercase_lettersStr = convert.to_string(lowercase_letters);
			std::string special_charactersStr = convert.to_string(special_characters);

			// Вектор, в котором будут храниться допустимые алфавиты
			std::vector<std::string> elements_arr;

			// Добавление в массив только тех элементов, которые выбрал пользователь
			if (Digits) elements_arr.push_back(digitsStr);
			else if (Uppercase) elements_arr.push_back(uppercase_lettersStr);
			else if (Lowercase) elements_arr.push_back(lowercase_lettersStr);
			else if (Special_symb) elements_arr.push_back(special_charactersStr);


		}
		
	};
};
//т.е. функция для обработки данных
//в этой структуре будут только функции записи в файл, чтение из него, генерация пароля
//а уже в кнопках, чекбоксах будут вызываться функции члены, и будут передаваться данные в параметрах
//функции:
//	-запись в файл(пароль, сервис,логин)
//	-генерация пароля(в функцию будет передаваться массив/числа/булеаны для каждого из алфавитов и 
//					  нужные добавляются в массив, уже по сайзу которого будет осущ. рандомный выбор элементов)