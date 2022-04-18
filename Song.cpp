#include "BigHeader.hpp"

Song::Song()
{

}

Song::Song(int id)
{
    /*
    Form^ fillform = gcnew FormFillS(&data);
    fillform->Show();
    */
}

void Song::get_data(int wanted_id)
{
}

void Song::get_all_data()
{
}

void Song::fill_first_node()
{
    if (this->get_id() == 1) {

        /*
        Form^ fillform = gcnew FormFillS(&data);
        fillform->Show();
        */
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
    }
}
