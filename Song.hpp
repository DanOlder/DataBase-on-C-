#pragma once

typedef struct Song_type {
    int album_id;
    std::string name;
    std::string genre;
    std::string is_single;
}Song_strc;

class Song : public MyList <Song_strc, Song> {
public:
    Song();

    void get_data(int wanted_id);
    void get_all_data();
    Song_strc* fill_first_node();
};