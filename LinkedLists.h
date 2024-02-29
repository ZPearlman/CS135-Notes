#ifndef __LinkedList__h
#define __LinkedList__h

struct node{
    int value;
    node *next;
};

struct LinkedList{
    int count;
    node *start;
    node *end;
};

LinkedList initialize();
void addItem(LinkedList &ll, int item);
void printList(LinkedList ll);
int getItem(LinkedList &ll, int index);
void insertItem(LinkedList &ll, int item, int index);
int pop(LinkedList &ll);
int pop(LinkedList &ll, int index);
void remove(LinkedList &ll, int item);

#include "LinkedLists.cpp"
#endif