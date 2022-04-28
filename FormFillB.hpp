#pragma once

namespace DataBaseonC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormFillB
	/// </summary>
	public ref class FormFillB : public System::Windows::Forms::Form
	{
	public:
		FormFillB(Band_strc* dataTemp, Database* dbTemp)
		{
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->ControlBox = false;

			data = dataTemp;
			db = dbTemp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormFillB()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;

	private:
		Band_strc* data;
		Database* db;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(60, 211);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 24);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Year of Forming:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(293, 211);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(232, 29);
			this->textBox3->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(60, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 24);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Band Name:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(293, 151);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(232, 29);
			this->textBox2->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(60, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 24);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Record Label Name:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(209, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 62);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormFillB::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(293, 91);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(232, 32);
			this->comboBox1->TabIndex = 21;
			// 
			// FormFillB
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 471);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Name = L"FormFillB";
			this->Text = L"FormFillB";
			this->Load += gcnew System::EventHandler(this, &FormFillB::FormFillB_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		msclr::interop::marshal_context context;

		int findedId;
		findedId = db->recordlabel.find_id(context.marshal_as<std::string>(comboBox1->SelectedItem->ToString()));
		if (findedId == -1) {
			MessageBox::Show("Id error", "Error");
			this->Close();
		}

		data->recordLabel_id = findedId;
		data->band_name = context.marshal_as<std::string>(textBox2->Text);
		data->year_of_forming = Convert::ToInt32(textBox3->Text);
		
		MessageBox::Show("Data's been sucsessfully recorded", "Done");
		this->Close();

	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FormFillB_Load(System::Object^ sender, System::EventArgs^ e) {

	msclr::interop::marshal_context context;

	RecordLabel* temp;
	for (temp = &(db->recordlabel); temp!= NULL; temp = temp->next) {
		comboBox1->Items->Add(context.marshal_as<String^>(temp->data.label_name));
	}
}
};
}
