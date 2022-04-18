#include "BigHeader.hpp"

Concert::Concert(){

}

Concert::Concert(int id)
{
    /*
    Form^ fillform = gcnew FormFillC(&data);
    fillform->Show();
    */
}

void Concert::get_data(int wanted_id)
{
}

void Concert::get_all_data()
{
}

void Concert::fill_first_node()
{
    if (this->get_id() == 1) {

        /*
        Form^ fillform = gcnew FormFillC(&data);
        fillform->Show();
        */
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
    }
}
