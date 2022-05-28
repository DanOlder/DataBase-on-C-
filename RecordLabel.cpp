#include "BigHeader.hpp"

RecordLabel::RecordLabel(){

}

void RecordLabel::get_data(int wanted_id) {
    RecordLabel* temp = find_with_id(wanted_id);
    RecordLabel_strc temp_data = temp->data;
    std::cout << "label id: " << temp->get_id() << std::endl;
    std::cout << "The label name: " << temp_data.name << std::endl;
    std::cout << "The label year of found: " << temp_data.year_of_found << std::endl;
}

void RecordLabel::get_all_data() {
    for (int i = 1; i != head->get_id() + 1; i++) {
        get_data(i);
    }
}

RecordLabel_strc* RecordLabel::fill_first_node() {
    if (this->get_id() == 1) {

        return &data;
    }
    else {
        MessageBox::Show("The first node's already created","Error");
        return NULL;
    }
}