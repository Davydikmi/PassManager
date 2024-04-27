#pragma once
namespace PasswordManager
{
	public ref struct Validator
	{
		String^ Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&?~=*[]{};:<>,.|`";
		String^ filepath = "database.txt";
		// Проверка на допустимые все допустимые символы и пробелы
		bool symbol_validation(String^ str)
		{
			// Цикл по каждому символу в строке
			for (int i = 0; i < str->Length; i++)
			{
				bool found = false;

				// Цикл по каждому символу в алфавите
				for each (Char symbol in Alphabet)
				{
					if (str[i] == symbol)
					{
						found = true;
						break;
					}
				}
				if (!found) return false;
			}
			return true;
		}

		// Проверка на наличие пустых пробелов
		bool NullOrWhiteSpace(String^ input_str)
		{	
			return String::IsNullOrWhiteSpace(input_str);
		}

		bool isValidLine(String^ line)
		{
			// Разделяем строку по пробелам
			array<String^>^ words = line->Split(' ');
			return words->Length == 3;
		}

		bool validateFileData()
		{
			// Открываем файл для чтения
			StreamReader^ reader = gcnew StreamReader(filepath);

			// Проверка валидности всех строк
			bool allLinesValid = true;

			while (!reader->EndOfStream)
			{
				String^ line = reader->ReadLine();

				if (!isValidLine(line))
				{
					// Если строка не валидна, выводим сообщение и отмечаем это
					Console::WriteLine("Invalid line: " + line);
					allLinesValid = false;
				}
			}
			reader->Close();

			return allLinesValid;
		}

		bool isDigit(String^ input_str)
		{
			int result;
			if (Int32::TryParse(input_str, result)) return true;
			return false;
		}

	};
}
