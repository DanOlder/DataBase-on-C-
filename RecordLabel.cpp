#include "BigHeader.hpp"

RecordLabel::RecordLabel(){

}

RecordLabel::RecordLabel(int id) {             //new constructor added for new nodes

}

void RecordLabel::get_data(int wanted_id) {
    RecordLabel* temp = find_with_id(wanted_id);
    RecordLabel_strc temp_data = temp->data;
    std::cout << "label id: " << temp->get_id() << std::endl;
    std::cout << "The label name: " << temp_data.label_name << std::endl;
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
        /*
        Form^ fillform = gcnew FormFillR(&data);
        fillform->Show();
        */
    }
    else {
        MessageBox::Show("The first node's already created","Error");
        return NULL;
    }
}

int RecordLabel::find_id(std::string str) {

    RecordLabel* temp;
    for (temp = this->tail; temp != NULL; temp = temp->next) {
        if (temp->data.label_name == str) {
            return temp->get_id();
        }
    }
    return -1;
}