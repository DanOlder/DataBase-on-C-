#include "BigHeader.hpp"

Member::Member(){

}

Member::Member(int id)
{

}

void Member::get_data(int wanted_id)
{
}

void Member::get_all_data()
{
}

Member_strc* Member::fill_first_node()
{
    if (this->get_id() == 1) {

        return &data;

    }
    else {
        MessageBox::Show("The first node's already created", "Error");
        return NULL;
    }
}
