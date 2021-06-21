#pragma once
//include header file of class Soldier
#include "Soldier.h"
//include form for print result of Sort show, Weapon show, Blood show, No ammo show buttons
#include "Result.h"
//include form for print result of Get age show button
#include "Age.h"

namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//string name of file
	string filename = "Coursework";
	//string path of file
	string path = "Coursework.txt";
	//bool variable which is true when there is changes and false when there is no changes
	bool checkChanges = false;
	//global vector of soldiers
	vector<Soldier> Soldiers;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ formatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ AgeCheck;
	private: System::Windows::Forms::Label^ BloodCheck;
	private: System::Windows::Forms::Label^ RankCheck;
	private: System::Windows::Forms::Label^ WeaponCheck;
	private: System::Windows::Forms::Label^ RifleCheck;
	private: System::Windows::Forms::Label^ PistolCheck;
	private: System::Windows::Forms::Label^ ExplosiveCheck;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::Label^ AddCheck;
	private: System::Windows::Forms::Label^ EditCheck;
	private: System::Windows::Forms::Label^ DeleteCheck;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ToolStripMenuItem^ guideToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->AgeCheck = (gcnew System::Windows::Forms::Label());
			this->BloodCheck = (gcnew System::Windows::Forms::Label());
			this->RankCheck = (gcnew System::Windows::Forms::Label());
			this->WeaponCheck = (gcnew System::Windows::Forms::Label());
			this->RifleCheck = (gcnew System::Windows::Forms::Label());
			this->PistolCheck = (gcnew System::Windows::Forms::Label());
			this->ExplosiveCheck = (gcnew System::Windows::Forms::Label());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->AddCheck = (gcnew System::Windows::Forms::Label());
			this->EditCheck = (gcnew System::Windows::Forms::Label());
			this->DeleteCheck = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->formatToolStripMenuItem, this->helpToolStripMenuItem, this->aboutToolStripMenuItem, this->guideToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1445, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->createToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->createToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->createToolStripMenuItem->Text = L"Create";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->closeToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::closeToolStripMenuItem_Click);
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fontToolStripMenuItem });
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			this->formatToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->formatToolStripMenuItem->Text = L"Format";
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->fontToolStripMenuItem->Text = L"Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// guideToolStripMenuItem
			// 
			this->guideToolStripMenuItem->Name = L"guideToolStripMenuItem";
			this->guideToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->guideToolStripMenuItem->Text = L"Guide";
			this->guideToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::guideToolStripMenuItem_Click_1);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 25;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Location = System::Drawing::Point(0, 31);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidth = 55;
			this->dataGridView1->RowTemplate->Height = 25;
			this->dataGridView1->Size = System::Drawing::Size(1095, 624);
			this->dataGridView1->TabIndex = 1;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Cornsilk;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1112, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Cornsilk;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1112, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 42);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Surname";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Cornsilk;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1112, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 42);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Age";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Cornsilk;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1112, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 42);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Blood";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Cornsilk;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1112, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 42);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Rank";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Cornsilk;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1112, 305);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 42);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Weapon";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Cornsilk;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1112, 358);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 42);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Rifle";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Cornsilk;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(1112, 411);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 42);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Pistol";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Cornsilk;
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(1112, 465);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 42);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Explosive";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(1249, 151);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(157, 39);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(1249, 203);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(157, 39);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(1249, 255);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(157, 39);
			this->comboBox3->TabIndex = 13;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(1249, 308);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(157, 39);
			this->comboBox4->TabIndex = 14;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(1249, 361);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(157, 39);
			this->comboBox5->TabIndex = 15;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(1249, 414);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(157, 39);
			this->comboBox6->TabIndex = 16;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(1249, 468);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(157, 39);
			this->comboBox7->TabIndex = 17;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(1249, 44);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 38);
			this->textBox1->TabIndex = 18;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(1249, 94);
			this->textBox2->MaxLength = 10;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 38);
			this->textBox2->TabIndex = 19;
			// 
			// AgeCheck
			// 
			this->AgeCheck->AutoSize = true;
			this->AgeCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AgeCheck->ForeColor = System::Drawing::Color::Red;
			this->AgeCheck->Location = System::Drawing::Point(1412, 151);
			this->AgeCheck->Name = L"AgeCheck";
			this->AgeCheck->Size = System::Drawing::Size(23, 29);
			this->AgeCheck->TabIndex = 20;
			this->AgeCheck->Text = L"*";
			// 
			// BloodCheck
			// 
			this->BloodCheck->AutoSize = true;
			this->BloodCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BloodCheck->ForeColor = System::Drawing::Color::Red;
			this->BloodCheck->Location = System::Drawing::Point(1412, 203);
			this->BloodCheck->Name = L"BloodCheck";
			this->BloodCheck->Size = System::Drawing::Size(23, 29);
			this->BloodCheck->TabIndex = 21;
			this->BloodCheck->Text = L"*";
			// 
			// RankCheck
			// 
			this->RankCheck->AutoSize = true;
			this->RankCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RankCheck->ForeColor = System::Drawing::Color::Red;
			this->RankCheck->Location = System::Drawing::Point(1412, 255);
			this->RankCheck->Name = L"RankCheck";
			this->RankCheck->Size = System::Drawing::Size(23, 29);
			this->RankCheck->TabIndex = 22;
			this->RankCheck->Text = L"*";
			// 
			// WeaponCheck
			// 
			this->WeaponCheck->AutoSize = true;
			this->WeaponCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WeaponCheck->ForeColor = System::Drawing::Color::Red;
			this->WeaponCheck->Location = System::Drawing::Point(1412, 308);
			this->WeaponCheck->Name = L"WeaponCheck";
			this->WeaponCheck->Size = System::Drawing::Size(23, 29);
			this->WeaponCheck->TabIndex = 23;
			this->WeaponCheck->Text = L"*";
			// 
			// RifleCheck
			// 
			this->RifleCheck->AutoSize = true;
			this->RifleCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RifleCheck->ForeColor = System::Drawing::Color::Red;
			this->RifleCheck->Location = System::Drawing::Point(1412, 361);
			this->RifleCheck->Name = L"RifleCheck";
			this->RifleCheck->Size = System::Drawing::Size(0, 29);
			this->RifleCheck->TabIndex = 24;
			// 
			// PistolCheck
			// 
			this->PistolCheck->AutoSize = true;
			this->PistolCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PistolCheck->ForeColor = System::Drawing::Color::Red;
			this->PistolCheck->Location = System::Drawing::Point(1412, 414);
			this->PistolCheck->Name = L"PistolCheck";
			this->PistolCheck->Size = System::Drawing::Size(0, 29);
			this->PistolCheck->TabIndex = 25;
			// 
			// ExplosiveCheck
			// 
			this->ExplosiveCheck->AutoSize = true;
			this->ExplosiveCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExplosiveCheck->ForeColor = System::Drawing::Color::Red;
			this->ExplosiveCheck->Location = System::Drawing::Point(1412, 468);
			this->ExplosiveCheck->Name = L"ExplosiveCheck";
			this->ExplosiveCheck->Size = System::Drawing::Size(0, 29);
			this->ExplosiveCheck->TabIndex = 26;
			// 
			// comboBox8
			// 
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(1249, 524);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(157, 39);
			this->comboBox8->TabIndex = 27;
			this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox8_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lavender;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1111, 521);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 42);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lavender;
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1111, 569);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 42);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lavender;
			this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1111, 617);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 42);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox9
			// 
			this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(1249, 572);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(157, 39);
			this->comboBox9->TabIndex = 31;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox9_SelectedIndexChanged);
			// 
			// comboBox10
			// 
			this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(1249, 620);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(157, 39);
			this->comboBox10->TabIndex = 32;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox10_SelectedIndexChanged);
			// 
			// AddCheck
			// 
			this->AddCheck->AutoSize = true;
			this->AddCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCheck->ForeColor = System::Drawing::Color::Red;
			this->AddCheck->Location = System::Drawing::Point(1412, 524);
			this->AddCheck->Name = L"AddCheck";
			this->AddCheck->Size = System::Drawing::Size(0, 29);
			this->AddCheck->TabIndex = 33;
			// 
			// EditCheck
			// 
			this->EditCheck->AutoSize = true;
			this->EditCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EditCheck->ForeColor = System::Drawing::Color::Red;
			this->EditCheck->Location = System::Drawing::Point(1412, 572);
			this->EditCheck->Name = L"EditCheck";
			this->EditCheck->Size = System::Drawing::Size(0, 29);
			this->EditCheck->TabIndex = 34;
			// 
			// DeleteCheck
			// 
			this->DeleteCheck->AutoSize = true;
			this->DeleteCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteCheck->ForeColor = System::Drawing::Color::Red;
			this->DeleteCheck->Location = System::Drawing::Point(1412, 620);
			this->DeleteCheck->Name = L"DeleteCheck";
			this->DeleteCheck->Size = System::Drawing::Size(0, 29);
			this->DeleteCheck->TabIndex = 35;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lavender;
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 669);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 42);
			this->button4->TabIndex = 36;
			this->button4->Text = L"Sort show";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Lavender;
			this->button5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(167, 669);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(193, 42);
			this->button5->TabIndex = 37;
			this->button5->Text = L"Avg age show";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Lavender;
			this->button6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(366, 669);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(196, 42);
			this->button6->TabIndex = 38;
			this->button6->Text = L"Weapon show";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Lavender;
			this->button7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(568, 669);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 42);
			this->button7->TabIndex = 39;
			this->button7->Text = L"Blood show";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Lavender;
			this->button8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(744, 669);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(204, 42);
			this->button8->TabIndex = 40;
			this->button8->Text = L"No ammo show";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1445, 723);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->DeleteCheck);
			this->Controls->Add(this->EditCheck);
			this->Controls->Add(this->AddCheck);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->ExplosiveCheck);
			this->Controls->Add(this->PistolCheck);
			this->Controls->Add(this->RifleCheck);
			this->Controls->Add(this->WeaponCheck);
			this->Controls->Add(this->RankCheck);
			this->Controls->Add(this->BloodCheck);
			this->Controls->Add(this->AgeCheck);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Coursework";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//function which initalize width and height, header cells and row count of dataGrivView
		void PrepareDataGrid(DataGridView^ data, int countRows)
		{
			data->Rows->Clear();
			data->RowCount = countRows;
			data->ColumnCount = 9;
			data->TopLeftHeaderCell->Value = "Number";

			data->Columns[0]->Width = 100;
			data->Columns[1]->Width = 100;
			data->Columns[2]->Width = 55;
			data->Columns[3]->Width = 55;
			data->Columns[4]->Width = 100;
			data->Columns[5]->Width = 55;
			data->Columns[6]->Width = 100;
			data->Columns[7]->Width = 100;
			data->Columns[8]->Width = 100;

			data->Columns[0]->HeaderCell->Value = "Surname";
			data->Columns[1]->HeaderCell->Value = "Name";
			data->Columns[2]->HeaderCell->Value = "Age";
			data->Columns[3]->HeaderCell->Value = "Blood";
			data->Columns[4]->HeaderCell->Value = "Rank";
			data->Columns[5]->HeaderCell->Value = "Weapon";
			data->Columns[6]->HeaderCell->Value = "Rifle";
			data->Columns[7]->HeaderCell->Value = "Pistol";
			data->Columns[8]->HeaderCell->Value = "Explosive";

			for (int i = 0; i < countRows; i++)
			{
				data->Rows[i]->Height = 30;
				data->Rows[i]->HeaderCell->Value = (i + 1).ToString();
			}
		}

		//function which reset textBox, comboBox and labels and initialize comboBox
		void ResetForms()
		{
			textBox1->Clear();
			textBox2->Clear();

			comboBox1->SelectedIndex = -1;
			comboBox2->SelectedIndex = -1;
			comboBox3->SelectedIndex = -1;
			comboBox4->SelectedIndex = -1;
			comboBox5->SelectedIndex = -1;
			comboBox6->SelectedIndex = -1;
			comboBox7->SelectedIndex = -1;
			comboBox8->SelectedIndex = -1;
			comboBox9->SelectedIndex = -1;
			comboBox10->SelectedIndex = -1;

			AgeCheck->Text = "*";
			BloodCheck->Text = "*";
			RankCheck->Text = "*";
			WeaponCheck->Text = "*";
			RifleCheck->Text = "";
			PistolCheck->Text = "";
			ExplosiveCheck->Text = "";
			AddCheck->Text = "";
			EditCheck->Text = "";
			DeleteCheck->Text = "";

			comboBox8->Items->Clear();
			for (int i = 0; i <= Soldier::GetCountSoldiers(); i++)
			{
				comboBox8->Items->Add(StdToSys(to_string(i + 1)));
			}

			comboBox9->Items->Clear();
			for (int i = 0; i < Soldier::GetCountSoldiers(); i++)
			{
				comboBox9->Items->Add(StdToSys(to_string(i + 1)));
			}

			comboBox10->Items->Clear();
			for (int i = 0; i < Soldier::GetCountSoldiers(); i++)
			{
				comboBox10->Items->Add(StdToSys(to_string(i + 1)));
			}
		}
		
		//function which open file, print soldiers to file and close file
		void SaveFileFunction()
		{
			fstream fs;
			fs.exceptions(fstream::badbit | fstream::failbit);
			try
			{
				fs.open(path, fstream::out);
			}
			catch (const exception & ex)
			{
				string temp_ex = ex.what();
				MyException myexp("Opening-saving file error", temp_ex);
				myexp.WhatException();
				Application::Exit();
			}
			catch (...)
			{
				MyException unknown_excep("Opening-saving file error");
				unknown_excep.WhatException();
				Application::Exit();
			}
			
			for (int i = 0; i < Soldier::GetCountSoldiers(); i++)
			{
				Soldiers[i] << fs;
				if (i != (Soldier::GetCountSoldiers() - 1))
				{
					fs << endl;
				}
			}

			fs.close();
			checkChanges = false;
		}

		//function which open file, read soldiers from file and close file, show open file dialog
		void OpenFileFunction()
		{
			openFileDialog1->Filter = "Text File|*.txt";
			openFileDialog1->Title = "Open Coursework";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				path = SysToStd(openFileDialog1->FileName);
				filename = SysToStd(openFileDialog1->SafeFileName);

				fstream fs;
				fs.exceptions(fstream::badbit | fstream::failbit);
				try
				{
					fs.open(path, fstream::in);
					if (fs.eof())
					{
						throw MyException("Opening File", "File is empty\nPlease check data in file and try again later.");
					}
				}
				catch (const MyException & myex)
				{
					myex.WhatException();
					Application::Exit();
				}
				catch (const exception & ex)
				{
					string temp_ex = ex.what();
					MyException myexp("Opening file error", temp_ex);
					myexp.WhatException();
					exit(404);
				}
				catch (...)
				{
					MyException unknown_excep("Opening file error");
					unknown_excep.WhatException();
					exit(404);
				}

				Soldiers.clear();

				while (!fs.eof())
				{
					Soldier temp;
					temp >> fs;
					Soldiers.push_back(temp);
				}

				fs.close();

				PrepareDataGrid(dataGridView1, Soldier::GetCountSoldiers());
				ResetForms();
				for (int i = 0; i < Soldier::GetCountSoldiers(); i++)
				{
					Soldiers[i].PrintData(dataGridView1, i);
				}
			}
		}

		//function which check stirng value in textBox and return true if data is coorect and false if incorrect
		bool CheckString(TextBox^ text)
		{
			string tempString;
			tempString = SysToStd(text->Text);

			if (tempString.size() < 2)
			{
				text->Clear();
				return false;
			}
			for (int i = 0; i < tempString.size(); i++)
			{
				if (!isalpha(tempString[i]))
				{
					text->Clear();
					return false;
				}
			}
			return true;
		}

