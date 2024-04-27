#pragma once

namespace PasswordManager
{
	public ref struct GeneratePassword
	{
		// Все допустимые символы для генерации пароля
		String^ digits = "0123456789";
		String^ uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		String^ lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
		String^ special_characters = "!@#$%^&?~=*[]{};:<>,.|`";

		String^ Service;
		String^ login;
		String^ password;
		String^ filepath = "database.txt";

		void WriteToFile(String^& inp_service, String^& inp_login, String^& inp_password)
		{
			// Открываем файл для записи (добавление к концу файла)
			StreamWriter^ writer = gcnew StreamWriter(filepath, true);

			Service = inp_service;
			login = inp_login;
			password = inp_password;

			String^ line = Service + " " + login + " " + password;
			writer->WriteLine(line);

			writer->Close();
		}

		void Input_Random(bool Digits, bool Uppercase, bool Lowercase, bool Special_symb, int length)
		{
			Random^ rand = gcnew Random();

			// Массив, в котором будут храниться допустимые алфавиты
			ArrayList^ elements = gcnew ArrayList();

			// Счётчик кол-ва элементов массива
			int arr_size = 0;
			
			// Добавление в массив только тех элементов, которые выбрал пользователь
			if (Digits) 
			{
				elements->Add(digits);
				arr_size++;
			}
			else if (Uppercase)
			{
				elements->Add(uppercase_letters);
				arr_size++;
			}
			else if (Lowercase) 
			{
				elements->Add(lowercase_letters);
				arr_size++;
			}
			else if (Special_symb) 
			{
				elements->Add(special_characters);
				arr_size++;
			}

			for (int i = 0; i < length; i++)
			{
				int alphabet_index = rand->Next(arr_size);
				int new_symb_index = rand->Next(safe_cast<String^>(elements[alphabet_index])->Length);
				Char new_symb = safe_cast<String^>(elements[alphabet_index])[new_symb_index];
				password += new_symb;
			}

		}
		
	};
};
