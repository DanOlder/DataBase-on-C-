#include "BigHeader.hpp"

Member::Member(){

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
