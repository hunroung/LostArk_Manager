#pragma once

namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LegendForm에 대한 요약입니다.
	/// </summary>
	public ref class LegendForm : public System::Windows::Forms::Form
	{
	public:
		LegendForm(void)
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
		~LegendForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;
		   //클래스 선언
	private: Card::Cardsimulator^ legend = gcnew Card::Cardsimulator();
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LegendForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(5, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"아만 X";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(40, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1장 열기";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LegendForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(206, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"10장 열기";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LegendForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(0, 400);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(484, 174);
			this->panel1->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(250, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 25);
			this->label8->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(58, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 25);
			this->label4->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(0, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(534, 50);
			this->panel2->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button3->Location = System::Drawing::Point(406, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"reset";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LegendForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(157, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 31);
			this->label5->TabIndex = 0;
			this->label5->Text = L"전설 카드 팩";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(360, 361);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 31);
			this->label9->TabIndex = 0;
			this->label9->Text = L"총 0 장";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrange;
			this->label2->Location = System::Drawing::Point(5, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"웨이 X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::DarkOrange;
			this->label3->Location = System::Drawing::Point(5, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 31);
			this->label3->TabIndex = 7;
			this->label3->Text = L"샨디 X";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->ForeColor = System::Drawing::Color::DarkOrange;
			this->label6->Location = System::Drawing::Point(5, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 31);
			this->label6->TabIndex = 8;
			this->label6->Text = L"카단 X";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->ForeColor = System::Drawing::Color::DarkOrange;
			this->label7->Location = System::Drawing::Point(5, 172);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 31);
			this->label7->TabIndex = 9;
			this->label7->Text = L"실리안 X";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->ForeColor = System::Drawing::Color::DarkOrange;
			this->label10->Location = System::Drawing::Point(5, 202);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 31);
			this->label10->TabIndex = 10;
			this->label10->Text = L"니나브 X";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label11->ForeColor = System::Drawing::Color::DarkOrange;
			this->label11->Location = System::Drawing::Point(5, 232);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 31);
			this->label11->TabIndex = 11;
			this->label11->Text = L"카마인 X";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label12->ForeColor = System::Drawing::Color::DarkOrange;
			this->label12->Location = System::Drawing::Point(5, 262);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 31);
			this->label12->TabIndex = 12;
			this->label12->Text = L"일리아칸 X";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label13->ForeColor = System::Drawing::Color::DarkOrange;
			this->label13->Location = System::Drawing::Point(5, 292);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(125, 31);
			this->label13->TabIndex = 13;
			this->label13->Text = L"바훈투르 X";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label14->ForeColor = System::Drawing::Color::DarkOrange;
			this->label14->Location = System::Drawing::Point(5, 322);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(125, 31);
			this->label14->TabIndex = 14;
			this->label14->Text = L"진저웨일 X";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label15->ForeColor = System::Drawing::Color::DarkOrange;
			this->label15->Location = System::Drawing::Point(200, 52);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(204, 31);
			this->label15->TabIndex = 15;
			this->label15->Text = L"광기를 잃은 쿠크 X";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label16->ForeColor = System::Drawing::Color::DarkOrange;
			this->label16->Location = System::Drawing::Point(200, 82);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(196, 31);
			this->label16->TabIndex = 16;
			this->label16->Text = L"에스더 갈라투르 X";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label17->ForeColor = System::Drawing::Color::DarkOrange;
			this->label17->Location = System::Drawing::Point(200, 112);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(175, 31);
			this->label17->TabIndex = 17;
			this->label17->Text = L"아제나 이난나 X";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label18->ForeColor = System::Drawing::Color::DarkOrange;
			this->label18->Location = System::Drawing::Point(200, 142);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(175, 31);
			this->label18->TabIndex = 18;
			this->label18->Text = L"에스더 루테란 X";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label19->ForeColor = System::Drawing::Color::DarkOrange;
			this->label19->Location = System::Drawing::Point(200, 172);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(154, 31);
			this->label19->TabIndex = 19;
			this->label19->Text = L"에스더 시엔 X";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label20->ForeColor = System::Drawing::Color::DarkOrange;
			this->label20->Location = System::Drawing::Point(200, 202);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(154, 31);
			this->label20->TabIndex = 20;
			this->label20->Text = L"국왕 실리안 X";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label21->ForeColor = System::Drawing::Color::DarkOrange;
			this->label21->Location = System::Drawing::Point(200, 232);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(146, 31);
			this->label21->TabIndex = 21;
			this->label21->Text = L"베아트리스 X";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label22->ForeColor = System::Drawing::Color::DarkOrange;
			this->label22->Location = System::Drawing::Point(200, 262);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(133, 31);
			this->label22->TabIndex = 22;
			this->label22->Text = L"데런 아만 X";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label23->ForeColor = System::Drawing::Color::DarkOrange;
			this->label23->Location = System::Drawing::Point(200, 292);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(133, 31);
			this->label23->TabIndex = 23;
			this->label23->Text = L"가디언 루 X";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label24->ForeColor = System::Drawing::Color::DarkOrange;
			this->label24->Location = System::Drawing::Point(85, 52);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 31);
			this->label24->TabIndex = 24;
			this->label24->Text = L"0";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label25->ForeColor = System::Drawing::Color::DarkOrange;
			this->label25->Location = System::Drawing::Point(85, 82);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(30, 31);
			this->label25->TabIndex = 25;
			this->label25->Text = L"0";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label26->ForeColor = System::Drawing::Color::DarkOrange;
			this->label26->Location = System::Drawing::Point(85, 112);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(30, 31);
			this->label26->TabIndex = 26;
			this->label26->Text = L"0";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label27->ForeColor = System::Drawing::Color::DarkOrange;
			this->label27->Location = System::Drawing::Point(85, 142);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(30, 31);
			this->label27->TabIndex = 27;
			this->label27->Text = L"0";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label28->ForeColor = System::Drawing::Color::DarkOrange;
			this->label28->Location = System::Drawing::Point(105, 172);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(30, 31);
			this->label28->TabIndex = 28;
			this->label28->Text = L"0";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label29->ForeColor = System::Drawing::Color::DarkOrange;
			this->label29->Location = System::Drawing::Point(105, 202);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(30, 31);
			this->label29->TabIndex = 29;
			this->label29->Text = L"0";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label30->ForeColor = System::Drawing::Color::DarkOrange;
			this->label30->Location = System::Drawing::Point(105, 232);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(30, 31);
			this->label30->TabIndex = 30;
			this->label30->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label31->ForeColor = System::Drawing::Color::DarkOrange;
			this->label31->Location = System::Drawing::Point(125, 262);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(30, 31);
			this->label31->TabIndex = 31;
			this->label31->Text = L"0";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label32->ForeColor = System::Drawing::Color::DarkOrange;
			this->label32->Location = System::Drawing::Point(125, 292);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(30, 31);
			this->label32->TabIndex = 32;
			this->label32->Text = L"0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label33->ForeColor = System::Drawing::Color::DarkOrange;
			this->label33->Location = System::Drawing::Point(125, 322);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(30, 31);
			this->label33->TabIndex = 33;
			this->label33->Text = L"0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label34->ForeColor = System::Drawing::Color::DarkOrange;
			this->label34->Location = System::Drawing::Point(400, 52);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(30, 31);
			this->label34->TabIndex = 34;
			this->label34->Text = L"0";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label35->ForeColor = System::Drawing::Color::DarkOrange;
			this->label35->Location = System::Drawing::Point(390, 82);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(30, 31);
			this->label35->TabIndex = 35;
			this->label35->Text = L"0";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label36->ForeColor = System::Drawing::Color::DarkOrange;
			this->label36->Location = System::Drawing::Point(370, 112);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(30, 31);
			this->label36->TabIndex = 36;
			this->label36->Text = L"0";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label37->ForeColor = System::Drawing::Color::DarkOrange;
			this->label37->Location = System::Drawing::Point(370, 142);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(30, 31);
			this->label37->TabIndex = 37;
			this->label37->Text = L"0";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label38->ForeColor = System::Drawing::Color::DarkOrange;
			this->label38->Location = System::Drawing::Point(350, 172);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(30, 31);
			this->label38->TabIndex = 38;
			this->label38->Text = L"0";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label39->ForeColor = System::Drawing::Color::DarkOrange;
			this->label39->Location = System::Drawing::Point(350, 202);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(30, 31);
			this->label39->TabIndex = 39;
			this->label39->Text = L"0";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label40->ForeColor = System::Drawing::Color::DarkOrange;
			this->label40->Location = System::Drawing::Point(340, 232);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(30, 31);
			this->label40->TabIndex = 40;
			this->label40->Text = L"0";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label41->ForeColor = System::Drawing::Color::DarkOrange;
			this->label41->Location = System::Drawing::Point(330, 262);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(30, 31);
			this->label41->TabIndex = 41;
			this->label41->Text = L"0";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label42->ForeColor = System::Drawing::Color::DarkOrange;
			this->label42->Location = System::Drawing::Point(330, 292);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(30, 31);
			this->label42->TabIndex = 42;
			this->label42->Text = L"0";
			// 
			// LegendForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(459, 561);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(475, 600);
			this->MinimumSize = System::Drawing::Size(475, 600);
			this->Name = L"LegendForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string legendlist[19] = { "아만","웨이","샨디","카단","실리안","니나브","카마인","일리아칸","바훈투르","진저웨일","광기를 잃은 쿠크세이튼","에스더 갈라투르","아제나 이난나","에스더 루테란","에스더 시엔","국왕 실리안","베아트리스","데런 아만","가디언 루" };
		std::string result = "";
		int num = legend->legend_card();
		legend->count++;
		result = legendlist[num];
		String^ legendresult = gcnew String(result.c_str());
		this->label4->Text = legendresult;
		this->label8->Text = "";
		this->label24->Text = legend->legend1+"";
		this->label25->Text = legend->legend2 + "";
		this->label26->Text = legend->legend3 + "";
		this->label27->Text = legend->legend4 + "";
		this->label28->Text = legend->legend5 + "";
		this->label29->Text = legend->legend6 + "";
		this->label30->Text = legend->legend7 + "";
		this->label31->Text = legend->legend8 + "";
		this->label32->Text = legend->legend9 + "";
		this->label33->Text = legend->legend10 + "";
		this->label34->Text = legend->legend11 + "";
		this->label35->Text = legend->legend12 + "";
		this->label36->Text = legend->legend13 + "";
		this->label37->Text = legend->legend14 + "";
		this->label38->Text = legend->legend15 + "";
		this->label39->Text = legend->legend16 + "";
		this->label40->Text = legend->legend17 + "";
		this->label41->Text = legend->legend18 + "";
		this->label42->Text = legend->legend19 + "";
		this->label9->Text = "총 " + legend->count + " 장";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string legendlist[19] = { "아만","웨이","샨디","카단","실리안","니나브","카마인","일리아칸","바훈투르","진저웨일","광기를 잃은 쿠크세이튼","에스더 갈라투르","아제나 이난나","에스더 루테란","에스더 시엔","국왕 실리안","베아트리스","데런 아만","가디언 루" };
		std::string result = "";
		String^ result1 = "";
		String^ result2 = "";
		for (int i = 0; i < 5; i++) {
			legend->count++;
			result = legendlist[legend->legend_card()];
			result1 += gcnew String(result.c_str());
			result1 += "\n";
		}
		for (int i = 0; i < 5; i++) {
			legend->count++;
			result = legendlist[legend->legend_card()];
			result2 += gcnew String(result.c_str());
			result2 += "\n";
		}
		this->label4->Text = result1;
		this->label8->Text = result2;
		this->label24->Text = legend->legend1 + "";
		this->label25->Text = legend->legend2 + "";
		this->label26->Text = legend->legend3 + "";
		this->label27->Text = legend->legend4 + "";
		this->label28->Text = legend->legend5 + "";
		this->label29->Text = legend->legend6 + "";
		this->label30->Text = legend->legend7 + "";
		this->label31->Text = legend->legend8 + "";
		this->label32->Text = legend->legend9 + "";
		this->label33->Text = legend->legend10 + "";
		this->label34->Text = legend->legend11 + "";
		this->label35->Text = legend->legend12 + "";
		this->label36->Text = legend->legend13 + "";
		this->label37->Text = legend->legend14 + "";
		this->label38->Text = legend->legend15 + "";
		this->label39->Text = legend->legend16 + "";
		this->label40->Text = legend->legend17 + "";
		this->label41->Text = legend->legend18 + "";
		this->label42->Text = legend->legend19 + "";
		this->label9->Text = "총 " + legend->count + " 장";
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	legend->count = 0;
	legend->legend1 = 0;
	legend->legend2 = 0;
	legend->legend3 = 0;
	legend->legend4 = 0;
	legend->legend5 = 0;
	legend->legend6 = 0;
	legend->legend7 = 0;
	legend->legend8 = 0;
	legend->legend9 = 0;
	legend->legend10 = 0;
	legend->legend11 = 0;
	legend->legend12 = 0;
	legend->legend13 = 0;
	legend->legend14 = 0;
	legend->legend15 = 0;
	legend->legend16 = 0;
	legend->legend17 = 0;
	legend->legend18 = 0;
	legend->legend19 = 0;
	this->label4->Text = "";
	this->label8->Text = "";
	this->label24->Text = legend->legend1 + "";
	this->label25->Text = legend->legend2 + "";
	this->label26->Text = legend->legend3 + "";
	this->label27->Text = legend->legend4 + "";
	this->label28->Text = legend->legend5 + "";
	this->label29->Text = legend->legend6 + "";
	this->label30->Text = legend->legend7 + "";
	this->label31->Text = legend->legend8 + "";
	this->label32->Text = legend->legend9 + "";
	this->label33->Text = legend->legend10 + "";
	this->label34->Text = legend->legend11 + "";
	this->label35->Text = legend->legend12 + "";
	this->label36->Text = legend->legend13 + "";
	this->label37->Text = legend->legend14 + "";
	this->label38->Text = legend->legend15 + "";
	this->label39->Text = legend->legend16 + "";
	this->label40->Text = legend->legend17 + "";
	this->label41->Text = legend->legend18 + "";
	this->label42->Text = legend->legend19 + "";
	this->label9->Text = "총 " + legend->count + " 장";
}
};
}