//function which change font and colour in dataGridView1
private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FontDialog^ font1 = gcnew FontDialog;
	font1->ShowColor = true;
	font1->ShowEffects = true;
	if (font1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle->Font = font1->Font;
		dataGridView1->DefaultCellStyle->ForeColor = font1->Color;
	}
}

//function which show instruction about program
private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	string helping = "Instruction:\n";
	helping += "1. To create file press Create in menu strip.\n";
	helping += "2. To open file press Open in menu strip and choose file in directory.\n";
	helping += "3. To save file press Save in menu strip.\n";
	helping += "4. To save file in directory press Save as in menu strip and choose path in directory.\n";
	helping += "5. To close program press Close in menu strip.\n";
	helping += "6. To add new element enter name and surname and choose fields with star, then choose row and press Add\n";
	helping += "7. To edit element enter name and surname and choose fields with star, then choose row and press Edit\n";
	helping += "8. To delete soldier choose row and press Delete\n";
	helping += "9. To see sorted soldiers you need to have minimum 2 elements and press Sort\n";
	helping += "10. To get average age you need to have minimum 1 elements and press Avg age\n";
	helping += "11. To see soldiers with more than 1 weapon, with AK-47 and RPG-7, with rifle and pistol you need to have minimum 1 elements and press Weapon\n";
	helping += "12. To see soldiers who are younger 25 and have -1 or 4 blood type you need to have minimum 1 elements and press Weapon\n";
	helping += "13. To see soldiers who are younger 20 and don`t have ammunition you need to have minimum 1 elements and press Weapon\n";
	helping += "14. To change colour press format and press font, then choose font and colour\n";
	helping += "15. To see information about project press About\n";
	helping += "16. To choose version of program press Edit and download files from github.com\n";
	helping += "17. If you get any error plsease follow the instructions in error message\n";
	MessageBox::Show(StdToSys(helping), "Coursework", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

//function which show information about creator
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Coursework made by Dutchak Bohdan\nMail: Dutchak.bohdan@gmail.com\nPhone: +380665495116", "Coursework", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

//function which direct to fold of project in ithub.com
private: System::Void guideToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	string link = "https://github.com/FanTeak/Coursework/tree/Final-patch";
	System::Diagnostics::Process::Start(StdToSys(link));
}

