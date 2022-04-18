#pragma once

typedef struct Concert_type {
    int band_id;
    int place_id;
    std::string concert_date;
}Concert_strc;

class Concert : public MyList <Concert_strc, Concert> {
public:
    Concert();
    Concert(int id);

    void get_data(int wanted_id);
    void get_all_data();
    Concert_strc* fill_first_node();
};