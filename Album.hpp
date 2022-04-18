#pragma once

typedef struct Album_type {
    int band_id;
    std::string album_name;
    int release_year;
    int number_of_songs;
}Album_strc;

class Album : public MyList <Album_strc, Album> {
public:
    Album();
    Album(int id);

    void get_data(int wanted_id);
    void get_all_data();
    Album_strc* fill_first_node();

    int find_id(std::string);
};