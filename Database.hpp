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
};

