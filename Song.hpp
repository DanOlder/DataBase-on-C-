#pragma once

typedef struct Song_type {
    int album_id;
    std::string song_name;
    std::string genre;
    bool is_single;
}Song_strc;

class Song : public MyList <Song_strc, Song> {
public:
    Song();
    Song(int id);

    void get_data(int wanted_id);
    void get_all_data();
    void fill_first_node();
};