#include <iostream>
#include "Queue.h"

using namespace std;

template <typename T> Queue<T>::Queue(){
    start = NULL;
    end = NULL;
    a = new T[capacity];
}

template <typename T> void Queue<T>::enqueue(T item){
    if(!count){
        a[start] = item;
    }
    else if(count > capacity){
        a[end] = item;
    }
    else
        throw out_of_range("Queue is full");
    count++;
    end = count % capacity;
}

template <typename T> T Queue<T>::dequeue(){
    T item;
    if(!count){
        throw out_of_range("Queue is empty");
    }
    else if(count == 1){

    }
    else{
        
    }

    return item;
}
// bool isEmpty();
// bool isFull();