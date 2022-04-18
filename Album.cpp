#include "BigHeader.hpp"

Album::Album(){

}

Album::Album(int id)
{
    /*
	Form^ fillform = gcnew FormFillA(&data);
	fillform->Show();
    */
}

void Album::get_data(int wanted_id)
{
}

void Album::get_all_data()
{
}

Album_strc* Album::fill_first_node()
{
    if (this->get_id() == 1) {

        return &data;
        /*
        Form^ fillform = gcnew FormFillA(&data);
        fillform->Show();
        */
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
        return NULL;
    }
}

int Album::find_id(std::string str) {

    Album* temp;
    for (temp = this->tail; temp != NULL; temp = temp->next) {
        if (temp->data.album_name == str) {
            return temp->get_id();
        }
    }
    return -1;
}
