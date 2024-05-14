#pragma once
#include "CreateStruct.h"
#include "Validator.h"

namespace PasswordManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChangeWindow
	/// </summary>
	public ref class ChangeWindow : public System::Windows::Forms::Form
	{
	public:
		ChangeWindow(String^ service, String^ login, String^ password)
		{
			InitializeComponent();
			this->service = service;
			this->login = login;
			this->password = password;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ChangeWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ service_label;
	private: System::Windows::Forms::Label^ login_label;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::Button^ submit_button;

	// Переменные для автоматического заполнения текстбоксов
	private: String^ service;
	private: String^ login;
	private: String^ password;

	protected:

	protected:



	private: System::Windows::Forms::TextBox^ service_textbox;
	private: System::Windows::Forms::TextBox^ login_textbox;
	private: System::Windows::Forms::TextBox^ password_textbox;
	private: System::Windows::Forms::Label^ label1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangeWindow::typeid));
			this->service_label = (gcnew System::Windows::Forms::Label());
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->service_textbox = (gcnew System::Windows::Forms::TextBox());
			this->login_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// service_label
			// 
			this->service_label->AutoSize = true;
			this->service_label->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->service_label->Location = System::Drawing::Point(8, 53);
			this->service_label->Name = L"service_label";
			this->service_label->Size = System::Drawing::Size(75, 23);
			this->service_label->TabIndex = 0;
			this->service_label->Text = L"Сервис: ";
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_label->Location = System::Drawing::Point(8, 93);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(66, 23);
			this->login_label->TabIndex = 1;
			this->login_label->Text = L"Логин: ";
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password_label->Location = System::Drawing::Point(8, 133);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(79, 23);
			this->password_label->TabIndex = 2;
			this->password_label->Text = L"Пароль: ";
			// 
			// submit_button
			// 
			this->submit_button->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->submit_button->Location = System::Drawing::Point(203, 207);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(136, 42);
			this->submit_button->TabIndex = 3;
			this->submit_button->Text = L"Подтвердить";
			this->submit_button->UseVisualStyleBackColor = true;
			this->submit_button->Click += gcnew System::EventHandler(this, &ChangeWindow::submit_button_Click);
			// 
			// service_textbox
			// 
			this->service_textbox->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->service_textbox->Location = System::Drawing::Point(93, 49);
			this->service_textbox->Name = L"service_textbox";
			this->service_textbox->Size = System::Drawing::Size(246, 27);
			this->service_textbox->TabIndex = 4;
			// 
			// login_textbox
			// 
			this->login_textbox->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_textbox->Location = System::Drawing::Point(93, 89);
			this->login_textbox->Name = L"login_textbox";
			this->login_textbox->Size = System::Drawing::Size(246, 27);
			this->login_textbox->TabIndex = 5;
			// 
			// password_textbox
			// 
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password_textbox->Location = System::Drawing::Point(93, 129);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(246, 27);
			this->password_textbox->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 23);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Введите новые данные";
			// 
			// ChangeWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->login_textbox);
			this->Controls->Add(this->service_textbox);
			this->Controls->Add(this->submit_button);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->service_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ChangeWindow";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Изменение пароля";
			this->Load += gcnew System::EventHandler(this, &ChangeWindow::ChangeWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - Начало пользовательских функций - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
#pragma endregion

	private: System::Void ChangeWindow_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// Заполнение полей ввода старыми данными
		service_textbox->Text = service;
		login_textbox->Text = login;
		password_textbox->Text = password;
	}
	private: System::Void submit_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CreatePassword createpass;
		Validator validator;

		//Старые данные
		createpass.Service = service;
		createpass.login = login;
		createpass.password = password;

		// Новые данные
		String^ changedService = service_textbox->Text;
		String^ changedLogin = login_textbox->Text;
		String^ changedPassword = password_textbox->Text;

		// Валидация
		if (!(validator.valid_symbols(changedService) && validator.NullOrWhiteSpace(changedService)))
		{
			MessageBox::Show("В поле «Сервис» введено неверное значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (!validator.MaxLen(changedService))
		{
			MessageBox::Show("Максимальная длинна сервиса должна быть не более 40 символов!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (!(validator.valid_symbols(changedLogin) && validator.NullOrWhiteSpace(changedLogin)))
		{
			MessageBox::Show("В поле «Логин» введено неверное значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (!validator.MaxLen(changedLogin))
		{
			MessageBox::Show("Максимальная длинна логина должна быть не более 40 символов!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (!(validator.valid_symbols(changedPassword) && validator.NullOrWhiteSpace(changedPassword)))
		{
			MessageBox::Show("В поле «Пароль» введено неверное значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (!validator.MaxLen(changedPassword))
		{
			MessageBox::Show("Максимальная длинна пароля должна быть не более 40 символов!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (!validator.FileExists())
		{
			MessageBox::Show("Файл базы данных не обнаружен!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (!validator.validateFileData())
		{
			System::Windows::Forms::DialogResult result = MessageBox::Show("Файл с данными повреждён. Хотите ли вы очистить его?", "Ошибка", MessageBoxButtons::YesNo, MessageBoxIcon::Error);
			if (result == System::Windows::Forms::DialogResult::Yes) createpass.ClearFile();
			return;
		}

		createpass.ChangeData(changedService,changedLogin,changedPassword);
		MessageBox::Show("Данные успешно изменены!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		this->Close();
	}
};
}
