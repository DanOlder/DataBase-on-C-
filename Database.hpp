#pragma once
class Database{
private:

	Album album;
	Band band;
	Concert concert;
	Label label;
	Member member;
	Place place;
	Song song;

	bool album_created;
	bool band_created;
	bool concert_created;
	bool member_created;
	bool label_created;
	bool place_created;
	bool song_created;

public:
	Database();
	void runDatabase();
	void addInfo();
};