//function which save table to file and clear dataGrifView1 for new table
private: System::Void createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkChanges)
	{
		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("Save changes in " + StdToSys(filename) + "?", "Coursework", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
		switch (res)
		{
		case System::Windows::Forms::DialogResult::Yes:
		{
			if (path == "Coursework.txt")
			{
				saveFileDialog1->Filter = "Text File|*.txt";
				saveFileDialog1->Title = "Save Coursework";
				if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					path = SysToStd(saveFileDialog1->FileName);
					SaveFileFunction();

					PrepareDataGrid(dataGridView1, 1);
					Soldiers.clear();
					path = "Coursework.txt";
					ResetForms();
				}
			}
			else
			{
				SaveFileFunction();

				PrepareDataGrid(dataGridView1, 1);
				Soldiers.clear();
				path = "Coursework.txt";
				ResetForms();
			}
			break;
		}
		case System::Windows::Forms::DialogResult::No:
		{
			PrepareDataGrid(dataGridView1, 1);
			Soldiers.clear();
			path = "Coursework.txt";
			checkChanges = false;
			ResetForms();
			break;
		}
		case System::Windows::Forms::DialogResult::Cancel:
		{
			break;
		}
		}
	}
	else
	{
		PrepareDataGrid(dataGridView1, 1);
		Soldiers.clear();
		path = "Coursework";
		ResetForms();
	}
}

