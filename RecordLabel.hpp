#pragma once

typedef struct RecordLabel_type {
    std::string label_name;
    int year_of_found;
}RecordLabel_strc;

class RecordLabel : public MyList <RecordLabel_strc, RecordLabel> {
public:
    RecordLabel();                   //constructor for the ini
    RecordLabel(int id);

    void get_data(int wanted_id);
    void get_all_data();
    RecordLabel_strc* fill_first_node();

    int find_id(std::string);
};