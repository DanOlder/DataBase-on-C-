#pragma once

typedef struct Song_type {
    int album_id;
    std::string song_name;
    std::string genre;
    std::string is_single;
}Song_strc;

class Song : public MyList <Song_strc, Song> {
public:
    Song();
    Song(int id);

    void get_data(int wanted_id);
    void get_all_data();
    Song_strc* fill_first_node();
};