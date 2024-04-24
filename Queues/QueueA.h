#ifndef _QueueA_h
#define _QueueA_h

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
};


#include "QueueA.cpp"

#endif