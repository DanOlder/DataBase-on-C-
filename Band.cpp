#include "BigHeader.hpp"

Band::Band() {

}

Band::Band(int id) {

    /*
    Form^ fillform = gcnew FormFillB(&data);
    fillform->Show();
    */
    /*
    std::cout << "Enter the band name" << std::endl;
    std::cin >> data.band_name;
    std::cout << "Enter the year of band forming" << std::endl;
    std::cin >> data.year_of_forming;
    std::cout << "Enter the label id for band" << std::endl;
    std::cin >> data.label_id;
    */
}

void Band::get_data(int wanted_id) {
    Band* temp = find_with_id(wanted_id);
    Band_strc temp_data = temp->data;

    std::cout << "band id: " << temp->get_id() << std::endl;
    std::cout << "label id for band: " << temp_data.recordLabel_id << std::endl;
    std::cout << "The band name: " << temp_data.band_name << std::endl;
    std::cout << "The band year of found: " << temp_data.year_of_forming << std::endl;
}

void Band::get_all_data() {
    for (int i = 1; i != head->get_id() + 1; i++) {
        get_data(i);
    }
}

Band_strc* Band::fill_first_node() {
    if (this == this->tail) {

        return &data;
        /*
        Form^ fillform = gcnew FormFillB(&data);
        fillform->Show();
        */

    /*
        std::cout << "Enter the band name" << std::endl;
        std::cin >> data.band_name;
        std::cout << "Enter the year of band forming" << std::endl;
        std::cin >> data.year_of_forming;
        std::cout << "Enter the label id for band" << std::endl;
        std::cin >> data.label_id;
        */
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
        return NULL;
    }
}

int Band::find_id(std::string) {
    return -1;
}
