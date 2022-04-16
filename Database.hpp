#pragma once
class Database{
private:

	Album album;
	Band band;
	Concert concert;
	Member member;
	Place place;
	RecordLabel recordlabel;
	Song song;

	bool album_created;
	bool band_created;
	bool concert_created;
	bool member_created;
	bool place_created;
	bool recordlabel_created;
	bool song_created;

public:
	Database();
	void runDatabase();
	void addInfo(int);
};

