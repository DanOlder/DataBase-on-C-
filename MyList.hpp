#pragma once

template <typename Strc, typename Type>
class MyList {
protected:
    int id;
public:
    Strc data;
    Type* head;
    Type* tail;
    Type* next;

    MyList();
    Strc* add_node();
    int get_id();
    Type* find_with_id(int wanted_id);
    int find_id(std::string str);

};

template<typename Strc, typename Type>
inline MyList<Strc, Type>::MyList()
{
    next = NULL;
    head = tail = (Type*)this;

    id = 1;
}

template<typename Strc, typename Type>
inline Strc* MyList<Strc, Type>::add_node()
{
    Type* new_node = new Type();
    new_node->id = (head->id) + 1;
    new_node->tail = tail;
    head->next = new_node;
    head = new_node;

    return &(new_node->data);
}

template<typename Strc, typename Type>
inline int MyList<Strc, Type>::get_id()
{
    return id;
}

template<typename Strc, typename Type>
inline Type* MyList<Strc, Type>::find_with_id(int wanted_id)
{
    Type* temp = tail;
    while (temp != NULL && temp->id != wanted_id) {
        temp = temp->next;
    }
    if (temp == NULL) {
        return NULL;
    }
    else {
        return temp;
    }
}

template<typename Strc, typename Type>
int MyList<Strc, Type>::find_id(std::string str) {

    Type* temp;
    for (temp = this->tail; temp != NULL; temp = temp->next) {

        if (temp->data.name == str) {
            return temp->get_id();
        }
    }
    return -1;
}