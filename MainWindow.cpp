#include<string>
#include<vector>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <msclr\marshal.h>
#include <msclr\marshal_windows.h>
#include <nlohmann/json.hpp>


#include "MainWindow.h"
#include "ChangeWindow.h"
#include "createWindow.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	PasswordManager::MainWindow window;
	Application::Run(% window);

}

