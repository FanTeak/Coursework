#pragma once
//include header file of class Soldier
#include "Soldier.h"

//form for print result of Get age show button
namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//pair array for Get age show array
	pair<int, int>* SoldiersAge = nullptr;
	//variable which has info about average age of Get age show array soldiers
	double avgAge;
	//variable has info about name of do
	string nameAge;

	/// <summary>
	/// Summary for Age
	/// </summary>
	public ref class Age : public System::Windows::Forms::Form
	{
	public:
		Age(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//constructor which copy array of age and initialize average age of soldiers
		Age(pair<int, int>* ResultVect, double age, string str)
		{
			SoldiersAge = new pair<int, int>[RANK_POOL];
			for (int i = 0; i < RANK_POOL; i++)
			{
				SoldiersAge[i].first = ResultVect[i].first;
				SoldiersAge[i].second = ResultVect[i].second;
			}

			avgAge = age;
			nameAge = str;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Age()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewAge;
	protected:

	protected:

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
			this->dataGridViewAge = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAge))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewAge
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewAge->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewAge->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridViewAge->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewAge->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewAge->ColumnHeadersHeight = 25;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewAge->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewAge->Location = System::Drawing::Point(-1, -1);
			this->dataGridViewAge->Name = L"dataGridViewAge";
			this->dataGridViewAge->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewAge->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewAge->RowHeadersWidth = 100;
			this->dataGridViewAge->RowTemplate->Height = 25;
			this->dataGridViewAge->Size = System::Drawing::Size(935, 106);
			this->dataGridViewAge->TabIndex = 3;
			// 
			// Age
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(935, 106);
			this->Controls->Add(this->dataGridViewAge);
			this->Name = L"Age";
			this->Text = L"Age";
			this->Load += gcnew System::EventHandler(this, &Age::Age_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAge))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//convert standart type to string to System::String^
		String^ StdToSys(string str)
		{
			return gcnew String(str.c_str());
		}

		//function which initalize width and height, header cells and row count of dataGrivView
		void PrepareDataGrid(DataGridView^ data)
		{
			data->Rows->Clear();
			data->RowCount = 2;
			data->ColumnCount = RANK_POOL + 1;
			data->TopLeftHeaderCell->Value = "AGE";

			data->Columns[0]->Width = 75;
			data->Columns[0]->HeaderCell->Value = "All";
			for (int i = 0; i < RANK_POOL; i++)
			{
				data->Columns[i + 1]->Width = 75;
				data->Columns[i + 1]->HeaderCell->Value = StdToSys(RanksStr[i]);
			}

			data->Rows[0]->Height = 30;
			data->Rows[0]->HeaderCell->Value = "Avg age";
			data->Rows[1]->Height = 30;
			data->Rows[1]->HeaderCell->Value = "Count";
		}

		//function which initialize dataGridViewAge and print array of soldiers age
	private: System::Void Age_Load(System::Object^ sender, System::EventArgs^ e) {
		PrepareDataGrid(dataGridViewAge);
		int count = 0;
		for (int i = 0; i < RANK_POOL; i++)
		{
			dataGridViewAge->Rows[0]->Cells[i + 1]->Value = SoldiersAge[i].first;
			dataGridViewAge->Rows[1]->Cells[i + 1]->Value = SoldiersAge[i].second;
			count += SoldiersAge[i].second;
		}
		dataGridViewAge->Rows[0]->Cells[0]->Value = avgAge.ToString("F1");
		dataGridViewAge->Rows[1]->Cells[0]->Value = count;
		this->Text = StdToSys(nameAge);
		delete[] SoldiersAge;
	}
	};
}
