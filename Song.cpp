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

Song_strc* Song::fill_first_node()
{
    if (this->get_id() == 1) {

        return &data;

    }
    else {
        MessageBox::Show("The first node's already created", "Error");
        return NULL;
    }
}
