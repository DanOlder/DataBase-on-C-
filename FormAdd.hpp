#pragma once

namespace DataBaseonC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormAdd
	/// </summary>
	public ref class FormAdd : public System::Windows::Forms::Form
	{
	public:
		FormAdd(Form^ tempForm, Database* db)
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
		~FormAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	protected:
	private: System::Windows::Forms::Button^ btnAdd3;
	private: System::Windows::Forms::Button^ btnAdd2;
	private: System::Windows::Forms::Button^ btnAdd1;
	private: System::Windows::Forms::Button^ btnAdd4;
	private: System::Windows::Forms::Button^ btnAdd5;
	private: System::Windows::Forms::Button^ btnAdd6;
	private: System::Windows::Forms::Button^ btnAdd7;

	protected:




	protected:

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
			this->btnAdd3 = (gcnew System::Windows::Forms::Button());
			this->btnAdd2 = (gcnew System::Windows::Forms::Button());
			this->btnAdd1 = (gcnew System::Windows::Forms::Button());
			this->btnAdd4 = (gcnew System::Windows::Forms::Button());
			this->btnAdd5 = (gcnew System::Windows::Forms::Button());
			this->btnAdd6 = (gcnew System::Windows::Forms::Button());
			this->btnAdd7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(67, 476);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(507, 48);
			this->btnExit->TabIndex = 12;
			this->btnExit->Text = L"Close This Window ";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormAdd::btnExit_Click);
			// 
			// btnAdd3
			// 
			this->btnAdd3->Location = System::Drawing::Point(67, 185);
			this->btnAdd3->Name = L"btnAdd3";
			this->btnAdd3->Size = System::Drawing::Size(507, 48);
			this->btnAdd3->TabIndex = 11;
			this->btnAdd3->Text = L"Add Concert";
			this->btnAdd3->UseVisualStyleBackColor = true;
			this->btnAdd3->Click += gcnew System::EventHandler(this, &FormAdd::btnAdd3_Click);
			// 
			// btnAdd2
			// 
			this->btnAdd2->Location = System::Drawing::Point(67, 131);
			this->btnAdd2->Name = L"btnAdd2";
			this->btnAdd2->Size = System::Drawing::Size(507, 48);
			this->btnAdd2->TabIndex = 10;
			this->btnAdd2->Text = L"Add Band";
			this->btnAdd2->UseVisualStyleBackColor = true;
			this->btnAdd2->Click += gcnew System::EventHandler(this, &FormAdd::btnAdd2_Click);
			// 
			// btnAdd1
			// 
			this->btnAdd1->Location = System::Drawing::Point(67, 77);
			this->btnAdd1->Name = L"btnAdd1";
			this->btnAdd1->Size = System::Drawing::Size(507, 48);
			this->btnAdd1->TabIndex = 9;
			this->btnAdd1->Text = L"Add Album";
			this->btnAdd1->UseVisualStyleBackColor = true;
			this->btnAdd1->Click += gcnew System::EventHandler(this, &FormAdd::btnAdd1_Click);
			// 
			// btnAdd4
			// 
			this->btnAdd4->Location = System::Drawing::Point(67, 239);
			this->btnAdd4->Name = L"btnAdd4";
			this->btnAdd4->Size = System::Drawing::Size(507, 48);
			this->btnAdd4->TabIndex = 13;
			this->btnAdd4->Text = L"Add Member";
			this->btnAdd4->UseVisualStyleBackColor = true;
			this->btnAdd4->Click += gcnew System::EventHandler(this, &FormAdd::btnAdd4_Click);
			// 
			// btnAdd5
			// 
			this->btnAdd5->Location = System::Drawing::Point(67, 293);
			this->btnAdd5->Name = L"btnAdd5";
			this->btnAdd5->Size = System::Drawing::Size(507, 48);
			this->btnAdd5->TabIndex = 14;
			this->btnAdd5->Text = L"Add Place";
			this->btnAdd5->UseVisualStyleBackColor = true;
			this->btnAdd5->Click += gcnew System::EventHandler(this, &FormAdd::btnAdd5_Click);
			// 
			// btnAdd6
			// 
			this->btnAdd6->Location = System::Drawing::Point(67, 347);
			this->btnAdd6->Name = L"btnAdd6";
			this->btnAdd6->Size = System::Drawing::Size(507, 48);
			this->btnAdd6->TabIndex = 15;
			this->btnAdd6->Text = L"Add Record Label";
			this->btnAdd6->UseVisualStyleBackColor = true;
			this->btnAdd6->Click += gcnew System::EventHandler(this, &FormAdd::btnAdd6_Click);
			// 
			// btnAdd7
			// 
			this->btnAdd7->Location = System::Drawing::Point(67, 401);
			this->btnAdd7->Name = L"btnAdd7";
			this->btnAdd7->Size = System::Drawing::Size(507, 48);
			this->btnAdd7->TabIndex = 16;
			this->btnAdd7->Text = L"Add Song";
			this->btnAdd7->UseVisualStyleBackColor = true;
			this->btnAdd7->Click += gcnew System::EventHandler(this, &FormAdd::btnAdd7_Click);
			// 
			// FormAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 536);
			this->Controls->Add(this->btnAdd7);
			this->Controls->Add(this->btnAdd6);
			this->Controls->Add(this->btnAdd5);
			this->Controls->Add(this->btnAdd4);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnAdd3);
			this->Controls->Add(this->btnAdd2);
			this->Controls->Add(this->btnAdd1);
			this->Name = L"FormAdd";
			this->Text = L"FormAdd";
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
	mainForm->Show();
}

private: System::Void btnAdd1_Click(System::Object^ sender, System::EventArgs^ e) {

	database->addInfo(A);
}
private: System::Void btnAdd2_Click(System::Object^ sender, System::EventArgs^ e) {

	database->addInfo(B);
}
private: System::Void btnAdd3_Click(System::Object^ sender, System::EventArgs^ e) {

	database->addInfo(C);
}
private: System::Void btnAdd4_Click(System::Object^ sender, System::EventArgs^ e) {

	database->addInfo(M);
}
private: System::Void btnAdd5_Click(System::Object^ sender, System::EventArgs^ e) {

	database->addInfo(P);
}
private: System::Void btnAdd6_Click(System::Object^ sender, System::EventArgs^ e) {

	database->addInfo(R);
}
private: System::Void btnAdd7_Click(System::Object^ sender, System::EventArgs^ e) {

	database->addInfo(S);
}
};
}
