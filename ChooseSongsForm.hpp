#pragma once

namespace DataBaseonC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChooseSongsForm
	/// </summary>
	public ref class ChooseSongsForm : public System::Windows::Forms::Form
	{
	public:
		ChooseSongsForm(Form^ tempForm, Database* dbTemp)
		{
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->ControlBox = false;

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
		~ChooseSongsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox2;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(289, 161);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(232, 32);
			this->comboBox2->TabIndex = 52;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(56, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 24);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Album Name:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(289, 100);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(232, 32);
			this->comboBox1->TabIndex = 48;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ChooseSongsForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(202, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 62);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChooseSongsForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(56, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 24);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Band Name:";
			// 
			// ChooseSongsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 398);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"ChooseSongsForm";
			this->Text = L"ChooseSongsForm";
			this->Load += gcnew System::EventHandler(this, &ChooseSongsForm::ChooseSongsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChooseSongsForm_Load(System::Object^ sender, System::EventArgs^ e) {

		msclr::interop::marshal_context context;

		Band* temp;
		for (temp = &(db->band); temp != NULL; temp = temp->next) {
			comboBox1->Items->Add(context.marshal_as<String^>(temp->data.band_name));
		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	comboBox2->Items->Clear();

	int choosedBandId;
	msclr::interop::marshal_context context;

	choosedBandId = db->band.find_id(context.marshal_as<std::string>(comboBox1->SelectedItem->ToString()));

	Album* temp;
	for (temp = &(db->album); temp != NULL; temp = temp->next) {
		if (temp->data.band_id == choosedBandId) {
			comboBox2->Items->Add(context.marshal_as<String^>(temp->data.album_name));
		}		
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	std::ofstream fout("txts/Song Report.txt");

	int choosedAlbumId;
	std::string choosedAlbum;
	msclr::interop::marshal_context context;

	choosedAlbum = context.marshal_as<std::string>(comboBox2->SelectedItem->ToString());
	choosedAlbumId = db->album.find_id(choosedAlbum);

	fout << "      Songs from Album \"";
	fout << choosedAlbum;
	fout << "\"\n";
	fout << "Name:   Genre:   Single:\n";

	Song* temp;
	for (temp = &(db->song); temp != NULL; temp = temp->next) {
		if (temp->data.album_id == choosedAlbumId) {
			
			fout << temp->data.song_name;
			fout << "   ";
			fout << temp->data.genre;
			fout << "      ";
			fout << temp->data.is_single;
			fout << "\n";

		}
	}
	fout.close();
	system("notepad.exe txts/Song Report.txt");

	MessageBox::Show("Data's been sucsessfully reported", "Done");
	this->Close();

}
};
}
