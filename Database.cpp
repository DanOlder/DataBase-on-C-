#include "BigHeader.hpp"

Database::Database(){

    album_created = false;
    band_created = false;
    concert_created = false;
    label_created = false;
    member_created = false;
    place_created = false;
    song_created = false;
}

/*
void Database::runDatabase(){
	
    addInfo();
    label.get_all_data();
    system("pause");

}*/

void Database::addInfo(){

    //list of tables opens
    //user selects a table to add info to it
    int table_num = 0;
    std::cin >> table_num;

    switch (table_num)
    {
        case 1: {//album
            if (album_created) {
                album.add_node();
            }
            else {
                if (band_created) {
                    album.fill_first_node();
                    album_created = true;
                }
                else {
                    std::cout << "You need to create a band first";
                }
            }    
            break;
        }
        case 2: {//band
            if (band_created) {
                band.add_node();
            }
            else {
                if (label_created) {
                    band.fill_first_node();
                    band_created = true;
                }
                else {
                    std::cout << "You need to create a label first";
                }
            }
            break;
        }
        case 3: {//concert
            if (concert_created) {
                concert.add_node();
            }
            else {
                if (band_created && place_created) {
                    concert.fill_first_node();
                    concert_created = true;
                }
                else {
                    std::cout << "You need to create a band and a place first";
                }
            }
            break;
        }
        case 4: {//label
            if (label_created) {
                label.add_node();
            }
            else {
                label.fill_first_node();
                label_created = true;
            }
            break;
        }
        case 5: {//member
            if (member_created) {
                member.add_node();
            }
            else {
                if (band_created && place_created) {
                    member.fill_first_node();
                    member_created = true;
                }
                else {
                    std::cout << "You need to create a band and a place first";
                }
            }
            break;
        }
        case 6: {//place
            if (place_created) {
                place.add_node();
            }
            else {
                place.fill_first_node();
                place_created = true;
            }
            break;
        }
        case 7: {//song
            if (song_created) {
                song.add_node();
            }
            else {
                if (album_created) {
                    song.fill_first_node();
                    song_created = true;
                }
                else {
                    std::cout << "You need to create an album first";
                }
            }
            break;
        }
    }
}
