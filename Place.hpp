#pragma once

typedef struct Place_type {
    std::string country;
    std::string region;
    std::string name;
}Place_strc;

class Place : public MyList <Place_strc, Place> {
public:
    Place();

    void get_data(int wanted_id);
    void get_all_data();
    Place_strc* fill_first_node();
};