//function which save table to file and open new file
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkChanges)
	{
		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("Save changes in " + StdToSys(filename) + "?", "Coursework", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
		switch (res)
		{
		case System::Windows::Forms::DialogResult::Yes:
		{
			if (path == "Coursework.txt")
			{
				saveFileDialog1->Filter = "Text File|*.txt";
				saveFileDialog1->Title = "Save Coursework";
				if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					path = SysToStd(saveFileDialog1->FileName);
					SaveFileFunction();
					OpenFileFunction();
				}
			}
			else 
			{
				SaveFileFunction();
				OpenFileFunction();
			}
			break;
		}
		case System::Windows::Forms::DialogResult::No:
		{
			OpenFileFunction();
			checkChanges = false;
			break;
		}
		case System::Windows::Forms::DialogResult::Cancel:
		{
			break;
		}
		}
	}
	else
	{
		OpenFileFunction();
	}
}

//function which save table to file
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkChanges)
	{
		if (path == "Coursework.txt")
		{
			saveFileDialog1->Filter = "Text File|*.txt";
			saveFileDialog1->Title = "Save Coursework";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				path = SysToStd(saveFileDialog1->FileName);
				SaveFileFunction();
			}
		}
		else
		{
			SaveFileFunction();
		}
	}
}

//function which save table to choosen from save file dialog file
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Text File|*.txt";
	saveFileDialog1->Title = "Save Coursework";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		path = SysToStd(saveFileDialog1->FileName);
		SaveFileFunction();
	}
}

