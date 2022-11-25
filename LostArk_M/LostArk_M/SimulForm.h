#pragma once
#include "Card_le_heroForm.h"
#include "Card_le_rareForm.h"
#include "Card_le_advancedForm.h"
#include "Card_le_nomalForm.h"
#include "LegendForm.h"
#include "AbyssForm.h"
#include "RockForm.h"

namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SimulForm에 대한 요약입니다.
	/// </summary>
	public ref class SimulForm : public System::Windows::Forms::Form
	{
	public:
		SimulForm(void)
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
		~SimulForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ rock;
	private: System::Windows::Forms::Button^ legend;
	private: System::Windows::Forms::Button^ abyss;
	private: System::Windows::Forms::Button^ le_hero;
	private: System::Windows::Forms::Button^ le_rare;
	private: System::Windows::Forms::Button^ le_abvanced;
	private: System::Windows::Forms::Button^ le_nomal;
	private: System::Windows::Forms::Button^ jewel;
	protected:








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SimulForm::typeid));
			this->rock = (gcnew System::Windows::Forms::Button());
			this->legend = (gcnew System::Windows::Forms::Button());
			this->abyss = (gcnew System::Windows::Forms::Button());
			this->le_hero = (gcnew System::Windows::Forms::Button());
			this->le_rare = (gcnew System::Windows::Forms::Button());
			this->le_abvanced = (gcnew System::Windows::Forms::Button());
			this->le_nomal = (gcnew System::Windows::Forms::Button());
			this->jewel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// rock
			// 
			this->rock->BackColor = System::Drawing::Color::White;
			this->rock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rock.Image")));
			this->rock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->rock->Location = System::Drawing::Point(25, 12);
			this->rock->Name = L"rock";
			this->rock->Size = System::Drawing::Size(234, 63);
			this->rock->TabIndex = 0;
			this->rock->Text = L"어빌리티 스톤 세공";
			this->rock->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rock->UseVisualStyleBackColor = false;
			this->rock->Click += gcnew System::EventHandler(this, &SimulForm::rock_Click);
			// 
			// legend
			// 
			this->legend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->legend->ForeColor = System::Drawing::SystemColors::ControlText;
			this->legend->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"legend.Image")));
			this->legend->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->legend->Location = System::Drawing::Point(25, 98);
			this->legend->Name = L"legend";
			this->legend->Size = System::Drawing::Size(234, 63);
			this->legend->TabIndex = 1;
			this->legend->Text = L"전설 카드 팩  ";
			this->legend->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->legend->UseVisualStyleBackColor = true;
			this->legend->Click += gcnew System::EventHandler(this, &SimulForm::legend_Click);
			// 
			// abyss
			// 
			this->abyss->BackColor = System::Drawing::Color::White;
			this->abyss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->abyss->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"abyss.Image")));
			this->abyss->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->abyss->Location = System::Drawing::Point(25, 183);
			this->abyss->Name = L"abyss";
			this->abyss->Size = System::Drawing::Size(234, 63);
			this->abyss->TabIndex = 2;
			this->abyss->Text = L"심연의 전설 카드 팩";
			this->abyss->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->abyss->UseVisualStyleBackColor = false;
			this->abyss->Click += gcnew System::EventHandler(this, &SimulForm::abyss_Click);
			// 
			// le_hero
			// 
			this->le_hero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->le_hero->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"le_hero.Image")));
			this->le_hero->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->le_hero->Location = System::Drawing::Point(25, 273);
			this->le_hero->Name = L"le_hero";
			this->le_hero->Size = System::Drawing::Size(234, 63);
			this->le_hero->TabIndex = 3;
			this->le_hero->Text = L"전설 - 영웅 카드 팩";
			this->le_hero->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->le_hero->UseVisualStyleBackColor = true;
			this->le_hero->Click += gcnew System::EventHandler(this, &SimulForm::le_hero_Click);
			// 
			// le_rare
			// 
			this->le_rare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->le_rare->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"le_rare.Image")));
			this->le_rare->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->le_rare->Location = System::Drawing::Point(297, 12);
			this->le_rare->Name = L"le_rare";
			this->le_rare->Size = System::Drawing::Size(234, 63);
			this->le_rare->TabIndex = 4;
			this->le_rare->Text = L"전설 - 희귀 카드 팩";
			this->le_rare->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->le_rare->UseVisualStyleBackColor = true;
			this->le_rare->Click += gcnew System::EventHandler(this, &SimulForm::le_rare_Click);
			// 
			// le_abvanced
			// 
			this->le_abvanced->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->le_abvanced->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"le_abvanced.Image")));
			this->le_abvanced->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->le_abvanced->Location = System::Drawing::Point(297, 98);
			this->le_abvanced->Name = L"le_abvanced";
			this->le_abvanced->Size = System::Drawing::Size(234, 63);
			this->le_abvanced->TabIndex = 5;
			this->le_abvanced->Text = L"전설 - 고급 카드 팩";
			this->le_abvanced->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->le_abvanced->UseVisualStyleBackColor = true;
			this->le_abvanced->Click += gcnew System::EventHandler(this, &SimulForm::le_abvanced_Click);
			// 
			// le_nomal
			// 
			this->le_nomal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->le_nomal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"le_nomal.Image")));
			this->le_nomal->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->le_nomal->Location = System::Drawing::Point(297, 183);
			this->le_nomal->Name = L"le_nomal";
			this->le_nomal->Size = System::Drawing::Size(234, 63);
			this->le_nomal->TabIndex = 6;
			this->le_nomal->Text = L"전체 카드 팩    ";
			this->le_nomal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->le_nomal->UseVisualStyleBackColor = true;
			this->le_nomal->Click += gcnew System::EventHandler(this, &SimulForm::le_nomal_Click);
			// 
			// jewel
			// 
			this->jewel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jewel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->jewel->Location = System::Drawing::Point(297, 273);
			this->jewel->Name = L"jewel";
			this->jewel->Size = System::Drawing::Size(234, 63);
			this->jewel->TabIndex = 7;
			this->jewel->Text = L". . .";
			this->jewel->UseVisualStyleBackColor = true;
			// 
			// SimulForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(553, 361);
			this->Controls->Add(this->jewel);
			this->Controls->Add(this->le_nomal);
			this->Controls->Add(this->le_abvanced);
			this->Controls->Add(this->le_rare);
			this->Controls->Add(this->le_hero);
			this->Controls->Add(this->abyss);
			this->Controls->Add(this->legend);
			this->Controls->Add(this->rock);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(569, 400);
			this->MinimumSize = System::Drawing::Size(569, 400);
			this->Name = L"SimulForm";
			this->Load += gcnew System::EventHandler(this, &SimulForm::SimulForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void le_hero_Click(System::Object^ sender, System::EventArgs^ e) {
		Card_le_heroForm^ card_le_hero = gcnew Card_le_heroForm();
		this->Hide();
		card_le_hero->ShowDialog();
		this->Show();
}
private: System::Void SimulForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void le_rare_Click(System::Object^ sender, System::EventArgs^ e) {
	Card_le_rareForm^ card_le_rare = gcnew Card_le_rareForm();
	this->Hide();
	card_le_rare->ShowDialog();
	this->Show();
}
private: System::Void le_abvanced_Click(System::Object^ sender, System::EventArgs^ e) {
	Card_le_advancedForm^ card_le_advanced = gcnew Card_le_advancedForm();
	this->Hide();
	card_le_advanced->ShowDialog();
	this->Show();
}
private: System::Void le_nomal_Click(System::Object^ sender, System::EventArgs^ e) {
	Card_le_nomalForm^ card_le_nomal = gcnew Card_le_nomalForm();
	this->Hide();
	card_le_nomal->ShowDialog();
	this->Show();
}
private: System::Void legend_Click(System::Object^ sender, System::EventArgs^ e) {
	LegendForm^ legend = gcnew LegendForm();
	this->Hide();
	legend->ShowDialog();
	this->Show();
}
private: System::Void abyss_Click(System::Object^ sender, System::EventArgs^ e) {
	AbyssForm^ abyss = gcnew AbyssForm();
	this->Hide();
	abyss->ShowDialog();
	this->Show();
}
private: System::Void rock_Click(System::Object^ sender, System::EventArgs^ e) {
	RockForm^ rock = gcnew RockForm();
	this->Hide();
	rock->ShowDialog();
	this->Show();
}
};
}
