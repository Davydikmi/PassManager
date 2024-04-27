#pragma once
namespace PasswordManager
{
	public ref struct Validator
	{
		String^ Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&?~=*[]{};:<>,.|`";
		String^ filepath = "database.txt";
		// �������� �� ���������� ��� ���������� ������� � �������
		bool symbol_validation(String^ str)
		{
			// ���� �� ������� ������� � ������
			for (int i = 0; i < str->Length; i++)
			{
				bool found = false;

				// ���� �� ������� ������� � ��������
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

		// �������� �� ������� ������ ��������
		bool NullOrWhiteSpace(String^ input_str)
		{	
			return String::IsNullOrWhiteSpace(input_str);
		}

		bool isValidLine(String^ line)
		{
			// ��������� ������ �� ��������
			array<String^>^ words = line->Split(' ');
			return words->Length == 3;
		}

		bool validateFileData()
		{
			// ��������� ���� ��� ������
			StreamReader^ reader = gcnew StreamReader(filepath);

			// �������� ���������� ���� �����
			bool allLinesValid = true;

			while (!reader->EndOfStream)
			{
				String^ line = reader->ReadLine();

				if (!isValidLine(line))
				{
					// ���� ������ �� �������, ������� ��������� � �������� ���
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