//function which save table to file and close program
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkChanges)
	{
		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("Save changes in " + StdToSys(filename) + "?", "Coursework", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
		switch (res)
		{
		case System::Windows::Forms::DialogResult::Yes:
		{
			if (path == "Coursework.txt")
			{
				saveFileDialog1->Filter = "Text File|*.txt";
				saveFileDialog1->Title = "Save Coursework";
				if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					path = SysToStd(saveFileDialog1->FileName);
					SaveFileFunction();
					Application::Exit();
				}
			}
			else
			{
				SaveFileFunction();
				Application::Exit();
			}

			break;
		}
		case System::Windows::Forms::DialogResult::No:
		{
			Application::Exit();
			break;
		}
		case System::Windows::Forms::DialogResult::Cancel:
		{
			break;
		}
		}
	}
	else
	{
		Application::Exit();
	}
}

//function which initialize dataGridView1 and comboBox
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	PrepareDataGrid(dataGridView1, 1);
	ResetForms();
	for (int i = 18; i <= 60; i++)
	{
		comboBox1->Items->Add(StdToSys(to_string(i)));
	}
	for (int i = -4; i <= 4; i++)
	{
		if (!i)
		{
			continue;
		}
		comboBox2->Items->Add(StdToSys(to_string(i)));
	}
	for (int i = 0; i < RANK_POOL; i++)
	{
		comboBox3->Items->Add(StdToSys(RanksStr[i]));
	}
	for (int i = 0; i <= WEAPON_POOL; i++)
	{
		comboBox4->Items->Add(StdToSys(to_string(i)));
	}
	for (int i = 0; i < WEAPON_POOL; i++)
	{
		comboBox5->Items->Add(StdToSys(Rifles[i]));
	}
	for (int i = 0; i < WEAPON_POOL; i++)
	{
		comboBox6->Items->Add(StdToSys(Pistols[i]));
	}
	for (int i = 0; i < WEAPON_POOL; i++)
	{
		comboBox7->Items->Add(StdToSys(Explosion[i]));
	}
}

