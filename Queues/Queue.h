#ifndef _Queue_h
#define _Queue_h

template <typename T>
class Queue{
    public:
        Queue();
        void enqueue(T item);
        T dequeue();
        bool isEmpty();
        bool isFull();


    private:
        int count;
        T *start;
        T *end;
        static int const capacity = 10;
        T 
        8a;
};


#include "Queue.cpp"

#endif