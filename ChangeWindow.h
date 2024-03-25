#pragma once

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
		ChangeWindow(void)
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
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ service_textbox;
	private: System::Windows::Forms::TextBox^ login_textbox;
	private: System::Windows::Forms::TextBox^ password_textbox;



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
			this->service_label = (gcnew System::Windows::Forms::Label());
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->service_textbox = (gcnew System::Windows::Forms::TextBox());
			this->login_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
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
			this->password_textbox->Text = L"\r\n";
			// 
			// ChangeWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 261);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->login_textbox);
			this->Controls->Add(this->service_textbox);
			this->Controls->Add(this->submit_button);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->service_label);
			this->Name = L"ChangeWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Изменение пароля";
			this->Load += gcnew System::EventHandler(this, &ChangeWindow::ChangeWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangeWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		//добавить 
	}
};
}
