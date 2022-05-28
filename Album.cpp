#include "BigHeader.hpp"

Album::Album(){

}

Album_strc* Album::fill_first_node()
{
    if (this->get_id() == 1) {

        return &data;
    }
    else {
        MessageBox::Show("The first node's already created", "Error");
        return NULL;
    }
}
