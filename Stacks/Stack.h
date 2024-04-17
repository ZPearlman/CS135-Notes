#ifndef __Stack__h
#define __Stack__h

template <typename T>
struct node{
    int value;
    node<T> *next;
};

template <typename T>
class Stack{
    public:
    Stack();
    void push(T item);
    T peek();
    T pop();

    void printStack();
    int getCount();

    
    private:
    int count;
    node<T> *start;

};

#include "Stack.cpp"

#endif