#pragma once

typedef struct Band_type {
    int recordLabel_id;
    std::string name;
    int year_of_forming;
}Band_strc;

class Band : public MyList <Band_strc, Band> {
public:
    Band();

    void get_data(int wanted_id);
    void get_all_data();
    Band_strc* fill_first_node();
};

