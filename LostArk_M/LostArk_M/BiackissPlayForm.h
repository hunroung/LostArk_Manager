#pragma once

namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// BiackissPlayForm에 대한 요약입니다.
	/// </summary>
	public ref class BiackissPlayForm : public System::Windows::Forms::Form
	{
	public:
		BiackissPlayForm(void)
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
		~BiackissPlayForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BiackissPlayForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(5, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(576, 57);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(195, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"욕망군단장 비아키스";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(198, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(70, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1 관문";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BiackissPlayForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(240, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2 관문";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BiackissPlayForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(97, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(403, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 37);
			this->button3->TabIndex = 5;
			this->button3->Text = L"3 관문";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BiackissPlayForm::button3_Click);
			// 
			// BiackissPlayForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(584, 761);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(600, 800);
			this->MinimumSize = System::Drawing::Size(600, 800);
			this->Name = L"BiackissPlayForm";
			this->Text = L"BiackissPlayForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ bossname = "보스 : 인큐버스 모르페";
		this->label2->Text = bossname;
		String^ path = "biackiss_1.txt";
		String^ biackiss1 = "";

		try
		{
			StreamReader^ din = File::OpenText(path);
			String^ str;
			while ((str = din->ReadLine()) != nullptr)
			{
				Console::WriteLine("line ", str);
				biackiss1 += str;
				biackiss1 += "\n";
			}
		}
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				Console::WriteLine("not found", path);
			else
				Console::WriteLine("problem", path);
		}
		this->label3->Text = biackiss1;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ bossname = "욕망의 탐식자 비아키스";
	this->label2->Text = bossname;
	String^ path = "biackiss_2.txt";
	String^ biackiss2 = "";

	try
	{
		StreamReader^ din = File::OpenText(path);
		String^ str;
		while ((str = din->ReadLine()) != nullptr)
		{
			Console::WriteLine("line ", str);
			biackiss2 += str;
			biackiss2 += "\n";
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			Console::WriteLine("not found", path);
		else
			Console::WriteLine("problem", path);
	}
	this->label3->Text = biackiss2;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ bossname = "욕망군단장 비아키스";
	this->label2->Text = bossname;
	String^ path = "biackiss_3.txt";
	String^ biackiss3 = "";

	try
	{
		StreamReader^ din = File::OpenText(path);
		String^ str;
		while ((str = din->ReadLine()) != nullptr)
		{
			Console::WriteLine("line ", str);
			biackiss3 += str;
			biackiss3 += "\n";
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			Console::WriteLine("not found", path);
		else
			Console::WriteLine("problem", path);
	}
	this->label3->Text = biackiss3;
}
};
}
