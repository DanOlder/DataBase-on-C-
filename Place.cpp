#include "BigHeader.hpp"

Place::Place(){

}

Place::Place(int id)
{
	Form^ fillform = gcnew FormFillP(&data);
	fillform->Show();
}

void Place::get_data(int wanted_id)
{
}

void Place::get_all_data()
{
}

void Place::fill_first_node()
{
    if (this->get_id() == 1) {

        Form^ fillform = gcnew FormFillP(&data);
        fillform->Show();
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
    }
}
