#ifndef _QueueLL_h
#define _QueueLL_h

template <typename T>
struct node{
    T value;
    node<T> *next;
};

template <typename T> 
class Queue{
    public:
        Queue();
        void enqueue(T item);
        T dequeue();
        bool isEmpty();
        bool isFull();
    private:
        node<T> *front;
        node<T> *end;
        int count;
        static const int capacity = 100;
};

#include "QueueLL.cpp"

#endif