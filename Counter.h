#ifndef __counter_h
#define __counter_h

class Counter{
    public:
        Counter(); //Constructor Function
        int getCount();
        void incrementBy(int x);

    private:
        int count;

};

#include "Counter.cpp"

#endif