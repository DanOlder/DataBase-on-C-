#include "BigHeader.hpp"

Member::Member(){

}

Member::Member(int id)
{
    /*
    Form^ fillform = gcnew FormFillM(&data);
    fillform->Show();
    */
}

void Member::get_data(int wanted_id)
{
}

void Member::get_all_data()
{
}

void Member::fill_first_node()
{
    if (this->get_id() == 1) {

        /*
        Form^ fillform = gcnew FormFillM(&data);
        fillform->Show();
        */
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
    }
}