//function which reset AgeCheck label
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	AgeCheck->Text = "";
}

//function which reset BloodCheck label
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	BloodCheck->Text = "";
}

//function which reset RankCheck label
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	RankCheck->Text = "";
}

//function which reset WeaponCheck label and set check-stars to other label
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	WeaponCheck->Text = "";
	RifleCheck->Text = "";
	PistolCheck->Text = "";
	ExplosiveCheck->Text = "";

	comboBox5->SelectedIndex = -1;
	comboBox6->SelectedIndex = -1;
	comboBox7->SelectedIndex = -1;

	if (comboBox4->Text == "1")
	{
		RifleCheck->Text = "*";
	}
	if (comboBox4->Text == "2")
	{
		RifleCheck->Text = "*";
		PistolCheck->Text = "*";
	}
	if (comboBox4->Text == "3")
	{
		RifleCheck->Text = "*";
		PistolCheck->Text = "*";
		ExplosiveCheck->Text = "*";
	}
}

//function which reset RifleCheck label
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	RifleCheck->Text = "";
}

//function which reset PistolCheck label
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	PistolCheck->Text = "";
}

//function which reset ExplosiveCheck label
private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	ExplosiveCheck->Text = "";
}

//collect data from fields and add new soldier to choose row
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		string name, surname;
		if (CheckString(textBox1) && CheckString(textBox2))
		{
			name = SysToStd(textBox1->Text);
			surname = SysToStd(textBox2->Text);
		}
		else
		{
			throw MyException("Reading TextBox", "Incorrect data in TextBox.\nPlease check data in TextBox and try again later.");
		}

		int age, blood, weapon, irank;
		string rank;
		string* ammunition;
		if (comboBox1->SelectedIndex != -1 && comboBox2->SelectedIndex != -1 && comboBox3->SelectedIndex != -1 && comboBox4->SelectedIndex != -1)
		{
			age = Convert::ToInt32(comboBox1->Text);
			blood = Convert::ToInt32(comboBox2->Text);
			rank = SysToStd(comboBox3->Text);
			irank = FindIndex(rank);
			weapon = Convert::ToInt32(comboBox4->Text);
		}
		else
		{
			throw MyException("Reading Forms", "Incorrect data in Forms.\nPlease check data in Forms with star and try again later.");
		}

		ammunition = new string[weapon];
		if (RifleCheck->Text != "*" && PistolCheck->Text != "*" && ExplosiveCheck->Text != "*")
		{
			switch (weapon)
			{
			case 3:
				ammunition[2] = SysToStd(comboBox7->Text);
			case 2:
				ammunition[1] = SysToStd(comboBox6->Text);
			case 1:
				ammunition[0] = SysToStd(comboBox5->Text);
			}
		}
		else
		{
			throw MyException("Reading weapons", "Incorrect data in weapons.\nPlease check data in weapons with star and try again later.");
		}

		if (comboBox8->SelectedIndex != -1)
		{
			{
				Soldier temp(surname, name, age, blood, make_pair(irank, rank), weapon, ammunition);
				auto iter = Soldiers.cbegin();
				Soldiers.insert(iter + (Convert::ToInt32(comboBox8->Text) - 1), temp);
			}

			PrepareDataGrid(dataGridView1, Soldier::GetCountSoldiers());
			for (int i = 0; i < Soldier::GetCountSoldiers(); i++)
			{
				Soldiers[i].PrintData(dataGridView1, i);
			}
			ResetForms();

			checkChanges = true;
		}
		else
		{
			AddCheck->Text = "*";
		}

		delete[] ammunition;
	}
	catch (const MyException & myex)
	{
		myex.WhatException();
	}
	catch (...)
	{
		MyException unknown_excep("Reading Forms");
		unknown_excep.WhatException();
	}
}

