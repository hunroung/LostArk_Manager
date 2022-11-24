#pragma once
#include <stdio.h>
#include <string>
#include "Gackin.h"
#include <iostream>
#include <stdlib.h>

namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ProfileForm에 대한 요약입니다.
	/// </summary>
	public ref class ProfileForm : public System::Windows::Forms::Form
	{
	public:
		ProfileForm(void)
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
		~ProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		String^ name;
	private: Cal::Auction^ aution_2 = gcnew Cal::Auction();
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ ch_name;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ ch_item;
	private: System::Windows::Forms::Label^ ch_level;
	private: System::Windows::Forms::Label^ ch_g_1;
	private: System::Windows::Forms::Label^ ch_g_2;
	private: System::Windows::Forms::Label^ ch_g_3;
	private: System::Windows::Forms::Label^ ch_g_4;
	private: System::Windows::Forms::Label^ ch_g_5;
	private: System::Windows::Forms::Label^ ch_g_6;
	private: System::Windows::Forms::Label^ ch_swi;


	private: System::Windows::Forms::Label^ ch_spe;

	private: System::Windows::Forms::Label^ ch_cri;

	private: System::Windows::Forms::Label^ ch_hp;

	private: System::Windows::Forms::Label^ ch_att;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ ch_dom;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ ch_end;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ ch_exp;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ ch_job;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfileForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ch_name = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ch_item = (gcnew System::Windows::Forms::Label());
			this->ch_level = (gcnew System::Windows::Forms::Label());
			this->ch_g_1 = (gcnew System::Windows::Forms::Label());
			this->ch_g_2 = (gcnew System::Windows::Forms::Label());
			this->ch_g_3 = (gcnew System::Windows::Forms::Label());
			this->ch_g_4 = (gcnew System::Windows::Forms::Label());
			this->ch_g_5 = (gcnew System::Windows::Forms::Label());
			this->ch_g_6 = (gcnew System::Windows::Forms::Label());
			this->ch_swi = (gcnew System::Windows::Forms::Label());
			this->ch_spe = (gcnew System::Windows::Forms::Label());
			this->ch_cri = (gcnew System::Windows::Forms::Label());
			this->ch_hp = (gcnew System::Windows::Forms::Label());
			this->ch_att = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ch_dom = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->ch_end = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->ch_exp = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ch_job = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(1, -3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(473, 54);
			this->panel1->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(177, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 31);
			this->label7->TabIndex = 5;
			this->label7->Text = L"정보 검색";
			this->label7->Click += gcnew System::EventHandler(this, &ProfileForm::label7_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(166, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 34);
			this->button1->TabIndex = 11;
			this->button1->Text = L"검색";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProfileForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 35);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ProfileForm::textBox1_TextChanged);
			// 
			// ch_name
			// 
			this->ch_name->AutoSize = true;
			this->ch_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_name->Location = System::Drawing::Point(351, 73);
			this->ch_name->Name = L"ch_name";
			this->ch_name->Size = System::Drawing::Size(70, 25);
			this->ch_name->TabIndex = 12;
			this->ch_name->Text = L"label1";
			this->ch_name->Click += gcnew System::EventHandler(this, &ProfileForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Maroon;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(270, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"닉네임";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Maroon;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 31);
			this->label3->TabIndex = 13;
			this->label3->Text = L"아이템 레벨";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Maroon;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(82, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 31);
			this->label4->TabIndex = 14;
			this->label4->Text = L"레벨";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Maroon;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(6, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 31);
			this->label5->TabIndex = 15;
			this->label5->Text = L"각인";
			this->label5->Click += gcnew System::EventHandler(this, &ProfileForm::label5_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Maroon;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(82, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 31);
			this->label6->TabIndex = 16;
			this->label6->Text = L"특성";
			// 
			// ch_item
			// 
			this->ch_item->AutoSize = true;
			this->ch_item->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_item->Location = System::Drawing::Point(155, 122);
			this->ch_item->Name = L"ch_item";
			this->ch_item->Size = System::Drawing::Size(70, 25);
			this->ch_item->TabIndex = 17;
			this->ch_item->Text = L"label8";
			// 
			// ch_level
			// 
			this->ch_level->AutoSize = true;
			this->ch_level->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_level->Location = System::Drawing::Point(155, 162);
			this->ch_level->Name = L"ch_level";
			this->ch_level->Size = System::Drawing::Size(70, 25);
			this->ch_level->TabIndex = 18;
			this->ch_level->Text = L"label8";
			this->ch_level->Click += gcnew System::EventHandler(this, &ProfileForm::label1_Click_2);
			// 
			// ch_g_1
			// 
			this->ch_g_1->AutoSize = true;
			this->ch_g_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_g_1->Location = System::Drawing::Point(65, 204);
			this->ch_g_1->Name = L"ch_g_1";
			this->ch_g_1->Size = System::Drawing::Size(70, 25);
			this->ch_g_1->TabIndex = 19;
			this->ch_g_1->Text = L"label8";
			// 
			// ch_g_2
			// 
			this->ch_g_2->AutoSize = true;
			this->ch_g_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_g_2->Location = System::Drawing::Point(259, 204);
			this->ch_g_2->Name = L"ch_g_2";
			this->ch_g_2->Size = System::Drawing::Size(70, 25);
			this->ch_g_2->TabIndex = 20;
			this->ch_g_2->Text = L"label8";
			// 
			// ch_g_3
			// 
			this->ch_g_3->AutoSize = true;
			this->ch_g_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_g_3->Location = System::Drawing::Point(65, 229);
			this->ch_g_3->Name = L"ch_g_3";
			this->ch_g_3->Size = System::Drawing::Size(70, 25);
			this->ch_g_3->TabIndex = 21;
			this->ch_g_3->Text = L"label8";
			// 
			// ch_g_4
			// 
			this->ch_g_4->AutoSize = true;
			this->ch_g_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_g_4->Location = System::Drawing::Point(259, 229);
			this->ch_g_4->Name = L"ch_g_4";
			this->ch_g_4->Size = System::Drawing::Size(70, 25);
			this->ch_g_4->TabIndex = 22;
			this->ch_g_4->Text = L"label8";
			// 
			// ch_g_5
			// 
			this->ch_g_5->AutoSize = true;
			this->ch_g_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_g_5->Location = System::Drawing::Point(65, 254);
			this->ch_g_5->Name = L"ch_g_5";
			this->ch_g_5->Size = System::Drawing::Size(70, 25);
			this->ch_g_5->TabIndex = 23;
			this->ch_g_5->Text = L"label8";
			// 
			// ch_g_6
			// 
			this->ch_g_6->AutoSize = true;
			this->ch_g_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_g_6->Location = System::Drawing::Point(259, 254);
			this->ch_g_6->Name = L"ch_g_6";
			this->ch_g_6->Size = System::Drawing::Size(70, 25);
			this->ch_g_6->TabIndex = 24;
			this->ch_g_6->Text = L"label8";
			// 
			// ch_swi
			// 
			this->ch_swi->AutoSize = true;
			this->ch_swi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_swi->Location = System::Drawing::Point(211, 342);
			this->ch_swi->Name = L"ch_swi";
			this->ch_swi->Size = System::Drawing::Size(70, 25);
			this->ch_swi->TabIndex = 29;
			this->ch_swi->Text = L"label8";
			// 
			// ch_spe
			// 
			this->ch_spe->AutoSize = true;
			this->ch_spe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_spe->Location = System::Drawing::Point(364, 317);
			this->ch_spe->Name = L"ch_spe";
			this->ch_spe->Size = System::Drawing::Size(70, 25);
			this->ch_spe->TabIndex = 28;
			this->ch_spe->Text = L"label8";
			// 
			// ch_cri
			// 
			this->ch_cri->AutoSize = true;
			this->ch_cri->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_cri->Location = System::Drawing::Point(211, 317);
			this->ch_cri->Name = L"ch_cri";
			this->ch_cri->Size = System::Drawing::Size(70, 25);
			this->ch_cri->TabIndex = 27;
			this->ch_cri->Text = L"label8";
			// 
			// ch_hp
			// 
			this->ch_hp->AutoSize = true;
			this->ch_hp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_hp->Location = System::Drawing::Point(364, 292);
			this->ch_hp->Name = L"ch_hp";
			this->ch_hp->Size = System::Drawing::Size(70, 25);
			this->ch_hp->TabIndex = 26;
			this->ch_hp->Text = L"label8";
			// 
			// ch_att
			// 
			this->ch_att->AutoSize = true;
			this->ch_att->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_att->Location = System::Drawing::Point(211, 292);
			this->ch_att->Name = L"ch_att";
			this->ch_att->Size = System::Drawing::Size(70, 25);
			this->ch_att->TabIndex = 25;
			this->ch_att->Text = L"label8";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(150, 293);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 24);
			this->label13->TabIndex = 31;
			this->label13->Text = L"공격력";
			this->label13->Click += gcnew System::EventHandler(this, &ProfileForm::label13_Click);
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(303, 293);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 24);
			this->label14->TabIndex = 32;
			this->label14->Text = L"체력";
			this->label14->Click += gcnew System::EventHandler(this, &ProfileForm::label14_Click);
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(150, 318);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 24);
			this->label15->TabIndex = 33;
			this->label15->Text = L"치명";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(303, 318);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(40, 24);
			this->label16->TabIndex = 34;
			this->label16->Text = L"특화";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(150, 343);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 24);
			this->label17->TabIndex = 35;
			this->label17->Text = L"신속";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(303, 344);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 24);
			this->label1->TabIndex = 37;
			this->label1->Text = L"제압";
			this->label1->Click += gcnew System::EventHandler(this, &ProfileForm::label1_Click_3);
			// 
			// ch_dom
			// 
			this->ch_dom->AutoSize = true;
			this->ch_dom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_dom->Location = System::Drawing::Point(364, 343);
			this->ch_dom->Name = L"ch_dom";
			this->ch_dom->Size = System::Drawing::Size(82, 25);
			this->ch_dom->TabIndex = 36;
			this->ch_dom->Text = L"label18";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(150, 368);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 24);
			this->label19->TabIndex = 39;
			this->label19->Text = L"인내";
			// 
			// ch_end
			// 
			this->ch_end->AutoSize = true;
			this->ch_end->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_end->Location = System::Drawing::Point(211, 367);
			this->ch_end->Name = L"ch_end";
			this->ch_end->Size = System::Drawing::Size(82, 25);
			this->ch_end->TabIndex = 38;
			this->ch_end->Text = L"label20";
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(303, 369);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 24);
			this->label21->TabIndex = 41;
			this->label21->Text = L"숙련";
			// 
			// ch_exp
			// 
			this->ch_exp->AutoSize = true;
			this->ch_exp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_exp->Location = System::Drawing::Point(364, 368);
			this->ch_exp->Name = L"ch_exp";
			this->ch_exp->Size = System::Drawing::Size(82, 25);
			this->ch_exp->TabIndex = 40;
			this->ch_exp->Text = L"label22";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(356, 119);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(103, 64);
			this->listBox1->TabIndex = 42;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Maroon;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(270, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 31);
			this->label8->TabIndex = 43;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Maroon;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(6, 336);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 31);
			this->label9->TabIndex = 44;
			this->label9->Text = L"직업";
			// 
			// ch_job
			// 
			this->ch_job->AutoSize = true;
			this->ch_job->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch_job->Location = System::Drawing::Point(7, 369);
			this->ch_job->Name = L"ch_job";
			this->ch_job->Size = System::Drawing::Size(70, 25);
			this->ch_job->TabIndex = 45;
			this->ch_job->Text = L"label8";
			// 
			// ProfileForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(476, 421);
			this->Controls->Add(this->ch_job);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->ch_exp);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->ch_end);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ch_dom);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->ch_swi);
			this->Controls->Add(this->ch_spe);
			this->Controls->Add(this->ch_cri);
			this->Controls->Add(this->ch_hp);
			this->Controls->Add(this->ch_att);
			this->Controls->Add(this->ch_g_6);
			this->Controls->Add(this->ch_g_5);
			this->Controls->Add(this->ch_g_4);
			this->Controls->Add(this->ch_g_3);
			this->Controls->Add(this->ch_g_2);
			this->Controls->Add(this->ch_g_1);
			this->Controls->Add(this->ch_level);
			this->Controls->Add(this->ch_item);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ch_name);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ProfileForm";
			this->Load += gcnew System::EventHandler(this, &ProfileForm::ProfileForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void ProfileForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->textBox1->Text;
		std::string change = "";
		aution_2->MarshalString(name, change);

		char arr_name[60];
		strcpy(arr_name, change.c_str());
		Char_info main_char(arr_name);

		if (main_char.p_error() == 1) {
			String^ error = "잘못된 이름";
			this->ch_name->Text = error;
		}
		else {
			String^ str1 = gcnew String(main_char.p_main_name()); // String -> String^
			this->ch_name->Text = str1;
		}
	
	String^ str2 = gcnew String(main_char.p_item_level()); // String -> String^
	this->ch_item->Text = str2;

	String^ str3 = gcnew String(main_char.p_level()); // String -> String^
	this->ch_level->Text = str3;

	String^ str4 = gcnew String(main_char.p_gackin_name(0)); // String -> String^
	this->ch_g_1->Text = str4;

	String^ str5 = gcnew String(main_char.p_gackin_name(1)); // String -> String^
	this->ch_g_2->Text = str5;

	String^ str6 = gcnew String(main_char.p_gackin_name(2)); // String -> String^
	this->ch_g_3->Text = str6;

	String^ str7 = gcnew String(main_char.p_gackin_name(3)); // String -> String^
	this->ch_g_4->Text = str7;

	String^ str8 = gcnew String(main_char.p_gackin_name(4)); // String -> String^
	this->ch_g_5->Text = str8;

	String^ str9 = gcnew String(main_char.p_gackin_name(5)); // String -> String^
	this->ch_g_6->Text = str9;

	std::stringstream int1;//int -> string
	int1 << main_char.p_damage();
	String^ str10 = gcnew String(int1.str().data());//string -> string^
	this->ch_att->Text = str10;

	std::stringstream int2;//int -> string
	int2 << main_char.p_hp();
	String^ str11 = gcnew String(int2.str().data());//string -> string^
	this->ch_hp->Text = str11;

	std::stringstream int3;//int -> string
	int3 << main_char.p_critical();
	String^ str12 = gcnew String(int3.str().data());//string -> string^
	this->ch_cri->Text = str12;

	std::stringstream int4;//int -> string
	int4 << main_char.p_specialization();
	String^ str13 = gcnew String(int4.str().data());//string -> string^
	this->ch_spe->Text = str13;

	std::stringstream int5;//int -> string
	int5 << main_char.p_swiftness();
	String^ str14 = gcnew String(int5.str().data());//string -> string^
	this->ch_swi->Text = str14;

	std::stringstream int6;//int -> string
	int6 << main_char.p_domination();
	String^ str15 = gcnew String(int6.str().data());//string -> string^
	this->ch_dom->Text = str15;

	std::stringstream int7;//int -> string
	int7 << main_char.p_endurance();
	String^ str16 = gcnew String(int7.str().data());//string -> string^
	this->ch_end->Text = str16;

	std::stringstream int8;//int -> string
	int8 << main_char.p_expertise();
	String^ str17 = gcnew String(int8.str().data());//string -> string^
	this->ch_exp->Text = str17;

	int i = 0;
	listBox1->Items->Clear();
	while (i < main_char.p_total_count()) {
		String^ arr = gcnew String(main_char.p_all_name(i)); // String -> String^
		
		listBox1->Items->Add(arr);
		i++;
	}
	String^ str18 = gcnew String(main_char.p_job()); // String -> String^
	this->ch_job->Text = str18;

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
};
}
