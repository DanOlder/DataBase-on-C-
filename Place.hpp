#pragma once

typedef struct Place_type {
    std::string country;
    std::string region;
    std::string city;
}Place_strc;

class Place : public MyList <Place_strc, Place> {
public:
    Place();
    Place(int id);

    void get_data(int wanted_id);
    void get_all_data();
    void fill_first_node();
};