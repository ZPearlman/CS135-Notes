#include <iostream>
#include "Stack.h"

using namespace std;

template <typename T> Stack<T>::Stack(){
    count = 0;
    start = NULL;
}


template <typename T>  void Stack<T>::push(T item){
    node<T> *newnode = new node<T>;
    (*newnode).value = item;

    if(count){
       (*newnode).next = start;
       start = newnode; 
    }
    else{
        start = newnode;
        (*start).next = NULL;
    }
    count++;
}

template <typename T> T Stack<T>::peek(){
    if(start)
        return (*start).value;
    else
        throw out_of_range("Stack is Empty");
}

template <typename T> T Stack<T>::pop(){
    if(count){
    node<T> *p = start;
    start = (*p).next;
    T item = (*p).value;
    delete(p);
    count--;
    return item; 
    }
    else{
        cout << "Stack is empty" << count; //throw out_of_range("Stack is Empty");
    }
}

template <typename T> void Stack<T>::printStack(){
    node<T> *p;
    p = start;
    while(p){
        cout << (*p).value << endl;
        p = (*p).next;
    }
}
template <typename T> int Stack<T>::getCount(){
    return count;
}