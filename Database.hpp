#pragma once
class Database{
private:

	bool album_created;
	bool band_created;
	bool concert_created;
	bool member_created;
	bool place_created;
	bool recordlabel_created;
	bool song_created;

public:

	Album album;
	Band band;
	Concert concert;
	Member member;
	Place place;
	RecordLabel recordlabel;
	Song song;

	Database();
	void runDatabase();
	void addInfo(int);
	void saveInFile();
	void loadFromFile();

	template<typename Strc, typename FormFill, typename Table>
	void AddInfoTemplate(bool*, bool, System::String^, Table*);
};



template<typename Strc, typename FormFill, typename Table>
inline void Database::AddInfoTemplate(bool* isCreated, bool parentsCreated, System::String^ errorText, Table* table) {

	Strc* data;
	if (*isCreated) {

		data = table->add_node();

		Form^ fillform = gcnew FormFill(data, this);
		fillform->Show();

	}
	else {
		if (parentsCreated) {
			data = table->fill_first_node();
			if (data == NULL) return;

			Form^ fillform = gcnew FormFill(data, this);
			fillform->Show();

			*isCreated = true;
		}
		else {
			MessageBox::Show(errorText, "Error");
		}
	}
}
