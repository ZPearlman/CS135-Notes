#ifndef __ArrayList__h
#define __ArrayList__h

template <typename T>
class ArrayList{
    public:
        ArrayList();
        void addItem(T item);
        void printList();
        T getItem(int index);
        T pop();
        T pop(int index);
        void remove(T item);
        void insert(T item, int index);
        int getCount();

    private:
        T* a;
        int count;
        int capacity;
        void grow();
};

// struct ArrayList{
//     int* a;
//     int count;
//     int capacity;
// };

// ArrayList initialize();
// void addItem(ArrayList &al, int num);
// void printList(ArrayList al);
// int getItem(ArrayList al, int index);
// int pop(ArrayList &al);
// int pop(ArrayList &al, int index);
// void remove(ArrayList &al, int item);
// void insert(ArrayList &al, int item, int index);


#include "ArrayList.cpp"

#endif