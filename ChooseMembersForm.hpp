#pragma once

namespace DataBaseonC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChooseMembersForm
	/// </summary>
	public ref class ChooseMembersForm : public System::Windows::Forms::Form
	{
	public:
		ChooseMembersForm(Form^ tempForm, Database* dbTemp)
		{
			showForm = tempForm;
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
		~ChooseMembersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	private:
		Form^ showForm;
		Database* db;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(290, 96);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(232, 32);
			this->comboBox1->TabIndex = 55;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(199, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 62);
			this->button1->TabIndex = 54;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChooseMembersForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(57, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 24);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Band Name:";
			// 
			// ChooseMembersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 315);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"ChooseMembersForm";
			this->Text = L"ChooseMembersForm";
			this->Load += gcnew System::EventHandler(this, &ChooseMembersForm::ChooseMembersForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChooseMembersForm_Load(System::Object^ sender, System::EventArgs^ e) {

		msclr::interop::marshal_context context;

		Band* temp;
		for (temp = &(db->band); temp != NULL; temp = temp->next) {
			comboBox1->Items->Add(context.marshal_as<String^>(temp->data.band_name));
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		std::ofstream fout("txts/Members Report.txt");

		int choosedBandId;
		std::string choosedBand;
		msclr::interop::marshal_context context;

		choosedBand = context.marshal_as<std::string>(comboBox1->SelectedItem->ToString());
		choosedBandId = db->band.find_id(choosedBand);

		fout << "      Members of \"";
		fout << choosedBand;
		fout << "\"\n";
		fout << "Name:       Lastname:       Date of Birth:       Is frontman:\n";

		Member* temp;
		for (temp = &(db->member); temp != NULL; temp = temp->next) {
			if (temp->data.band_id == choosedBandId) {

				Place* tempPlace;
				tempPlace = db->place.find_with_id(temp->data.place_id);

				fout << temp->data.member_name;
				fout << "        ";
				fout << temp->data.member_lastname;
				fout << "            ";
				fout << tempPlace->data.city;
				fout << "              ";
				fout << temp->data.is_frontman;
				fout << "\n";

			}
		}
		fout.close();


		MessageBox::Show("Data's been sucsessfully reported", "Done");
		this->Close();
	}
	};
}
