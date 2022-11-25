#pragma once
#include "RaidCalHeader.h"
#include "Gackin.h"



namespace LostArkM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GackinForm에 대한 요약입니다.
	/// </summary>
	public ref class GackinForm : public System::Windows::Forms::Form
	{
	public:
		GackinForm(void)
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
		~GackinForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		String^ fold;
		Gackin_info* gackin_info;
		int page = 0;
	private: Cal::Auction^ aution_3 = gcnew Cal::Auction();
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ search;
	protected:

	private: System::Windows::Forms::Label^ g_1;
	private: System::Windows::Forms::Label^ g_2;
	private: System::Windows::Forms::Label^ g_3;
	private: System::Windows::Forms::Label^ g_4;
	private: System::Windows::Forms::Label^ g_5;
	private: System::Windows::Forms::Label^ g_6;






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;






	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;



	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ next;
	private: System::Windows::Forms::Button^ pre;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GackinForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->g_1 = (gcnew System::Windows::Forms::Label());
			this->g_2 = (gcnew System::Windows::Forms::Label());
			this->g_3 = (gcnew System::Windows::Forms::Label());
			this->g_4 = (gcnew System::Windows::Forms::Label());
			this->g_5 = (gcnew System::Windows::Forms::Label());
			this->g_6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->next = (gcnew System::Windows::Forms::Button());
			this->pre = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(23, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 35);
			this->textBox1->TabIndex = 0;
			// 
			// search
			// 
			this->search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->Location = System::Drawing::Point(177, 77);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(73, 34);
			this->search->TabIndex = 1;
			this->search->Text = L"검색";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &GackinForm::button1_Click);
			// 
			// g_1
			// 
			this->g_1->AutoSize = true;
			this->g_1->BackColor = System::Drawing::Color::Maroon;
			this->g_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_1->ForeColor = System::Drawing::Color::White;
			this->g_1->Location = System::Drawing::Point(80, 196);
			this->g_1->Name = L"g_1";
			this->g_1->Size = System::Drawing::Size(0, 29);
			this->g_1->TabIndex = 2;
			// 
			// g_2
			// 
			this->g_2->AutoSize = true;
			this->g_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->g_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_2->ForeColor = System::Drawing::Color::White;
			this->g_2->Location = System::Drawing::Point(80, 253);
			this->g_2->Name = L"g_2";
			this->g_2->Size = System::Drawing::Size(0, 29);
			this->g_2->TabIndex = 3;
			// 
			// g_3
			// 
			this->g_3->AutoSize = true;
			this->g_3->BackColor = System::Drawing::Color::Maroon;
			this->g_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_3->ForeColor = System::Drawing::Color::White;
			this->g_3->Location = System::Drawing::Point(80, 311);
			this->g_3->Name = L"g_3";
			this->g_3->Size = System::Drawing::Size(0, 29);
			this->g_3->TabIndex = 4;
			// 
			// g_4
			// 
			this->g_4->AutoSize = true;
			this->g_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->g_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_4->ForeColor = System::Drawing::Color::White;
			this->g_4->Location = System::Drawing::Point(80, 369);
			this->g_4->Name = L"g_4";
			this->g_4->Size = System::Drawing::Size(0, 29);
			this->g_4->TabIndex = 5;
			// 
			// g_5
			// 
			this->g_5->AutoSize = true;
			this->g_5->BackColor = System::Drawing::Color::Maroon;
			this->g_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_5->ForeColor = System::Drawing::Color::White;
			this->g_5->Location = System::Drawing::Point(80, 426);
			this->g_5->Name = L"g_5";
			this->g_5->Size = System::Drawing::Size(0, 29);
			this->g_5->TabIndex = 6;
			// 
			// g_6
			// 
			this->g_6->AutoSize = true;
			this->g_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->g_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_6->ForeColor = System::Drawing::Color::White;
			this->g_6->Location = System::Drawing::Point(80, 484);
			this->g_6->Name = L"g_6";
			this->g_6->Size = System::Drawing::Size(0, 29);
			this->g_6->TabIndex = 7;
			this->g_6->Click += gcnew System::EventHandler(this, &GackinForm::label6_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(-5, -3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(308, 55);
			this->panel1->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(93, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 31);
			this->label7->TabIndex = 5;
			this->label7->Text = L"각인추천기";
			this->label7->Click += gcnew System::EventHandler(this, &GackinForm::label7_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(88, 151);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 31);
			this->label8->TabIndex = 6;
			this->label8->Text = L"각인";
			this->label8->Click += gcnew System::EventHandler(this, &GackinForm::label8_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->ForeColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(1, 185);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(302, 50);
			this->panel2->TabIndex = 15;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel3->ForeColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(1, 241);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(302, 50);
			this->panel3->TabIndex = 16;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel5->ForeColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(1, 359);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(302, 50);
			this->panel5->TabIndex = 17;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Maroon;
			this->panel6->ForeColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(1, 415);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(302, 50);
			this->panel6->TabIndex = 17;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel7->ForeColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(1, 471);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(302, 50);
			this->panel7->TabIndex = 18;
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(20, 115);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(219, 15);
			this->label17->TabIndex = 6;
			this->label17->Text = L"(직업 각인 이름을 정확히 입력해주세요)";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Maroon;
			this->panel4->ForeColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(1, 297);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(302, 56);
			this->panel4->TabIndex = 16;
			// 
			// next
			// 
			this->next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->next->Location = System::Drawing::Point(236, 151);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(54, 28);
			this->next->TabIndex = 19;
			this->next->Text = L"다음";
			this->next->UseVisualStyleBackColor = true;
			this->next->Click += gcnew System::EventHandler(this, &GackinForm::next_Click);
			// 
			// pre
			// 
			this->pre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pre->Location = System::Drawing::Point(177, 151);
			this->pre->Name = L"pre";
			this->pre->Size = System::Drawing::Size(54, 28);
			this->pre->TabIndex = 20;
			this->pre->Text = L"이전";
			this->pre->UseVisualStyleBackColor = true;
			this->pre->Click += gcnew System::EventHandler(this, &GackinForm::pre_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(20, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 15);
			this->label1->TabIndex = 21;
			this->label1->Text = L"(호크아이는 호크아이 입니다.)";
			// 
			// GackinForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(302, 561);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pre);
			this->Controls->Add(this->next);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->g_6);
			this->Controls->Add(this->g_5);
			this->Controls->Add(this->g_4);
			this->Controls->Add(this->g_3);
			this->Controls->Add(this->g_2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->g_1);
			this->Controls->Add(this->search);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximumSize = System::Drawing::Size(318, 600);
			this->MinimumSize = System::Drawing::Size(318, 600);
			this->Name = L"GackinForm";
			this->Load += gcnew System::EventHandler(this, &GackinForm::GackinForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fold = this->textBox1->Text;
		std::string change_2 = "";
		aution_3->MarshalString(fold, change_2);
		char arr_name[60];
		strcpy(arr_name, change_2.c_str());
		gackin_info = new Gackin_info(arr_name);
		page =gackin_info->check_p(0, 0);

		String^ str4 = gcnew String(gackin_info->p_gackin(page,0)); // String -> String^
		this->g_1->Text = str4;

		String^ str5 = gcnew String(gackin_info->p_gackin(page, 1)); // String -> String^
		this->g_2->Text = str5;

		String^ str6 = gcnew String(gackin_info->p_gackin(page, 2)); // String -> String^
		this->g_3->Text = str6;

		String^ str7 = gcnew String(gackin_info->p_gackin(page, 3)); // String -> String^
		this->g_4->Text = str7;

		String^ str8 = gcnew String(gackin_info->p_gackin(page, 4)); // String -> String^
		this->g_5->Text = str8;

		String^ str9 = gcnew String(gackin_info->p_gackin(page, 5)); // String -> String^
		this->g_6->Text = str9;
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void GackinForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pre_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = page;
	page = gackin_info->check_s(i-1, i);
	String^ str4 = gcnew String(gackin_info->p_gackin(page, 0)); // String -> String^
	this->g_1->Text = str4;

	String^ str5 = gcnew String(gackin_info->p_gackin(page, 1)); // String -> String^
	this->g_2->Text = str5;

	String^ str6 = gcnew String(gackin_info->p_gackin(page, 2)); // String -> String^
	this->g_3->Text = str6;

	String^ str7 = gcnew String(gackin_info->p_gackin(page, 3)); // String -> String^
	this->g_4->Text = str7;

	String^ str8 = gcnew String(gackin_info->p_gackin(page, 4)); // String -> String^
	this->g_5->Text = str8;

	String^ str9 = gcnew String(gackin_info->p_gackin(page, 5)); // String -> String^
	this->g_6->Text = str9;
}
private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = page;
	page = gackin_info->check_p(i + 1, i);
	String^ str4 = gcnew String(gackin_info->p_gackin(page, 0)); // String -> String^
	this->g_1->Text = str4;

	String^ str5 = gcnew String(gackin_info->p_gackin(page, 1)); // String -> String^
	this->g_2->Text = str5;

	String^ str6 = gcnew String(gackin_info->p_gackin(page, 2)); // String -> String^
	this->g_3->Text = str6;

	String^ str7 = gcnew String(gackin_info->p_gackin(page, 3)); // String -> String^
	this->g_4->Text = str7;

	String^ str8 = gcnew String(gackin_info->p_gackin(page, 4)); // String -> String^
	this->g_5->Text = str8;

	String^ str9 = gcnew String(gackin_info->p_gackin(page, 5)); // String -> String^
	this->g_6->Text = str9;
}
};
}
