#pragma once

namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Card_le_nomalForm에 대한 요약입니다.
	/// </summary>
	public ref class Card_le_nomalForm : public System::Windows::Forms::Form
	{
	public:
		Card_le_nomalForm(void)
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
		~Card_le_nomalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;
		   //클래스 선언
	private: Card::Cardsimulator^ nomal_simul = gcnew Card::Cardsimulator();
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Location = System::Drawing::Point(54, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"전설 카드 팩 II";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->ForeColor = System::Drawing::Color::Purple;
			this->label2->Location = System::Drawing::Point(54, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"영웅 카드 팩";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(60, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1장 열기";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Card_le_nomalForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(252, 234);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"10장 열기";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Card_le_nomalForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(215, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 12);
			this->label3->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(0, 300);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(386, 174);
			this->panel1->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(214, 13);
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
			this->panel2->Size = System::Drawing::Size(386, 50);
			this->panel2->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button3->Location = System::Drawing::Point(318, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"reset";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Card_le_nomalForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(130, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 31);
			this->label5->TabIndex = 0;
			this->label5->Text = L"전체 카드 팩";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(254, 269);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 31);
			this->label9->TabIndex = 0;
			this->label9->Text = L"총 0 장";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->ForeColor = System::Drawing::Color::DarkOrange;
			this->label6->Location = System::Drawing::Point(283, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 31);
			this->label6->TabIndex = 0;
			this->label6->Text = L"0 장";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->ForeColor = System::Drawing::Color::Purple;
			this->label7->Location = System::Drawing::Point(283, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 31);
			this->label7->TabIndex = 0;
			this->label7->Text = L"0 장";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->ForeColor = System::Drawing::Color::Navy;
			this->label10->Location = System::Drawing::Point(54, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(135, 31);
			this->label10->TabIndex = 0;
			this->label10->Text = L"희귀 카드 팩";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label11->ForeColor = System::Drawing::Color::Navy;
			this->label11->Location = System::Drawing::Point(283, 130);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 31);
			this->label11->TabIndex = 0;
			this->label11->Text = L"0 장";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label12->ForeColor = System::Drawing::Color::Green;
			this->label12->Location = System::Drawing::Point(54, 165);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(135, 31);
			this->label12->TabIndex = 6;
			this->label12->Text = L"고급 카드 팩";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label13->ForeColor = System::Drawing::Color::Green;
			this->label13->Location = System::Drawing::Point(283, 165);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 31);
			this->label13->TabIndex = 7;
			this->label13->Text = L"0 장";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label14->ForeColor = System::Drawing::Color::Gray;
			this->label14->Location = System::Drawing::Point(54, 200);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(135, 31);
			this->label14->TabIndex = 8;
			this->label14->Text = L"일반 카드 팩";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label15->ForeColor = System::Drawing::Color::Gray;
			this->label15->Location = System::Drawing::Point(283, 200);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 31);
			this->label15->TabIndex = 9;
			this->label15->Text = L"0 장";
			// 
			// Card_le_nomalForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(384, 461);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Name = L"Card_le_nomalForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		nomal_simul->legend_nomal();
		nomal_simul->count++;
		this->label4->Text = nomal_simul->result;
		this->label8->Text = "";
		this->label6->Text = nomal_simul->legend_count + " 장";
		this->label7->Text = nomal_simul->hero_count + " 장";
		this->label11->Text = nomal_simul->rare_count + " 장";
		this->label13->Text = nomal_simul->advanced_count + " 장";
		this->label15->Text = nomal_simul->nomal_count + " 장";
		this->label9->Text = "총 " + nomal_simul->count + " 장";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ result1 = "";
	String^ result2 = "";
	for (int i = 0; i < 5; i++) {
		nomal_simul->legend_nomal();
		nomal_simul->count++;
		result1 += nomal_simul->result;
		result1 += "\n";
	}
	for (int i = 0; i < 5; i++) {
		nomal_simul->legend_nomal();
		nomal_simul->count++;
		result2 += nomal_simul->result;
		result2 += "\n";
	}
	this->label4->Text = result1;
	this->label8->Text = result2;
	this->label6->Text = nomal_simul->legend_count + " 장";
	this->label7->Text = nomal_simul->hero_count + " 장";
	this->label11->Text = nomal_simul->rare_count + " 장";
	this->label13->Text = nomal_simul->advanced_count + " 장";
	this->label15->Text = nomal_simul->nomal_count + " 장";
	this->label9->Text = "총 " + nomal_simul->count + " 장";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	nomal_simul->legend_count = 0;
	nomal_simul->hero_count = 0;
	nomal_simul->rare_count = 0;
	nomal_simul->nomal_count = 0;
	nomal_simul->count = 0;
	this->label9->Text = "총 " + nomal_simul->count + " 장";
	this->label6->Text = nomal_simul->legend_count + " 장";
	this->label7->Text = nomal_simul->hero_count + " 장";
	this->label11->Text = nomal_simul->rare_count + " 장";
	this->label13->Text = nomal_simul->advanced_count + " 장";
	this->label15->Text = nomal_simul->nomal_count + " 장";
	this->label4->Text = "";
	this->label8->Text = "";
}
};
}
