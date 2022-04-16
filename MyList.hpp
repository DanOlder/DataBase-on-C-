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
    void add_node();
    int get_id();
    Type* find_with_id(int wanted_id);

};

template<typename Strc, typename Type>
inline MyList<Strc, Type>::MyList()
{
    next = NULL;
    head = tail = (Type*)this;

    id = 1;
}

template<typename Strc, typename Type>
inline void MyList<Strc, Type>::add_node()
{
    Type* new_node = new Type(id);
    new_node->id = (head->id) + 1;
    new_node->tail = tail;
    head->next = new_node;
    head = new_node;
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
