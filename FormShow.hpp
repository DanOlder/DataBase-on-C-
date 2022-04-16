#pragma once

namespace DataBaseonC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormShow
	/// </summary>
	public ref class FormShow : public System::Windows::Forms::Form
	{
	public:
		FormShow(Form^ tempForm, Database* db)
		{
			mainForm = tempForm;
			database = db;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	protected:
	private: System::Windows::Forms::Button^ btnShow3;
	private: System::Windows::Forms::Button^ btnShow2;
	private: System::Windows::Forms::Button^ btnShow1;

	private:
		Form^ mainForm;
		Database* database;
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
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnShow3 = (gcnew System::Windows::Forms::Button());
			this->btnShow2 = (gcnew System::Windows::Forms::Button());
			this->btnShow1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(74, 319);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(507, 48);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"Close This Window ";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormShow::btnExit_Click);
			// 
			// btnShow3
			// 
			this->btnShow3->Location = System::Drawing::Point(74, 265);
			this->btnShow3->Name = L"btnShow3";
			this->btnShow3->Size = System::Drawing::Size(507, 48);
			this->btnShow3->TabIndex = 7;
			this->btnShow3->Text = L"Show Band Members";
			this->btnShow3->UseVisualStyleBackColor = true;
			// 
			// btnShow2
			// 
			this->btnShow2->Location = System::Drawing::Point(74, 211);
			this->btnShow2->Name = L"btnShow2";
			this->btnShow2->Size = System::Drawing::Size(507, 48);
			this->btnShow2->TabIndex = 6;
			this->btnShow2->Text = L"Show Album Songs";
			this->btnShow2->UseVisualStyleBackColor = true;
			// 
			// btnShow1
			// 
			this->btnShow1->Location = System::Drawing::Point(74, 157);
			this->btnShow1->Name = L"btnShow1";
			this->btnShow1->Size = System::Drawing::Size(507, 48);
			this->btnShow1->TabIndex = 5;
			this->btnShow1->Text = L"Show Concerts";
			this->btnShow1->UseVisualStyleBackColor = true;
			// 
			// FormShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 452);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnShow3);
			this->Controls->Add(this->btnShow2);
			this->Controls->Add(this->btnShow1);
			this->Name = L"FormShow";
			this->Text = L"FormShow";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		mainForm->Show();
	}
	};
}
