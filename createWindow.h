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
	/// ������ ��� createWindow
	/// </summary>
	public ref class createWindow : public System::Windows::Forms::Form
	{
	public:
		createWindow(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Button^ generate_button;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ passwordLen_TB;





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(createWindow::typeid));
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
			this->generate_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->passwordLen_TB = (gcnew System::Windows::Forms::TextBox());
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
			this->submit_button->Text = L"�����������";
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
			this->password_label->Text = L"������: ";
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
			this->login_label->Text = L"�����: ";
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
			this->service_label->Text = L"������: ";
			// 
			// random_RB
			// 
			this->random_RB->AutoSize = true;
			this->random_RB->Checked = true;
			this->random_RB->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->random_RB->Location = System::Drawing::Point(171, 21);
			this->random_RB->Name = L"random_RB";
			this->random_RB->Size = System::Drawing::Size(172, 27);
			this->random_RB->TabIndex = 14;
			this->random_RB->TabStop = true;
			this->random_RB->Text = L"��������� ������";
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
			this->by_hand_RB->Text = L"������ ����";
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
			this->numbers_CB->Text = L"�����";
			this->numbers_CB->UseVisualStyleBackColor = true;
			// 
			// uppercase_CB
			// 
			this->uppercase_CB->AutoSize = true;
			this->uppercase_CB->Location = System::Drawing::Point(167, 27);
			this->uppercase_CB->Name = L"uppercase_CB";
			this->uppercase_CB->Size = System::Drawing::Size(159, 25);
			this->uppercase_CB->TabIndex = 18;
			this->uppercase_CB->Text = L"��������� �����";
			this->uppercase_CB->UseVisualStyleBackColor = true;
			// 
			// lowercase_CB
			// 
			this->lowercase_CB->AutoSize = true;
			this->lowercase_CB->Location = System::Drawing::Point(6, 53);
			this->lowercase_CB->Name = L"lowercase_CB";
			this->lowercase_CB->Size = System::Drawing::Size(147, 25);
			this->lowercase_CB->TabIndex = 19;
			this->lowercase_CB->Text = L"�������� �����";
			this->lowercase_CB->UseVisualStyleBackColor = true;
			// 
			// special_symb_CB
			// 
			this->special_symb_CB->AutoSize = true;
			this->special_symb_CB->Location = System::Drawing::Point(167, 53);
			this->special_symb_CB->Name = L"special_symb_CB";
			this->special_symb_CB->Size = System::Drawing::Size(136, 25);
			this->special_symb_CB->TabIndex = 20;
			this->special_symb_CB->Text = L"����. �������";
			this->special_symb_CB->UseVisualStyleBackColor = true;
			// 
			// generate_button
			// 
			this->generate_button->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->generate_button->Location = System::Drawing::Point(244, 338);
			this->generate_button->Name = L"generate_button";
			this->generate_button->Size = System::Drawing::Size(99, 35);
			this->generate_button->TabIndex = 21;
			this->generate_button->Text = L"�������";
			this->generate_button->UseVisualStyleBackColor = true;
			this->generate_button->Click += gcnew System::EventHandler(this, &createWindow::generate_button_Click);
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
			this->label1->Text = L"��� ������: ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->passwordLen_TB);
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
			this->groupBox1->Text = L"��������� ����������:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(181, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 21);
			this->label3->TabIndex = 23;
			this->label3->Text = L"- ��������";
			// 
			// passwordLen_TB
			// 
			this->passwordLen_TB->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->passwordLen_TB->Location = System::Drawing::Point(128, 86);
			this->passwordLen_TB->Name = L"passwordLen_TB";
			this->passwordLen_TB->Size = System::Drawing::Size(53, 27);
			this->passwordLen_TB->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 21);
			this->label2->TabIndex = 21;
			this->label2->Text = L"������ ������: ";
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
			this->textBox1->Text = L"������ ��� ������\r\n";
			// 
			// createWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 571);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->generate_button);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"createWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"�������� ������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - ������ ���������������� ������� - - - - - - - - - - - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	private: System::Void generate_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		GeneratePassword GenPass;
		Validator validation;
		bool numbers_status = numbers_CB->Checked;
		bool lowercase_status = lowercase_CB->Checked;
		bool uppercase_status = uppercase_CB->Checked;
		bool specialSymb_status = special_symb_CB->Checked;
		String^ inputPassLen = passwordLen_TB->Text;
		if (!(validation.isDigit(inputPassLen) && validation.NullOrWhiteSpace(inputPassLen)))
		{
			// ����� ��� �����������, ���� �� �������� ���������
			MessageBox::Show("������ ������ ������ ������� �������� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
	}
};
}