//collect data from fields and adit choosen soldier
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Soldier::GetCountSoldiers())
	{
		try
		{
			string name, surname;
			if (CheckString(textBox1) && CheckString(textBox2))
			{
				name = SysToStd(textBox1->Text);
				surname = SysToStd(textBox2->Text);
			}
			else
			{
				throw MyException("Reading TextBox", "Incorrect data in TextBox.\nPlease check data in TextBox and try again later.");
			}

			int age, blood, weapon, irank;
			string rank;
			string* ammunition;
			if (comboBox1->SelectedIndex != -1 && comboBox2->SelectedIndex != -1 && comboBox3->SelectedIndex != -1 && comboBox4->SelectedIndex != -1)
			{
				age = Convert::ToInt32(comboBox1->Text);
				blood = Convert::ToInt32(comboBox2->Text);
				rank = SysToStd(comboBox3->Text);
				irank = FindIndex(rank);
				weapon = Convert::ToInt32(comboBox4->Text);
			}
			else
			{
				throw MyException("Reading Forms", "Incorrect data in Forms.\nPlease check data in Forms with star and try again later.");
			}

			ammunition = new string[weapon];
			if (RifleCheck->Text != "*" && PistolCheck->Text != "*" && ExplosiveCheck->Text != "*")
			{
				switch (weapon)
				{
				case 3:
					ammunition[2] = SysToStd(comboBox7->Text);
				case 2:
					ammunition[1] = SysToStd(comboBox6->Text);
				case 1:
					ammunition[0] = SysToStd(comboBox5->Text);
				}
			}
			else
			{
				throw MyException("Reading weapons", "Incorrect data in weapons.\nPlease check data in weapons with star and try again later.");
			}

			if (comboBox9->SelectedIndex != -1)
			{

				{
					Soldier temp(surname, name, age, blood, make_pair(irank, rank), weapon, ammunition);
					Soldiers.at((Convert::ToInt32(comboBox9->Text) - 1)) = temp;
				}

				PrepareDataGrid(dataGridView1, Soldier::GetCountSoldiers());
				for (int i = 0; i < Soldier::GetCountSoldiers(); i++)
				{
					Soldiers[i].PrintData(dataGridView1, i);
				}
				ResetForms();

				checkChanges = true;
			}
			else
			{
				EditCheck->Text = "*";
			}

			delete[] ammunition;
		}
		catch (const MyException & myex)
		{
			myex.WhatException();
		}
		catch (...)
		{
			MyException unknown_excep("Reading Forms");
			unknown_excep.WhatException();
		}
	}
}

//delete choosen soldier
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox10->SelectedIndex != -1)
	{
		auto iter = Soldiers.begin();
		Soldiers.erase(iter + (Convert::ToInt32(comboBox10->Text) - 1));
		if (!Soldier::GetCountSoldiers())
		{
			PrepareDataGrid(dataGridView1, 1);
		}
		else
		{
			PrepareDataGrid(dataGridView1, Soldier::GetCountSoldiers());
		}
		for (int i = 0; i < Soldier::GetCountSoldiers(); i++)
		{
			Soldiers[i].PrintData(dataGridView1, i);
		}
		ResetForms();

		checkChanges = true;
	}
	else if (Soldier::GetCountSoldiers())
	{
		DeleteCheck->Text = "*";
	}
}

//function which reset AddCheck label
private: System::Void comboBox8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	AddCheck->Text = "";
}

//function which reset EditCheck label
private: System::Void comboBox9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	EditCheck->Text = "";
}

//function which reset DeleteCheck label
private: System::Void comboBox10_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	DeleteCheck->Text = "";
}

//hide this form and create form which print sorted vector of soldiers
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (Soldier::GetCountSoldiers() > 1)
		{
			vector<Soldier> TempSoldiers;
			for (const auto& iter : Soldiers)
			{
				TempSoldiers.push_back(iter);
			}
			SortSoldiers(TempSoldiers);

			this->Hide();
			Result^ resultForm = gcnew Result(TempSoldiers, "Sorted soldiers by rank");
			resultForm->ShowDialog();
			this->Show();
		}
		else
		{
			throw MyException("Sorting", "Need more elements.\nPlease add minimum 2 elements and try again later.");
		}
	}
	catch (const MyException & myex)
	{
		myex.WhatException();
	}
	catch (...)
	{
		MyException unknown_excep("Sorting");
		unknown_excep.WhatException();
	}
}

