#pragma once

namespace PasswordManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для createWindow
	/// </summary>
	public ref class createWindow : public System::Windows::Forms::Form
	{
	public:
		createWindow(void)
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
		~createWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ password_textbox;
	protected:
	private: System::Windows::Forms::TextBox^ login_textbox;
	private: System::Windows::Forms::TextBox^ service_textbox;
	private: System::Windows::Forms::Button^ submit_button;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::Label^ login_label;
	private: System::Windows::Forms::Label^ service_label;
	private: System::Windows::Forms::RadioButton^ random_RB;

	private: System::Windows::Forms::RadioButton^ by_hand_RB;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ numbers_CB;
	private: System::Windows::Forms::CheckBox^ uppercase_CB;
	private: System::Windows::Forms::CheckBox^ lowercase_CB;
	private: System::Windows::Forms::CheckBox^ special_symb_CB;
	private: System::Windows::Forms::Button^ create_button;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;



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
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->login_textbox = (gcnew System::Windows::Forms::TextBox());
			this->service_textbox = (gcnew System::Windows::Forms::TextBox());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->service_label = (gcnew System::Windows::Forms::Label());
			this->random_RB = (gcnew System::Windows::Forms::RadioButton());
			this->by_hand_RB = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numbers_CB = (gcnew System::Windows::Forms::CheckBox());
			this->uppercase_CB = (gcnew System::Windows::Forms::CheckBox());
			this->lowercase_CB = (gcnew System::Windows::Forms::CheckBox());
			this->special_symb_CB = (gcnew System::Windows::Forms::CheckBox());
			this->create_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// password_textbox
			// 
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password_textbox->Location = System::Drawing::Point(97, 166);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(246, 27);
			this->password_textbox->TabIndex = 13;
			this->password_textbox->Text = L"\r\n";
			// 
			// login_textbox
			// 
			this->login_textbox->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_textbox->Location = System::Drawing::Point(97, 127);
			this->login_textbox->Name = L"login_textbox";
			this->login_textbox->Size = System::Drawing::Size(246, 27);
			this->login_textbox->TabIndex = 12;
			// 
			// service_textbox
			// 
			this->service_textbox->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->service_textbox->Location = System::Drawing::Point(97, 87);
			this->service_textbox->Name = L"service_textbox";
			this->service_textbox->Size = System::Drawing::Size(246, 27);
			this->service_textbox->TabIndex = 11;
			// 
			// submit_button
			// 
			this->submit_button->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->submit_button->Location = System::Drawing::Point(207, 517);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(136, 42);
			this->submit_button->TabIndex = 10;
			this->submit_button->Text = L"Подтвердить";
			this->submit_button->UseVisualStyleBackColor = true;
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password_label->Location = System::Drawing::Point(16, 166);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(79, 23);
			this->password_label->TabIndex = 9;
			this->password_label->Text = L"Пароль: ";
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_label->Location = System::Drawing::Point(16, 127);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(66, 23);
			this->login_label->TabIndex = 8;
			this->login_label->Text = L"Логин: ";
			// 
			// service_label
			// 
			this->service_label->AutoSize = true;
			this->service_label->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->service_label->Location = System::Drawing::Point(16, 87);
			this->service_label->Name = L"service_label";
			this->service_label->Size = System::Drawing::Size(75, 23);
			this->service_label->TabIndex = 7;
			this->service_label->Text = L"Сервис: ";
			// 
			// random_RB
			// 
			this->random_RB->AutoSize = true;
			this->random_RB->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->random_RB->Location = System::Drawing::Point(171, 21);
			this->random_RB->Name = L"random_RB";
			this->random_RB->Size = System::Drawing::Size(172, 27);
			this->random_RB->TabIndex = 14;
			this->random_RB->TabStop = true;
			this->random_RB->Text = L"Генерация пароля";
			this->random_RB->UseVisualStyleBackColor = true;
			// 
			// by_hand_RB
			// 
			this->by_hand_RB->AutoSize = true;
			this->by_hand_RB->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->by_hand_RB->Location = System::Drawing::Point(16, 21);
			this->by_hand_RB->Name = L"by_hand_RB";
			this->by_hand_RB->Size = System::Drawing::Size(128, 27);
			this->by_hand_RB->TabIndex = 15;
			this->by_hand_RB->TabStop = true;
			this->by_hand_RB->Text = L"Ручной ввод";
			this->by_hand_RB->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Silver;
			this->pictureBox1->Location = System::Drawing::Point(0, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(354, 3);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// numbers_CB
			// 
			this->numbers_CB->AutoSize = true;
			this->numbers_CB->Location = System::Drawing::Point(6, 27);
			this->numbers_CB->Name = L"numbers_CB";
			this->numbers_CB->Size = System::Drawing::Size(79, 25);
			this->numbers_CB->TabIndex = 17;
			this->numbers_CB->Text = L"Цифры";
			this->numbers_CB->UseVisualStyleBackColor = true;
			// 
			// uppercase_CB
			// 
			this->uppercase_CB->AutoSize = true;
			this->uppercase_CB->Location = System::Drawing::Point(167, 27);
			this->uppercase_CB->Name = L"uppercase_CB";
			this->uppercase_CB->Size = System::Drawing::Size(159, 25);
			this->uppercase_CB->TabIndex = 18;
			this->uppercase_CB->Text = L"Прописные буквы";
			this->uppercase_CB->UseVisualStyleBackColor = true;
			// 
			// lowercase_CB
			// 
			this->lowercase_CB->AutoSize = true;
			this->lowercase_CB->Location = System::Drawing::Point(6, 53);
			this->lowercase_CB->Name = L"lowercase_CB";
			this->lowercase_CB->Size = System::Drawing::Size(147, 25);
			this->lowercase_CB->TabIndex = 19;
			this->lowercase_CB->Text = L"Строчные буквы";
			this->lowercase_CB->UseVisualStyleBackColor = true;
			// 
			// special_symb_CB
			// 
			this->special_symb_CB->AutoSize = true;
			this->special_symb_CB->Location = System::Drawing::Point(167, 53);
			this->special_symb_CB->Name = L"special_symb_CB";
			this->special_symb_CB->Size = System::Drawing::Size(136, 25);
			this->special_symb_CB->TabIndex = 20;
			this->special_symb_CB->Text = L"Спец. символы";
			this->special_symb_CB->UseVisualStyleBackColor = true;
			// 
			// create_button
			// 
			this->create_button->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_button->Location = System::Drawing::Point(16, 337);
			this->create_button->Name = L"create_button";
			this->create_button->Size = System::Drawing::Size(99, 35);
			this->create_button->TabIndex = 21;
			this->create_button->Text = L"Создать";
			this->create_button->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 385);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 23);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Ваш пароль: ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->numbers_CB);
			this->groupBox1->Controls->Add(this->lowercase_CB);
			this->groupBox1->Controls->Add(this->uppercase_CB);
			this->groupBox1->Controls->Add(this->special_symb_CB);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(16, 202);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(327, 129);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Настройки генератора:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(37) {
				L"4", L"5", L"6", L"7", L"8", L"9", L"10", L"11",
					L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", L"28", L"29",
					L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40"
			});
			this->comboBox1->Location = System::Drawing::Point(126, 84);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(61, 29);
			this->comboBox1->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(189, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 21);
			this->label3->TabIndex = 23;
			this->label3->Text = L"- символов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 21);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Длинна пароля: ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(122, 385);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(221, 27);
			this->textBox1->TabIndex = 25;
			this->textBox1->Text = L"только для чтения\r\n";
			// 
			// createWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 571);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->create_button);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->by_hand_RB);
			this->Controls->Add(this->random_RB);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->login_textbox);
			this->Controls->Add(this->service_textbox);
			this->Controls->Add(this->submit_button);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->service_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"createWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Создание пароля";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


};
}

ывывв
