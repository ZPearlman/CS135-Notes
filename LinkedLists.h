#ifndef __LinkedList__h
#define __LinkedList__h



struct node{
    int value;
    node *next;
};

template <typename T>
class LinkedList{
    public:
        LinkedList();
        void addItem(T item);
        void printList();
        T getItem(int index);
        void insertItem(T item, int index);
        T pop();
        T pop(int index);
        void remove(T item);
        int getCount();

    private:
        int count;
        node *start;
        node *end;
};

// struct LinkedList{
//     int count;
//     node *start;
//     node *end;
// };

// LinkedList initialize();
// void addItem(LinkedList &ll, int item);
// void printList(LinkedList ll);
// int getItem(LinkedList &ll, int index);
// void insertItem(LinkedList &ll, int item, int index);
// int pop(LinkedList &ll);
// int pop(LinkedList &ll, int index);
// void remove(LinkedList &ll, int item);

#include "LinkedLists.cpp"
#endif