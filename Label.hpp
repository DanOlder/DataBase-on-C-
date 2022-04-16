#pragma once

typedef struct Label_type {
    std::string label_name;
    int year_of_found;
}Label_strc;

class Label : public MyList <Label_strc, Label> {
public:
    Label();                   //constructor for the ini
    Label(int id);

    void get_data(int wanted_id);
    void get_all_data();
    void fill_first_node();
};