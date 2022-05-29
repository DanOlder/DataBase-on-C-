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
	
	template<typename ElemType>
	void putInfo(ElemType*, std::string*, std::string);

	template<typename ElemType>
	void putInfo(ElemType*, ElemType);

	void fillInfo(Album_strc*,int,std::string,int,int);
	void fillInfo(Band_strc*, int, std::string, int);
	void fillInfo(Concert_strc*, int, int, std::string);
	void fillInfo(Member_strc*, int, int, std::string, std::string, std::string, std::string);
	void fillInfo(Place_strc*, std::string, std::string, std::string);
	void fillInfo(RecordLabel_strc*, std::string, int);
	void fillInfo(Song_strc*, int, std::string, std::string, std::string);
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

template <typename T>
T ConvertString(const std::string& data)
{
	if (!data.empty())
	{
		T ret;
		std::istringstream iss(data);
		if (data.find("0x") != std::string::npos)
		{
			iss >> std::hex >> ret;
		}
		else
		{
			iss >> std::dec >> ret;
		}

		if (iss.fail())
		{
			std::cout << "Convert error: cannot convert string '" << data << "' to value" << std::endl;
			return T();
		}
		return ret;
	}
	return T();
}

template<typename ElemType>
void Database::putInfo(ElemType* elem, std::string* str, std::string delimiter) {
	std::string token;
	size_t pos;

	pos = str->find(delimiter);
	token = str->substr(0, pos);
	if (typeid(*elem) == typeid(token)) {

		*elem = ConvertString<ElemType>(token);
	}
	else if (typeid(ElemType) == typeid(int)) {
		*elem = stoi(token);
	}
	
	str->erase(0, pos + delimiter.length());
}

template<typename ElemType>
void Database::putInfo(ElemType* elem, ElemType elemForPutting) {

	*elem = elemForPutting;

}