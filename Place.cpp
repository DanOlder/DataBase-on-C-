#include "BigHeader.hpp"

Place::Place(){

}

Place::Place(int id)
{
    /*
	Form^ fillform = gcnew FormFillP(&data);
	fillform->Show();
    */
}

void Place::get_data(int wanted_id)
{
}

void Place::get_all_data()
{
}

Place_strc* Place::fill_first_node()
{
    if (this->get_id() == 1) {

        return &data;
        /*
        Form^ fillform = gcnew FormFillP(&data);
        fillform->Show();
        */
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
        return NULL;
    }
}

int Place::find_id(std::string str) {

    Place* temp;
    for (temp = this->tail; temp != NULL; temp = temp->next) {
        if (temp->data.city == str) {
            return temp->get_id();
        }
    }
    return -1;
}
