#include "BigHeader.hpp"

Album::Album(){

}

Album::Album(int id)
{
	Form^ fillform = gcnew FormFillA(&data);
	fillform->Show();
}

void Album::get_data(int wanted_id)
{
}

void Album::get_all_data()
{
}

void Album::fill_first_node()
{
    if (this->get_id() == 1) {

        Form^ fillform = gcnew FormFillA(&data);
        fillform->Show();
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
    }
}