//hide this form and create form which print information about age of soldiers
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (Soldier::GetCountSoldiers())
		{
			double avgAge = 0;
			pair<int, int>* avgAgeRank = new pair<int, int>[RANK_POOL];
			for (int i = 0; i < RANK_POOL; i++)
			{
				avgAgeRank[i].first = 0;
				avgAgeRank[i].second = 0;
			}

			for (const auto& iter : Soldiers)
			{
				avgAge += iter.GetAge();
				for (int j = 0; j < RANK_POOL; j++)
				{
					if (iter.GetRank() == j)
					{
						avgAgeRank[j].first += iter.GetAge();
						avgAgeRank[j].second++;
						break;
					}
				}
			}

			avgAge /= Soldier::GetCountSoldiers();
			for (int i = 0; i < RANK_POOL; i++)
			{
				if (avgAgeRank[i].second)
				{
					avgAgeRank[i].first /= avgAgeRank[i].second;
				}
			}

			this->Hide();
			Age^ resultForm = gcnew Age(avgAgeRank, avgAge, "Average age of battalion and each group");
			resultForm->ShowDialog();
			this->Show();

			delete[] avgAgeRank;
		}
		else
		{
			throw MyException("Avg age", "Need more elements.\nPlease add minimum 1 elements and try again later.");
		}
	}
	catch (const MyException & myex)
	{
		myex.WhatException();
	}
	catch (...)
	{
		MyException unknown_excep("Avg age");
		unknown_excep.WhatException();
	}
}

//hide this form and create form which print soldiers which have more then 1 weapon or AK-47 and RPG-7 or any rifle or pistol
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (Soldier::GetCountSoldiers())
		{
			vector<Soldier> TempSoldiers;
			for (const auto& iter : Soldiers)
			{
				if (iter.GetCountWeapon() > 1)
				{
					TempSoldiers.push_back(iter);
				}
				else
				{
					string* temp_ammunition = new string[iter.GetCountWeapon()];
					iter.GetAmmunition(temp_ammunition);

					if (temp_ammunition[0] == Rifles[1] && temp_ammunition[2] == Explosion[1])
					{
						TempSoldiers.push_back(iter);
					}
					else
					{
						for (int i = 0; i < WEAPON_POOL; i++)
						{
							for (int j = 0; j < WEAPON_POOL; j++)
							{
								if (temp_ammunition[0] == Rifles[i] && temp_ammunition[1] == Pistols[j])
								{
									TempSoldiers.push_back(iter);
									break;
								}
							}
						}
					}

					delete[] temp_ammunition;
				}
			}
			this->Hide();
			Result^ resultForm = gcnew Result(TempSoldiers, "Soldiers with more than one weapon, with AK-47 and RPG-7, and with any rifle and any pistol");
			resultForm->ShowDialog();
			this->Show();
		}
		else
		{
			throw MyException("Weapon", "Need more elements.\nPlease add minimum 1 elements and try again later.");
		}
	}
	catch (const MyException & myex)
	{
		myex.WhatException();
	}
	catch (...)
	{
		MyException unknown_excep("Weapon");
		unknown_excep.WhatException();
	}
}

//hide this form and create form which print soldiers which are younger then 25 and have blood type -1 or 4
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (Soldier::GetCountSoldiers())
		{
			vector<Soldier> TempSoldiers;
			for (const auto& iter : Soldiers)
			{
				if (iter.GetAge() < 25)
				{
					if (iter.GetBloodType() == -1 || iter.GetBloodType() == 4)
					{
						TempSoldiers.push_back(iter);
					}
				}
			}
			this->Hide();
			Result^ resultForm = gcnew Result(TempSoldiers, "Soldiers younger than 25 with blood type -1 or 4");
			resultForm->ShowDialog();
			this->Show();
		}
		else
		{
			throw MyException("Blood", "Need more elements.\nPlease add minimum 1 elements and try again later.");
		}
	}
	catch (const MyException & myex)
	{
		myex.WhatException();
	}
	catch (...)
	{
		MyException unknown_excep("Blood");
		unknown_excep.WhatException();
	}
}

//hide this form and create form which print soldiers which are younger then 20 and don`t have weapon
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (Soldier::GetCountSoldiers())
		{
			vector<Soldier> TempSoldiers;
			for (const auto& iter : Soldiers)
			{
				if (iter.GetAge() < 20)
				{
					if (!iter.GetCountWeapon())
					{
						TempSoldiers.push_back(iter);
					}
				}
			}
			this->Hide();
			Result^ resultForm = gcnew Result(TempSoldiers, "Soldiers younger than 20 with no ammunition");
			resultForm->ShowDialog();
			this->Show();
		}
		else
		{
			throw MyException("No ammo", "Need more elements.\nPlease add minimum 1 elements and try again later.");
		}
	}
	catch (const MyException & myex)
	{
		myex.WhatException();
	}
	catch (...)
	{
		MyException unknown_excep("No ammo");
		unknown_excep.WhatException();
	}
}

};
}
