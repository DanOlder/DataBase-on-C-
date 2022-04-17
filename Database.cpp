#include "BigHeader.hpp"

Database::Database(){

    album_created = false;
    band_created = false;
    concert_created = false;
    member_created = false;
    place_created = false;
    recordlabel_created = false;
    song_created = false;
}

void Database::addInfo(int table_num){

    //user selects a table to add info to it

    switch (table_num)
    {
        case A: {//album
            if (album_created) {
                album.add_node();
            }
            else {
                if (band_created) {
                    album.fill_first_node();
                    album_created = true;
                }
                else {
                    MessageBox::Show("You need to create a band first", "Error");
                }
            }    
            break;
        }
        case B: {//band
            Band_strc* data;
            if (band_created) {
                
                data = band.add_node();

                Form^ fillform = gcnew FormFillB(data, this);
                fillform->Show();

            }
            else {
                if (recordlabel_created) {
                    data = band.fill_first_node();
                    if (data == NULL) return;

                    Form^ fillform = gcnew FormFillB(data, this);
                    fillform->Show();

                    band_created = true;
                }
                else {
                    MessageBox::Show("You need to create a label first", "Error");
                }
            }
            break;
        }
        case C: {//concert
            if (concert_created) {
                concert.add_node();
            }
            else {
                if (band_created && place_created) {
                    concert.fill_first_node();
                    concert_created = true;
                }
                else {
                    MessageBox::Show("You need to create a band and a place first", "Error");
                }
            }
            break;
        }
        case M: {//member
            if (member_created) {
                member.add_node();
            }
            else {
                if (band_created && place_created) {
                    member.fill_first_node();
                    member_created = true;
                }
                else {
                    MessageBox::Show("You need to create a band and a place first", "Error");
                }
            }
            break;
        }
        case P: {//place
            if (place_created) {
                place.add_node();
            }
            else {
                place.fill_first_node();
                place_created = true;
            }
            break;
        }
        case R: {//recordlabel
            if (recordlabel_created) {
                recordlabel.add_node();
            }
            else {
                recordlabel.fill_first_node();
                recordlabel_created = true;
            }
            break;
        }
        case S: {//song
            if (song_created) {
                song.add_node();
            }
            else {
                if (album_created) {
                    song.fill_first_node();
                    song_created = true;
                }
                else {
                    MessageBox::Show("You need to create an album first","Error");
                }
            }
            break;
        }
    }
}
