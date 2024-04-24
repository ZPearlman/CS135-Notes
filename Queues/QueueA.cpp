#include <iostream>
#include "QueueA.h"

using namespace std;

template <typename T> Queue<T>::Queue(){
    start = NULL;
    end = NULL;
    a = new T[capacity];
}

template <typename T> void Queue<T>::enqueue(T item){
    if(isFull())
        throw out_of_range("Queue is full");
    a[end] = item;
    end = (end + 1) % capacity;
    count++;
}

template <typename T> T Queue<T>::dequeue(){
    if(isEmpty())
        throw out_of_range("Queue is empty");
    T item = a[start];
    start = (start + 1) % capacity;
    count--;
    return item;
}

template <typename T> bool Queue<T>::isEmpty(){
    if(count)
        return false;
    return true;
}

template <typename T> bool Queue<T>::isFull(){
    if(count != capacity)
        return false;
    return true;

}