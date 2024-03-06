#ifndef __ArrayList__h
#define __ArrayList__h

struct ArrayList{
    int* a;
    int count;
    int capacity;
};

ArrayList initialize();
void addItem(ArrayList &al, int num);
void printList(ArrayList al);
int getItem(ArrayList al, int index);
int pop(ArrayList &al);
int pop(ArrayList &al, int index);
void remove(ArrayList &al, int item);
void insert(ArrayList &al, int item, int index);


#include "ArrayList.cpp"

#endif