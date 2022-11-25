#pragma once
#include "RockHeader.h"

namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RockForm에 대한 요약입니다.
	/// </summary>
	public ref class RockForm : public System::Windows::Forms::Form
	{
	public:
		RockForm(void)
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
		~RockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Rock::Rocksimulator^ rock = gcnew Rock::Rocksimulator;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RockForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(645, 50);
			this->panel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(559, 7);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 32);
			this->button4->TabIndex = 5;
			this->button4->Text = L"reset";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &RockForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(206, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"어빌티리 스톤 세공";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(20, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"증가 어빌리티 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(20, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"증가 어빌리티 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(20, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"감소 어빌리티";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(550, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"세공";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RockForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(550, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"세공";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RockForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button3->Location = System::Drawing::Point(550, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 32);
			this->button3->TabIndex = 6;
			this->button3->Text = L"세공";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RockForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(436, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"성공 확률";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(517, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 24);
			this->label6->TabIndex = 8;
			this->label6->Text = L"75 %";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightGray;
			this->panel2->Location = System::Drawing::Point(150, 85);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(30, 30);
			this->panel2->TabIndex = 9;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightGray;
			this->panel3->Location = System::Drawing::Point(185, 85);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(30, 30);
			this->panel3->TabIndex = 10;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightGray;
			this->panel4->Location = System::Drawing::Point(220, 85);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(30, 30);
			this->panel4->TabIndex = 10;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LightGray;
			this->panel5->Location = System::Drawing::Point(255, 85);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(30, 30);
			this->panel5->TabIndex = 11;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::LightGray;
			this->panel6->Location = System::Drawing::Point(290, 85);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(30, 30);
			this->panel6->TabIndex = 12;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::LightGray;
			this->panel7->Location = System::Drawing::Point(325, 85);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(30, 30);
			this->panel7->TabIndex = 13;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::LightGray;
			this->panel8->Location = System::Drawing::Point(360, 85);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(30, 30);
			this->panel8->TabIndex = 14;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::LightGray;
			this->panel9->Location = System::Drawing::Point(395, 85);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(30, 30);
			this->panel9->TabIndex = 15;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::LightGray;
			this->panel10->Location = System::Drawing::Point(430, 85);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(30, 30);
			this->panel10->TabIndex = 16;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::LightGray;
			this->panel11->Location = System::Drawing::Point(465, 85);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(30, 30);
			this->panel11->TabIndex = 17;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::LightGray;
			this->panel12->Location = System::Drawing::Point(465, 140);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(30, 30);
			this->panel12->TabIndex = 27;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::LightGray;
			this->panel13->Location = System::Drawing::Point(430, 140);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(30, 30);
			this->panel13->TabIndex = 26;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::LightGray;
			this->panel14->Location = System::Drawing::Point(395, 140);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(30, 30);
			this->panel14->TabIndex = 25;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::LightGray;
			this->panel15->Location = System::Drawing::Point(360, 140);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(30, 30);
			this->panel15->TabIndex = 24;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::LightGray;
			this->panel16->Location = System::Drawing::Point(325, 140);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(30, 30);
			this->panel16->TabIndex = 23;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::LightGray;
			this->panel17->Location = System::Drawing::Point(290, 140);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(30, 30);
			this->panel17->TabIndex = 22;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::LightGray;
			this->panel18->Location = System::Drawing::Point(255, 140);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(30, 30);
			this->panel18->TabIndex = 21;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::LightGray;
			this->panel19->Location = System::Drawing::Point(220, 140);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(30, 30);
			this->panel19->TabIndex = 19;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::LightGray;
			this->panel20->Location = System::Drawing::Point(185, 140);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(30, 30);
			this->panel20->TabIndex = 20;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::LightGray;
			this->panel21->Location = System::Drawing::Point(150, 140);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(30, 30);
			this->panel21->TabIndex = 18;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::LightGray;
			this->panel22->Location = System::Drawing::Point(465, 195);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(30, 30);
			this->panel22->TabIndex = 37;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::LightGray;
			this->panel23->Location = System::Drawing::Point(430, 195);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(30, 30);
			this->panel23->TabIndex = 36;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::LightGray;
			this->panel24->Location = System::Drawing::Point(395, 195);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(30, 30);
			this->panel24->TabIndex = 35;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::LightGray;
			this->panel25->Location = System::Drawing::Point(360, 195);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(30, 30);
			this->panel25->TabIndex = 34;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::LightGray;
			this->panel26->Location = System::Drawing::Point(325, 195);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(30, 30);
			this->panel26->TabIndex = 33;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::LightGray;
			this->panel27->Location = System::Drawing::Point(290, 195);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(30, 30);
			this->panel27->TabIndex = 32;
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::LightGray;
			this->panel28->Location = System::Drawing::Point(255, 195);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(30, 30);
			this->panel28->TabIndex = 31;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::LightGray;
			this->panel29->Location = System::Drawing::Point(220, 195);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(30, 30);
			this->panel29->TabIndex = 29;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::LightGray;
			this->panel30->Location = System::Drawing::Point(185, 195);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(30, 30);
			this->panel30->TabIndex = 30;
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::LightGray;
			this->panel31->Location = System::Drawing::Point(150, 195);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(30, 30);
			this->panel31->TabIndex = 28;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label7->Location = System::Drawing::Point(510, 85);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 27);
			this->label7->TabIndex = 38;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(510, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 27);
			this->label8->TabIndex = 39;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(510, 195);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 27);
			this->label9->TabIndex = 40;
			this->label9->Text = L"0";
			// 
			// RockForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(634, 261);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel22);
			this->Controls->Add(this->panel23);
			this->Controls->Add(this->panel24);
			this->Controls->Add(this->panel25);
			this->Controls->Add(this->panel26);
			this->Controls->Add(this->panel27);
			this->Controls->Add(this->panel28);
			this->Controls->Add(this->panel29);
			this->Controls->Add(this->panel30);
			this->Controls->Add(this->panel31);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->panel19);
			this->Controls->Add(this->panel20);
			this->Controls->Add(this->panel21);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(650, 300);
			this->MinimumSize = System::Drawing::Size(650, 300);
			this->Name = L"RockForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = rock->rock_simul();
		Panel^ abil1;
		if (rock->abil1_count < 10) {
			switch (rock->abil1_count)
			{
			case 0:
				abil1 = panel2;
				break;
			case 1:
				abil1 = panel3;
				break;
			case 2:
				abil1 = panel4;
				break;
			case 3:
				abil1 = panel5;
				break;
			case 4:
				abil1 = panel6;
				break;
			case 5:
				abil1 = panel7;
				break;
			case 6:
				abil1 = panel8;
				break;
			case 7:
				abil1 = panel9;
				break;
			case 8:
				abil1 = panel10;
				break;
			case 9:
				abil1 = panel11;
				break;
			}
			if (n == 1) {
				abil1->BackColor = System::Drawing::ColorTranslator::FromHtml("#00dddd");
				rock->abil1_success_count++;
			}
			else {
				abil1->BackColor = System::Drawing::ColorTranslator::FromHtml("#555555");
			}
			rock->abil1_count++;
			this->label7->Text = rock->abil1_success_count+"";
			this->label6->Text = rock->p + " %";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = rock->rock_simul();
		Panel^ abil2;
		if (rock->abil2_count < 10) {
			switch (rock->abil2_count)
			{
			case 0:
				abil2 = panel21;
				break;
			case 1:
				abil2 = panel20;
				break;
			case 2:
				abil2 = panel19;
				break;
			case 3:
				abil2 = panel18;
				break;
			case 4:
				abil2 = panel17;
				break;
			case 5:
				abil2 = panel16;
				break;
			case 6:
				abil2 = panel15;
				break;
			case 7:
				abil2 = panel14;
				break;
			case 8:
				abil2 = panel13;
				break;
			case 9:
				abil2 = panel12;
				break;
			}
			if (n == 1) {
				abil2->BackColor = System::Drawing::ColorTranslator::FromHtml("#00dddd");
				rock->abil2_success_count++;
			}
			else {
				abil2->BackColor = System::Drawing::ColorTranslator::FromHtml("#555555");
			}
			rock->abil2_count++;
			this->label6->Text = rock->p + " %";
			this->label8->Text = rock->abil2_success_count + "";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = rock->rock_simul();
		Panel^ abil3;
		if (rock->abil3_count < 10) {
			switch (rock->abil3_count)
			{
			case 0:
				abil3 = panel31;
				break;
			case 1:
				abil3 = panel30;
				break;
			case 2:
				abil3 = panel29;
				break;
			case 3:
				abil3 = panel28;
				break;
			case 4:
				abil3 = panel27;
				break;
			case 5:
				abil3 = panel26;
				break;
			case 6:
				abil3 = panel25;
				break;
			case 7:
				abil3 = panel24;
				break;
			case 8:
				abil3 = panel23;
				break;
			case 9:
				abil3 = panel22;
				break;
			}
			if (n == 1) {
				abil3->BackColor = System::Drawing::ColorTranslator::FromHtml("#990000");
				rock->abil3_success_count++;
			}
			else {
				abil3->BackColor = System::Drawing::ColorTranslator::FromHtml("#555555");
			}
			rock->abil3_count++;
			this->label6->Text = rock->p + " %";
			this->label9->Text = rock->abil3_success_count+"";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		rock->p = 75;
		rock->abil1_count = 0;
		rock->abil2_count = 0;
		rock->abil3_count = 0;
		rock->abil1_success_count = 0;
		rock->abil2_success_count = 0;
		rock->abil3_success_count = 0;
		Panel^ abil;
		panel2->BackColor = System::Drawing::Color::LightGray;
		panel3->BackColor = System::Drawing::Color::LightGray;
		panel4->BackColor = System::Drawing::Color::LightGray;
		panel5->BackColor = System::Drawing::Color::LightGray;
		panel6->BackColor = System::Drawing::Color::LightGray;
		panel7->BackColor = System::Drawing::Color::LightGray;
		panel8->BackColor = System::Drawing::Color::LightGray;
		panel9->BackColor = System::Drawing::Color::LightGray;
		panel10->BackColor = System::Drawing::Color::LightGray;
		panel11->BackColor = System::Drawing::Color::LightGray;
		panel12->BackColor = System::Drawing::Color::LightGray;
		panel13->BackColor = System::Drawing::Color::LightGray;
		panel14->BackColor = System::Drawing::Color::LightGray;
		panel15->BackColor = System::Drawing::Color::LightGray;
		panel16->BackColor = System::Drawing::Color::LightGray;
		panel17->BackColor = System::Drawing::Color::LightGray;
		panel18->BackColor = System::Drawing::Color::LightGray;
		panel19->BackColor = System::Drawing::Color::LightGray;
		panel20->BackColor = System::Drawing::Color::LightGray;
		panel21->BackColor = System::Drawing::Color::LightGray;
		panel22->BackColor = System::Drawing::Color::LightGray;
		panel23->BackColor = System::Drawing::Color::LightGray;
		panel24->BackColor = System::Drawing::Color::LightGray;
		panel25->BackColor = System::Drawing::Color::LightGray;
		panel26->BackColor = System::Drawing::Color::LightGray;
		panel27->BackColor = System::Drawing::Color::LightGray;
		panel28->BackColor = System::Drawing::Color::LightGray;
		panel29->BackColor = System::Drawing::Color::LightGray;
		panel30->BackColor = System::Drawing::Color::LightGray;
		panel31->BackColor = System::Drawing::Color::LightGray;
		this->label6->Text = rock->p + " %";
		this->label7->Text = rock->abil1_success_count + "";
		this->label8->Text = rock->abil2_success_count + "";
		this->label9->Text = rock->abil3_success_count + "";
	}
};
}