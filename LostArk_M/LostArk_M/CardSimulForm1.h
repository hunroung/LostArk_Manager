#pragma once
#include "CardSimulHeader.h"

namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// CardSimulForm에 대한 요약입니다.
	/// </summary>
	public ref class CardSimulForm : public System::Windows::Forms::Form
	{
	public:
		CardSimulForm(void)
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
		~CardSimulForm()
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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
		   //클래스 선언
	private: Card::Cardsimulator^ simul = gcnew Card::Cardsimulator();
	private: System::Windows::Forms::Label^ label4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"굴림", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(131, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"전설 카드 팩 II";
			this->label1->Click += gcnew System::EventHandler(this, &CardSimulForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"굴림", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(131, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"영웅 카드 팩";
			this->label2->Click += gcnew System::EventHandler(this, &CardSimulForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1장";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CardSimulForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(271, 273);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 60);
			this->button2->TabIndex = 1;
			this->button2->Text = L"10장";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CardSimulForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(503, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L"화초기";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(208, 372);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 12);
			this->label3->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(314, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 12);
			this->label4->TabIndex = 4;
			this->label4->Text = L"0장";
			// 
			// CardSimulForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(684, 561);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CardSimulForm";
			this->Load += gcnew System::EventHandler(this, &CardSimulForm::CardSimulForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		simul->legend_hero();
		this->label3->Text = simul->result;
		array <String^>^ abyss_list = gcnew array<String^>(19) {
			"웨이", "실리안", "바훈투르", "니나브", "아제나&이난나", "샨디", "카단", "에스더 시엔", "베아트리스", "일리아칸", "에스더 갈라투르", "광기를 잃은 쿠크세이튼", "에스더 루테란", "진저웨일", "마수군단장 발탄", "광기군단장 쿠크세이튼", "욕망군단장 비아키스", "카멘", "아브렐슈드"
		};
	}
private: System::Void CardSimulForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ test="";
	for (int i = 0; i < 10; i++) {
		simul->legend_hero();
		test += simul->result;
		test += "\n";
	}
	this->label3->Text = test;
}
};
}
