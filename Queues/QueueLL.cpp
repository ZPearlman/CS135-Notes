#include <iostream>
#include "QueueLL.h"

using namespace std;

template <typename T> Queue<T>::Queue(){
    front = NULL;
    end = NULL;
    count = 0;
}

template <typename T> void Queue<T>::enqueue(T item){
    node<T> *newNode = new node<T>;
    newNode->value = item;
    newNode->next = NULL;
    if(isEmpty()){
        end = newNode;
        front = newNode;
    }
    else if(isFull())
        throw out_of_range("Queue is full");

    else{
        node<T> *p = end;
        end = newNode;
        p->next = end;
    }
    count++;
}

template <typename T> T Queue<T>::dequeue(){
    if(isEmpty())
        throw out_of_range("No items in the Queue");

    node<T> *p = front;
    T item = p->value;
    front = p->next;
    if(count == 1)
        end = NULL;

    delete p;
    count--;

    return item;
}

template <typename T> bool Queue<T>::isEmpty(){
    return !count;
}

template <typename T> bool Queue<T>::isFull(){
    return count == capacity;
}