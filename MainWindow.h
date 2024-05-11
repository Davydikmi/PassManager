#pragma once
#include "createWindow.h"
#include "ChangeWindow.h"

namespace PasswordManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listview;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^ create_button;
	private: System::Windows::Forms::Button^ change_button;
	private: System::Windows::Forms::Button^ delete_button;
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::ColumnHeader^ service;
	private: System::Windows::Forms::ColumnHeader^ login;
	private: System::Windows::Forms::ColumnHeader^ password;
	private: System::Windows::Forms::Button^ button1;









	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->listview = (gcnew System::Windows::Forms::ListView());
			this->service = (gcnew System::Windows::Forms::ColumnHeader());
			this->login = (gcnew System::Windows::Forms::ColumnHeader());
			this->password = (gcnew System::Windows::Forms::ColumnHeader());
			this->create_button = (gcnew System::Windows::Forms::Button());
			this->change_button = (gcnew System::Windows::Forms::Button());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listview
			// 
			this->listview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->service, this->login,
					this->password
			});
			this->listview->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listview->FullRowSelect = true;
			this->listview->HideSelection = false;
			this->listview->Location = System::Drawing::Point(14, 12);
			this->listview->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listview->MultiSelect = false;
			this->listview->Name = L"listview";
			this->listview->Size = System::Drawing::Size(460, 579);
			this->listview->TabIndex = 0;
			this->listview->UseCompatibleStateImageBehavior = false;
			this->listview->View = System::Windows::Forms::View::Details;
			this->listview->DoubleClick += gcnew System::EventHandler(this, &MainWindow::listview_DoubleClick);
			// 
			// service
			// 
			this->service->Text = L"Сервис";
			this->service->Width = 153;
			// 
			// login
			// 
			this->login->Text = L"Логин";
			this->login->Width = 160;
			// 
			// password
			// 
			this->password->Text = L"Пароль";
			this->password->Width = 300;
			// 
			// create_button
			// 
			this->create_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->create_button->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_button->Location = System::Drawing::Point(495, 12);
			this->create_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->create_button->Name = L"create_button";
			this->create_button->Size = System::Drawing::Size(145, 41);
			this->create_button->TabIndex = 1;
			this->create_button->Text = L"Создать";
			this->create_button->UseVisualStyleBackColor = true;
			this->create_button->Click += gcnew System::EventHandler(this, &MainWindow::create_button_Click);
			// 
			// change_button
			// 
			this->change_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->change_button->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->change_button->Location = System::Drawing::Point(495, 69);
			this->change_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->change_button->Name = L"change_button";
			this->change_button->Size = System::Drawing::Size(145, 41);
			this->change_button->TabIndex = 2;
			this->change_button->Text = L"Изменить";
			this->change_button->UseVisualStyleBackColor = true;
			this->change_button->Click += gcnew System::EventHandler(this, &MainWindow::change_button_Click);
			// 
			// delete_button
			// 
			this->delete_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->delete_button->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delete_button->Location = System::Drawing::Point(495, 127);
			this->delete_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(145, 41);
			this->delete_button->TabIndex = 3;
			this->delete_button->Text = L"Удалить";
			this->delete_button->UseVisualStyleBackColor = true;
			this->delete_button->Click += gcnew System::EventHandler(this, &MainWindow::delete_button_Click);
			// 
			// reset_button
			// 
			this->reset_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->reset_button->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reset_button->Location = System::Drawing::Point(495, 550);
			this->reset_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(145, 41);
			this->reset_button->TabIndex = 4;
			this->reset_button->Text = L"Сброс";
			this->reset_button->UseVisualStyleBackColor = true;
			this->reset_button->Click += gcnew System::EventHandler(this, &MainWindow::reset_button_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(495, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 54);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сортировать по алфавиту";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 611);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->delete_button);
			this->Controls->Add(this->change_button);
			this->Controls->Add(this->create_button);
			this->Controls->Add(this->listview);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Менеджер паролей";
			this->Activated += gcnew System::EventHandler(this, &MainWindow::MainWindow_Activated);
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - Начало пользовательских функций - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


		//Открытие диалогового окна с созданием пароля
		private: System::Void create_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			createWindow^ createwin = gcnew createWindow();
			createwin->ShowDialog();
		}

		// Копирование в данных в буфер обмена при двойном клике
		private: System::Void listview_DoubleClick(System::Object^ sender, System::EventArgs^ e) 
		{
			ListViewItem^ selectedItem = listview->SelectedItems[0];

			String^ subitem1 = selectedItem->SubItems[1]->Text;
			String^ subitem2 = selectedItem->SubItems[2]->Text;

			String^ formattedText = subitem1 + ":" + subitem2;

			// Копирование строку в буфер обмена
			Clipboard::SetText(formattedText);
			MessageBox::Show("Данные успешно скопированы в буфер обмена!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		// Открытие диалогового окна с изменением
		private: System::Void change_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Validator validator;
			CreatePassword createpass;

			// Проверка на выделенный элемент
			if (listview->SelectedItems->Count != 1)
			{
				MessageBox::Show("   Ошибка! Выделите сервис в таблице, данные которого вы хотите изменить!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			ListViewItem^ selectedItem = listview->SelectedItems[0];
			createpass.Service = selectedItem->SubItems[0]->Text;
			createpass.login = selectedItem->SubItems[1]->Text;
			createpass.password = selectedItem->SubItems[2]->Text;

			ChangeWindow^ changewin = gcnew ChangeWindow(createpass.Service, createpass.login, createpass.password);
			changewin->ShowDialog();
		}

		// Кнопка удаления элемента
		private: System::Void delete_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Validator validator;
			CreatePassword createpass;

			// Проверка на выделенный элемент
			if (listview->SelectedItems->Count != 1)
			{
				MessageBox::Show("   Ошибка! Выделите сервис в таблице, данные которого вы хотите удалить!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Получение данных из выбранного элемента
			ListViewItem^ selectedItem = listview->SelectedItems[0];
			createpass.Service = selectedItem->SubItems[0]->Text;
			createpass.login = selectedItem->SubItems[1]->Text;
			createpass.password = selectedItem->SubItems[2]->Text;

			// Потдверждение
			System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены, что хотите удалить данные от сервиса "+createpass.Service+" ?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::No)	return;


			if (!validator.FindData(createpass.Service,createpass.login,createpass.password))
			{
				MessageBox::Show("Ошибка! Не удалось совершить удаление, так как невозможно найти данные в файле!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			createpass.DeleteData();
			MessageBox::Show("Данные от сервиса " + createpass.Service + " успеншно удалены!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}


		// Очистка DB
		private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			CreatePassword createpass;
			System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены, что хотите очистить базу данных?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				createpass.ClearFile();
				listview->Items->Clear();
				MessageBox::Show("База данных успешно очищена!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

	// Функции обновления таблицы с данными
	void update_window()
	{
		CreatePassword createpass;
		Validator validator;

		listview->Items->Clear();
		if (!validator.FileExists())
		{
			MessageBox::Show("Файл с данными не обнаружен!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		else if (!validator.validateFileData())
		{
			System::Windows::Forms::DialogResult result = MessageBox::Show("Файл с данными повреждён. Хотите ли вы очистить его?", "Ошибка", MessageBoxButtons::YesNo, MessageBoxIcon::Error);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				createpass.ClearFile();
				listview->Items->Clear();
			}
			this->Close();
		}
		StreamReader^ reader = gcnew StreamReader("database.txt");
		while (!reader->EndOfStream)
		{
			String^ line = reader->ReadLine();
			array<String^>^ parts = line->Split(' ');
			ListViewItem^ item = gcnew ListViewItem(parts[0]);
			item->SubItems->Add(parts[1]);
			item->SubItems->Add(parts[2]);
			listview->Items->Add(item);
		}
		reader->Close();
	}

	private: System::Void MainWindow_Activated(System::Object^ sender, System::EventArgs^ e)
	{
		update_window();
	}
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		update_window();
	}



};
}
