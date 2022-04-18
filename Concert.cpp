#include "BigHeader.hpp"

Concert::Concert(){

}

Concert::Concert(int id)
{

}

void Concert::get_data(int wanted_id)
{
}

void Concert::get_all_data()
{
}

Concert_strc* Concert::fill_first_node()
{
    if (this->get_id() == 1) {

        return &data;

    }
    else {
        MessageBox::Show("The first node's already created", "Error");
        return NULL;
    }
}
