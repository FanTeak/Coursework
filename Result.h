#pragma once
//include header file of class Soldier
#include "Soldier.h"

//form for print result of Sort show, Weapon show, Blood show, No ammo show buttons
namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//global vector of soldiers for Sort show, Weapon show, Blood show, No ammo show vectors
	vector<Soldier> SoldiersResult;
	//variable which has info about count of result vector of soldier
	int sizeVector;
	//variable has info about name of do
	string nameResult;

	/// <summary>
	/// Summary for Result
	/// </summary>
	public ref class Result : public System::Windows::Forms::Form
	{
	public:
		Result(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//constructor which copy vector of soldiers and initialize size of vector
		Result(vector<Soldier>& ResultVect, string str)
		{
			for (const auto& iter : ResultVect)
			{
				SoldiersResult.push_back(iter);
			}
			sizeVector = SoldiersResult.size();
			nameResult = str;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Result()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewResult;
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
			this->dataGridViewResult = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResult))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewResult
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewResult->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewResult->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridViewResult->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewResult->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewResult->ColumnHeadersHeight = 25;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewResult->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewResult->Location = System::Drawing::Point(0, 0);
			this->dataGridViewResult->Name = L"dataGridViewResult";
			this->dataGridViewResult->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewResult->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewResult->RowHeadersWidth = 55;
			this->dataGridViewResult->RowTemplate->Height = 25;
			this->dataGridViewResult->Size = System::Drawing::Size(1095, 624);
			this->dataGridViewResult->TabIndex = 2;
			// 
			// Result
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 626);
			this->Controls->Add(this->dataGridViewResult);
			this->Name = L"Result";
			this->Text = L"Result";
			this->Load += gcnew System::EventHandler(this, &Result::Result_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResult))->EndInit();
			this->ResumeLayout(false);

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

		//convert standart type to string to System::String^
		String^ StdToSys(string str)
		{
			return gcnew String(str.c_str());
		}

		//function which initialize dataGridViewResult and print vector of soldiers
	private: System::Void Result_Load(System::Object^ sender, System::EventArgs^ e) {
		if (sizeVector)
		{
			PrepareDataGrid(dataGridViewResult, sizeVector);
			for (int i = 0; i < sizeVector; i++)
			{
				SoldiersResult[i].PrintData(dataGridViewResult, i);
			}
		}
		else
		{
			PrepareDataGrid(dataGridViewResult, 1);
			MessageBox::Show("There is no soldiers", StdToSys(nameResult), MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		SoldiersResult.clear();
		this->Text = StdToSys(nameResult);
	}

};
}
