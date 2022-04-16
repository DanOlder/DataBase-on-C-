#pragma once

typedef struct Member_type {
    int band_id;
    int place_id;
    std::string birth_date;
    std::string member_name;
    std::string member_lastname;
    bool is_frontman;
}Member_strc;

class Member : public MyList <Member_strc, Member> {
public:
    Member();
    Member(int id);

    void get_data(int wanted_id);
    void get_all_data();
    void fill_first_node();
};