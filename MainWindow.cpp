#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <msclr\marshal.h>
#include <msclr\marshal_windows.h>
#include <nlohmann/json.hpp>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "MainWindow.h"
#include "ChangeWindow.h"
#include "createWindow.h"
#include "CreateStruct.h"
#include "Converter.h"
#include "Validator.h"

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	PasswordManager::MainWindow window;
	Application::Run(% window);
}

/*
Класс Валидации:
-допустимые символы(вложенный цикл пробегается по всем стингу со всеми значениями,пробел тоже символ)			готово
-нулл ор уайт спэйс																								готово
-длинна пароля(от 4 до 40)																						готово
-проверка входных данных из файла																				в процессе
-проверка на существование файла																				готово
*/