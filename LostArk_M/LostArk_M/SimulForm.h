#pragma once
#include "CardSimulForm1.h"

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
			this->rock->Location = System::Drawing::Point(25, 12);
			this->rock->Name = L"rock";
			this->rock->Size = System::Drawing::Size(234, 63);
			this->rock->TabIndex = 0;
			this->rock->Text = L"button1";
			this->rock->UseVisualStyleBackColor = true;
			// 
			// legend
			// 
			this->legend->Location = System::Drawing::Point(25, 98);
			this->legend->Name = L"legend";
			this->legend->Size = System::Drawing::Size(234, 63);
			this->legend->TabIndex = 1;
			this->legend->Text = L"button2";
			this->legend->UseVisualStyleBackColor = true;
			// 
			// abyss
			// 
			this->abyss->Location = System::Drawing::Point(25, 183);
			this->abyss->Name = L"abyss";
			this->abyss->Size = System::Drawing::Size(234, 63);
			this->abyss->TabIndex = 2;
			this->abyss->Text = L"button3";
			this->abyss->UseVisualStyleBackColor = true;
			// 
			// le_hero
			// 
			this->le_hero->Location = System::Drawing::Point(25, 273);
			this->le_hero->Name = L"le_hero";
			this->le_hero->Size = System::Drawing::Size(234, 63);
			this->le_hero->TabIndex = 3;
			this->le_hero->Text = L"button4";
			this->le_hero->UseVisualStyleBackColor = true;
			this->le_hero->Click += gcnew System::EventHandler(this, &SimulForm::le_hero_Click);
			// 
			// le_rare
			// 
			this->le_rare->Location = System::Drawing::Point(297, 12);
			this->le_rare->Name = L"le_rare";
			this->le_rare->Size = System::Drawing::Size(234, 63);
			this->le_rare->TabIndex = 4;
			this->le_rare->Text = L"button5";
			this->le_rare->UseVisualStyleBackColor = true;
			// 
			// le_abvanced
			// 
			this->le_abvanced->Location = System::Drawing::Point(297, 98);
			this->le_abvanced->Name = L"le_abvanced";
			this->le_abvanced->Size = System::Drawing::Size(234, 63);
			this->le_abvanced->TabIndex = 5;
			this->le_abvanced->Text = L"button6";
			this->le_abvanced->UseVisualStyleBackColor = true;
			// 
			// le_nomal
			// 
			this->le_nomal->Location = System::Drawing::Point(297, 183);
			this->le_nomal->Name = L"le_nomal";
			this->le_nomal->Size = System::Drawing::Size(234, 63);
			this->le_nomal->TabIndex = 6;
			this->le_nomal->Text = L"button7";
			this->le_nomal->UseVisualStyleBackColor = true;
			// 
			// jewel
			// 
			this->jewel->Location = System::Drawing::Point(297, 273);
			this->jewel->Name = L"jewel";
			this->jewel->Size = System::Drawing::Size(234, 63);
			this->jewel->TabIndex = 7;
			this->jewel->Text = L"button8";
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void le_hero_Click(System::Object^ sender, System::EventArgs^ e) {
		CardSimulForm^ cardsimulform = gcnew CardSimulForm();
		this->Hide();
		cardsimulform->ShowDialog();
		this->Show();
	}
};
}
