#include "BigHeader.hpp"

Place::Place(){

}

Place_strc* Place::fill_first_node()
{
    if (this->get_id() == 1) {

        return &data;
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
        return NULL;
    }
}