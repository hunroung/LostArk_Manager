#pragma once
#include "GackinForm.h"
#include "RaidForm.h"
#include "RaidCalForm.h"

namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ChooseForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class ChooseForm : public System::Windows::Forms::Form
	{
	public:
		ChooseForm(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
		ChooseForm(String^ data) {
			InitializeComponent();
			Nickname->Text = data;
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~ChooseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Nickname;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ gackin;
	private: System::Windows::Forms::Button^ raid;
	private: System::Windows::Forms::Button^ cal;






	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Nickname = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gackin = (gcnew System::Windows::Forms::Button());
			this->raid = (gcnew System::Windows::Forms::Button());
			this->cal = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Nickname
			// 
			this->Nickname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Nickname->AutoSize = true;
			this->Nickname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nickname->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Nickname->Location = System::Drawing::Point(9, 1);
			this->Nickname->Name = L"Nickname";
			this->Nickname->Size = System::Drawing::Size(79, 20);
			this->Nickname->TabIndex = 0;
			this->Nickname->Text = L"Nickname";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(3, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &ChooseForm::label1_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Nickname);
			this->panel1->Location = System::Drawing::Point(-6, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(566, 25);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ChooseForm::panel1_Paint);
			// 
			// gackin
			// 
			this->gackin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gackin->Location = System::Drawing::Point(156, 69);
			this->gackin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->gackin->Name = L"gackin";
			this->gackin->Size = System::Drawing::Size(234, 60);
			this->gackin->TabIndex = 2;
			this->gackin->Text = L"������õ";
			this->gackin->UseVisualStyleBackColor = true;
			this->gackin->Click += gcnew System::EventHandler(this, &ChooseForm::gackin_Click);
			// 
			// raid
			// 
			this->raid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->raid->Location = System::Drawing::Point(156, 172);
			this->raid->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->raid->Name = L"raid";
			this->raid->Size = System::Drawing::Size(234, 60);
			this->raid->TabIndex = 3;
			this->raid->Text = L"���̵����";
			this->raid->UseVisualStyleBackColor = true;
			this->raid->Click += gcnew System::EventHandler(this, &ChooseForm::raid_Click);
			// 
			// cal
			// 
			this->cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cal->Location = System::Drawing::Point(156, 271);
			this->cal->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cal->Name = L"cal";
			this->cal->Size = System::Drawing::Size(234, 60);
			this->cal->TabIndex = 4;
			this->cal->Text = L"���̵��� ����";
			this->cal->UseVisualStyleBackColor = true;
			this->cal->Click += gcnew System::EventHandler(this, &ChooseForm::cal_Click);
			// 
			// ChooseForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(553, 387);
			this->Controls->Add(this->cal);
			this->Controls->Add(this->raid);
			this->Controls->Add(this->gackin);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximumSize = System::Drawing::Size(569, 426);
			this->MinimumSize = System::Drawing::Size(569, 426);
			this->Name = L"ChooseForm";
			this->Load += gcnew System::EventHandler(this, &ChooseForm::ChooseForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ChooseForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void gackin_Click(System::Object^ sender, System::EventArgs^ e) { // ������õ ��� Ŭ����
	GackinForm^ gackinform = gcnew GackinForm();
	this->Hide();
	gackinform->ShowDialog();
	this->Close();
}
private: System::Void raid_Click(System::Object^ sender, System::EventArgs^ e) { // ���̵� ���� ��ư Ŭ����
	RaidForm^ raidform = gcnew RaidForm();
	this->Hide();
	raidform->ShowDialog();
	this->Close();
}
private: System::Void cal_Click(System::Object^ sender, System::EventArgs^ e) { // ���̵� ����� ���� ��ư Ŭ����
	RaidCalForm^ raidcalform = gcnew RaidCalForm();
	this->Hide();
	raidcalform->ShowDialog();
	this->Close();
}
};
}
