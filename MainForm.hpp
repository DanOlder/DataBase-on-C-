#pragma once

namespace DataBaseonC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(Database* db)
		{
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->ControlBox = false;

			database = db;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnShow;
	protected:
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnExit;

	protected:

	private:
		Database* database;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->btnShow = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnShow
			// 
			this->btnShow->Location = System::Drawing::Point(53, 59);
			this->btnShow->Name = L"btnShow";
			this->btnShow->Size = System::Drawing::Size(507, 48);
			this->btnShow->TabIndex = 0;
			this->btnShow->Text = L"Show info";
			this->btnShow->UseVisualStyleBackColor = true;
			this->btnShow->Click += gcnew System::EventHandler(this, &MainForm::btnShow_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(53, 113);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(507, 48);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Add info";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MainForm::btnAdd_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(53, 339);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(507, 48);
			this->btnExit->TabIndex = 2;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainForm::btnExit_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(507, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Save Database";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(53, 253);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(507, 48);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Load Database";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 434);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnShow);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
	private: System::Void btnShow_Click(System::Object^ sender, System::EventArgs^ e) {

		Form^ frm = gcnew FormShow(this, database);
		frm->Show();
		this->Hide();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		Form^ frm = gcnew FormAdd(this, database);
		frm->Show();
		this->Hide();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	database->saveInFile();
	MessageBox::Show("Done", "Done");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	database->loadFromFile();
	MessageBox::Show("Done", "Done");
}
};
}
