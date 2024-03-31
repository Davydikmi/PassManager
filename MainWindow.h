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
	private: System::Windows::Forms::ColumnHeader^ create_date;
	private: System::Windows::Forms::ColumnHeader^ change_date;






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
			this->listview = (gcnew System::Windows::Forms::ListView());
			this->service = (gcnew System::Windows::Forms::ColumnHeader());
			this->login = (gcnew System::Windows::Forms::ColumnHeader());
			this->password = (gcnew System::Windows::Forms::ColumnHeader());
			this->create_date = (gcnew System::Windows::Forms::ColumnHeader());
			this->change_date = (gcnew System::Windows::Forms::ColumnHeader());
			this->create_button = (gcnew System::Windows::Forms::Button());
			this->change_button = (gcnew System::Windows::Forms::Button());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listview
			// 
			this->listview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->service, this->login,
					this->password, this->create_date, this->change_date
			});
			this->listview->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listview->HideSelection = false;
			this->listview->Location = System::Drawing::Point(14, 12);
			this->listview->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listview->Name = L"listview";
			this->listview->Size = System::Drawing::Size(508, 579);
			this->listview->TabIndex = 0;
			this->listview->UseCompatibleStateImageBehavior = false;
			this->listview->View = System::Windows::Forms::View::Details;
			// 
			// service
			// 
			this->service->Text = L"Сервис";
			this->service->Width = 89;
			// 
			// login
			// 
			this->login->Text = L"Логин";
			this->login->Width = 84;
			// 
			// password
			// 
			this->password->Text = L"Пароль";
			this->password->Width = 101;
			// 
			// create_date
			// 
			this->create_date->Text = L"Дата создания";
			this->create_date->Width = 110;
			// 
			// change_date
			// 
			this->change_date->Text = L"Дата изменения";
			this->change_date->Width = 126;
			// 
			// create_button
			// 
			this->create_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->create_button->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_button->Location = System::Drawing::Point(544, 12);
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
			this->change_button->Location = System::Drawing::Point(544, 69);
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
			this->delete_button->Location = System::Drawing::Point(544, 127);
			this->delete_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(145, 41);
			this->delete_button->TabIndex = 3;
			this->delete_button->Text = L"Удалить";
			this->delete_button->UseVisualStyleBackColor = true;
			// 
			// reset_button
			// 
			this->reset_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->reset_button->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reset_button->Location = System::Drawing::Point(544, 550);
			this->reset_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(145, 41);
			this->reset_button->TabIndex = 4;
			this->reset_button->Text = L"Сброс";
			this->reset_button->UseVisualStyleBackColor = true;
			this->reset_button->Click += gcnew System::EventHandler(this, &MainWindow::reset_button_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 611);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->delete_button);
			this->Controls->Add(this->change_button);
			this->Controls->Add(this->create_button);
			this->Controls->Add(this->listview);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Менеджер паролей";
			this->ResumeLayout(false);

		}
#pragma endregion
	
		private: System::Void create_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			createWindow^ createwin = gcnew createWindow();
			createwin->ShowDialog();
		}
		private: System::Void change_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			ChangeWindow^ changewin = gcnew ChangeWindow();
			changewin->ShowDialog();
		}
		private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены, что хотите очистить базу данных?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk);
			if (result == System::Windows::Forms::DialogResult::Yes) listview->Items->Clear();
		}
};
}
