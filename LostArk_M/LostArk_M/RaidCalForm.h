#pragma once
#include "RaidCalHeader.h"

namespace LostArkM {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RaidCalForm에 대한 요약입니다.
	/// </summary>
	public ref class RaidCalForm : public System::Windows::Forms::Form
	{
	public:
		RaidCalForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~RaidCalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ remove1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ remove2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ six;

	private: System::Windows::Forms::Label^ fore;

	private: System::Windows::Forms::Label^ two;
	private: System::Windows::Forms::Label^ five;


	private: System::Windows::Forms::Label^ three;

	private: System::Windows::Forms::Label^ one;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	// 클래스 선언
	private: Cal::Auction^ aution = gcnew Cal::Auction();
	private: System::Windows::Forms::Button^ button4;











	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RaidCalForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->remove1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->remove2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->six = (gcnew System::Windows::Forms::Label());
			this->fore = (gcnew System::Windows::Forms::Label());
			this->two = (gcnew System::Windows::Forms::Label());
			this->five = (gcnew System::Windows::Forms::Label());
			this->three = (gcnew System::Windows::Forms::Label());
			this->one = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(104, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(437, 30);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RaidCalForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(36, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"가격";
			// 
			// remove1
			// 
			this->remove1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->remove1->Location = System::Drawing::Point(579, 81);
			this->remove1->Name = L"remove1";
			this->remove1->Size = System::Drawing::Size(75, 23);
			this->remove1->TabIndex = 3;
			this->remove1->Text = L"지우기";
			this->remove1->UseVisualStyleBackColor = true;
			this->remove1->Click += gcnew System::EventHandler(this, &RaidCalForm::remove1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-9, -6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(701, 58);
			this->panel1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(252, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"레이드경매 계산기";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(104, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"4인";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RaidCalForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(230, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 30);
			this->button2->TabIndex = 6;
			this->button2->Text = L"8인";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RaidCalForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(352, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(189, 30);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"0";
			// 
			// remove2
			// 
			this->remove2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->remove2->Location = System::Drawing::Point(579, 149);
			this->remove2->Name = L"remove2";
			this->remove2->Size = System::Drawing::Size(75, 23);
			this->remove2->TabIndex = 8;
			this->remove2->Text = L"지우기";
			this->remove2->UseVisualStyleBackColor = true;
			this->remove2->Click += gcnew System::EventHandler(this, &RaidCalForm::remove2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(36, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"인원";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(21, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"최소 이득금";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(104, 221);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(437, 30);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"0";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(579, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"지우기";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RaidCalForm::button3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Location = System::Drawing::Point(-9, 386);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(701, 185);
			this->panel2->TabIndex = 6;
			// 
			// six
			// 
			this->six->AutoSize = true;
			this->six->BackColor = System::Drawing::Color::Maroon;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->ForeColor = System::Drawing::Color::White;
			this->six->Location = System::Drawing::Point(513, 514);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(28, 18);
			this->six->TabIndex = 36;
			this->six->Text = L"0G";
			// 
			// fore
			// 
			this->fore->AutoSize = true;
			this->fore->BackColor = System::Drawing::Color::Maroon;
			this->fore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fore->ForeColor = System::Drawing::Color::White;
			this->fore->Location = System::Drawing::Point(513, 463);
			this->fore->Name = L"fore";
			this->fore->Size = System::Drawing::Size(28, 18);
			this->fore->TabIndex = 35;
			this->fore->Text = L"0G";
			// 
			// two
			// 
			this->two->AutoSize = true;
			this->two->BackColor = System::Drawing::Color::Maroon;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->ForeColor = System::Drawing::Color::White;
			this->two->Location = System::Drawing::Point(513, 407);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(28, 18);
			this->two->TabIndex = 34;
			this->two->Text = L"0G";
			// 
			// five
			// 
			this->five->AutoSize = true;
			this->five->BackColor = System::Drawing::Color::Maroon;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->ForeColor = System::Drawing::Color::White;
			this->five->Location = System::Drawing::Point(149, 514);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(28, 18);
			this->five->TabIndex = 33;
			this->five->Text = L"0G";
			// 
			// three
			// 
			this->three->AutoSize = true;
			this->three->BackColor = System::Drawing::Color::Maroon;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->ForeColor = System::Drawing::Color::White;
			this->three->Location = System::Drawing::Point(149, 463);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(28, 18);
			this->three->TabIndex = 32;
			this->three->Text = L"0G";
			// 
			// one
			// 
			this->one->AutoSize = true;
			this->one->BackColor = System::Drawing::Color::Maroon;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->ForeColor = System::Drawing::Color::White;
			this->one->Location = System::Drawing::Point(149, 407);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(28, 18);
			this->one->TabIndex = 31;
			this->one->Text = L"0G";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Maroon;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(396, 514);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 18);
			this->label10->TabIndex = 30;
			this->label10->Text = L"분배금 대비 이득:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Maroon;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(396, 463);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 18);
			this->label9->TabIndex = 29;
			this->label9->Text = L"분배금 대비 이득:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Maroon;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(456, 407);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 18);
			this->label8->TabIndex = 28;
			this->label8->Text = L"분배금:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Maroon;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(36, 514);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 18);
			this->label7->TabIndex = 27;
			this->label7->Text = L"최소 이득 입찰가:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Maroon;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(79, 463);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 18);
			this->label6->TabIndex = 26;
			this->label6->Text = L"선 입찰가:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Maroon;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(36, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 18);
			this->label5->TabIndex = 25;
			this->label5->Text = L"동일 분배 입찰가:";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(230, 297);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(232, 45);
			this->button4->TabIndex = 37;
			this->button4->Text = L"계산";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &RaidCalForm::button4_Click);
			// 
			// RaidCalForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(684, 561);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->six);
			this->Controls->Add(this->fore);
			this->Controls->Add(this->two);
			this->Controls->Add(this->five);
			this->Controls->Add(this->three);
			this->Controls->Add(this->one);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->remove2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->remove1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximumSize = System::Drawing::Size(700, 600);
			this->MinimumSize = System::Drawing::Size(700, 600);
			this->Name = L"RaidCalForm";
			this->Load += gcnew System::EventHandler(this, &RaidCalForm::RaidCalForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void remove1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "0";
}
private: System::Void remove2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text = "0";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->Text = "0";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text = "4";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text = "8";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Text를 숫자 값으로
	std::string change = "";
	aution->MarshalString(this->textBox1->Text, change); // String^ -> String
	this->aution->price = stod(change);

	aution->MarshalString(this->textBox2->Text, change); // String^ -> String
	this->aution->num = stod(change);

	aution->MarshalString(this->textBox3->Text, change); // String^ -> String
	this->aution->min_benefit = stod(change);
	//
	aution->AllCal(); // 모든 계산을 실시 합니다.
	//
	std::stringstream ssInt1; // Int -> String 하기 위한
	ssInt1 << aution->equal_price; // Int 값을 넣는
	String^ str1 = gcnew String(ssInt1.str().data()); // String -> String^
	this->one->Text = str1;

	std::stringstream ssInt2;
	ssInt2 << aution->equal_distribution;
	String^ str2 = gcnew String(ssInt2.str().data());
	this->two->Text = str2;

	std::stringstream ssInt3;
	ssInt3 << aution->benefit_price;
	String^ str3 = gcnew String(ssInt3.str().data());
	this->three->Text = str3;

	std::stringstream ssInt4; 
	ssInt4 << aution->benefit; 
	String^ str4 = gcnew String(ssInt4.str().data()); 
	this->fore->Text = str4;

	std::stringstream ssInt5;
	ssInt5 << aution->max_price;
	String^ str5 = gcnew String(ssInt5.str().data()); 
	this->five->Text = str5;

	std::stringstream ssInt6;
	ssInt6 << aution->min_benefit;
	String^ str6 = gcnew String(ssInt6.str().data()); 
	this->six->Text = str6;
}
private: System::Void RaidCalForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
