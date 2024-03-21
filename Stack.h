#ifndef __Stack__h
#define __Stack__h

struct node{
    int value;
    node *next;
};

template <typename T>
class Stack{
    public:
    Stack();
    

    private:
    int count;
    node *start;
    node *end;

};

#endif