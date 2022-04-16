#include "BigHeader.hpp"

Label::Label(){

}

Label::Label(int id) {             //new constructor added for new nodes
    std::cout << "Enter the label name" << std::endl;
    std::cin >> data.label_name;
    std::cout << "Enter the label year of found" << std::endl;
    std::cin >> data.year_of_found;
}

void Label::get_data(int wanted_id) {
    Label* temp = find_with_id(wanted_id);
    Label_strc temp_data = temp->data;
    std::cout << "label id: " << temp->get_id() << std::endl;
    std::cout << "The label name: " << temp_data.label_name << std::endl;
    std::cout << "The label year of found: " << temp_data.year_of_found << std::endl;
}

void Label::get_all_data() {
    for (int i = 1; i != head->get_id() + 1; i++) {
        get_data(i);
    }
}

void Label::fill_first_node() {
    if (this->get_id() == 1) {
        std::cout << "Enter the label name" << std::endl;
        std::cin >> data.label_name;
        std::cout << "Enter the label year of found" << std::endl;
        std::cin >> data.year_of_found;
    }
    else {
        std::cout << "The first node's already created" << std::endl;
    }
}
