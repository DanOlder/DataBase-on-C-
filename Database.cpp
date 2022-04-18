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
            Album_strc* data;
            if (album_created) {

                data = album.add_node();

                Form^ fillform = gcnew FormFillA(data, this);
                fillform->Show();
            }
            else {
                if (band_created) {

                    data = album.fill_first_node();
                    if (data == NULL) return;

                    Form^ fillform = gcnew FormFillA(data, this);
                    fillform->Show();

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

void Database::saveInFile()
{
    //queue:
    //recordlabel -> place -> band -> album -> song -> member -> concert

    std::ofstream fout("db.txt");


    if (recordlabel_created) {
        fout << "R\n";

        RecordLabel* temp;
        for (temp = &(this->recordlabel); temp != NULL; temp = temp->next) {
            RecordLabel_strc* data = &(temp->data);
            fout << temp->get_id();
            fout << " ";
            fout << data->label_name;
            fout << " ";
            fout << data->year_of_found;
            fout << "\n";
        }
        fout << "\n";
    }
    if (place_created) {
        fout << "P\n";

        Place* temp;
        for (temp = &(this->place); temp != NULL; temp = temp->next) {
            Place_strc* data = &(temp->data);
            fout << temp->get_id();
            fout << " ";
            fout << data->country;
            fout << " ";
            fout << data->region;
            fout << " ";
            fout << data->city;
            fout << "\n";
        }
        fout << "\n";
    }
    if (band_created) {
        fout << "B\n";

        Band* temp;
        for (temp = &(this->band); temp != NULL; temp = temp->next) {
            Band_strc* data = &(temp->data);
            fout << temp->get_id();
            fout << " ";
            fout << data->recordLabel_id;
            fout << " ";
            fout << data->band_name;
            fout << " ";
            fout << data->year_of_forming;
            fout << "\n";
        }
        fout << "\n";
    }
    if (album_created) {
        fout << "A\n";

        Album* temp;
        for (temp = &(this->album); temp != NULL; temp = temp->next) {
            Album_strc* data = &(temp->data);
            fout << temp->get_id();
            fout << " ";
            fout << data->band_id;
            fout << " ";
            fout << data->album_name;
            fout << " ";
            fout << data->release_year;
            fout << " ";
            fout << data->number_of_songs;
            fout << "\n";
        }
        fout << "\n";
    }
    if (song_created) {
        fout << "S\n";

        Song* temp;
        for (temp = &(this->song); temp != NULL; temp = temp->next) {
            Song_strc* data = &(temp->data);
            fout << temp->get_id();
            fout << " ";
            fout << data->album_id;
            fout << " ";
            fout << data->song_name;
            fout << " ";
            fout << data->genre;
            fout << " ";
            fout << data->is_single;
            fout << "\n";
        }
        fout << "\n";
    }
    if (member_created) {
        fout << "M\n";

        Member* temp;
        for (temp = &(this->member); temp != NULL; temp = temp->next) {
            Member_strc* data = &(temp->data);
            fout << temp->get_id();
            fout << " ";
            fout << data->band_id;
            fout << " ";
            fout << data->place_id;
            fout << " ";
            fout << data->birth_date;
            fout << " ";
            fout << data->member_name;
            fout << " ";
            fout << data->member_lastname;
            fout << " ";
            fout << data->is_frontman;
            fout << "\n";
        }
        fout << "\n";
    }
    if (concert_created) {
        fout << "C\n";

        Concert* temp;
        for (temp = &(this->concert); temp != NULL; temp = temp->next) {
            Concert_strc* data = &(temp->data);
            fout << temp->get_id();
            fout << " ";
            fout << data->band_id;
            fout << " ";
            fout << data->place_id;
            fout << " ";
            fout << data->concert_date;
            fout << "\n";
        }
        fout << "\n";
    }

    fout.close();
}

void Database::loadFromFile()
{
}
