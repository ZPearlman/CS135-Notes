#include <iostream>
#include "LinkedList.h"
using namespace std;

template <typename T> LinkedList<T>::LinkedList(){
    count = 0;
    start = NULL;
    end = NULL;
}

template <typename T> void LinkedList<T>::addItem(T item){
    node *newNode = new node;
    // newNode.calue = item; // illegal
    //(*newNode).value = item; // legal but ugly
    newNode -> value = item; // Better Looking -> means pointer
    if(count == 0){
        start = newNode;
        end = newNode;
    }
    else{
        end->next = newNode;
        end = newNode;
    }
    count++;
}

template <typename T> void LinkedList<T>::printList(){
    node *p = start;
    for(int i = 0; i < count; i++){
        cout << p->value << endl;
        p = p->next;
    }
}

template <typename T> T LinkedList<T>::getItem(int index){
    node *p;
    p = start;

    if(index < 0 || index >= count)
        throw out_of_range("");

    else{
        for(int i = 0; i < index; i++)
            p = (*p).next;
    }
    return (*p).value;
}

template <typename T> void LinkedList<T>::insertItem(T item, int index){
    node *p;
    p = start;

    if(index < 0 || index > count)
        throw out_of_range("");

    node *newNode = new node;
    (*newNode).value = item;

    if(index == 0){
        (*newNode).next = start;
        start = newNode; 
        if(count == 0)
            end = newNode;
    }

    else if(index == count){
        (*end).next = newNode;
        end = newNode;
        (*end).next = NULL;
    }

    else{
        for(int i = 0; i < index - 1; i++)
            p = (*p).next;
        
        (*newNode).next = (*p).next;
        (*p).next = newNode;
    }
    count++;
}

template <typename T> T LinkedList<T>::pop(){
    node *p;
    T item;

    if(count == 0)
        throw out_of_range("");

    else if(count-- == 1){
        p = start;
        item = (*p).value;
        start = NULL;
        end = NULL;
        delete p;
    }
    
    else{
        p = start;
        for(int i = 0; i < count-1; i++)
            p = (*p).next;

        end = p;
        p = (*p).next;
        (*end).next = NULL; //ll.end->next = NULL

        item = (*p).value;
        delete p;
    }

    return item;
}

template <typename T> T LinkedList<T>::pop(int index){
    node *p;
    T item;

    if (count == 0 || index < 0 || index >= count)
        throw out_of_range("");

    else if(count == 1 || index == --count){
        count++;
        item = pop();
    }
    else if (index == 0){
        p = start;
        start = (*p).next;
        item = (*p).value;
        delete p;
    }

    else{
        for(int i = 0; i < --index; i++)
            p = (*p).next;
        
        node *temp = (*p).next;
        item = (*temp).value;
        (*p).next = (*temp).next;
        delete temp;
    }

    return item;
}

//Need to find a way to write this without using two nodes.
template <typename T> void LinkedList<T>::remove(T item){
    node *p;
    node *temp;

    p = start;
    if((*p).value == item){
        start = (*p).next;
        delete p;
    }
    else{
        temp = (*p).next;
        while((*temp).value != item && (*temp).next != NULL){
            p = (*p).next;
            temp = (*temp).next;
        }

        if((*temp).value != item)
            throw out_of_range("");

        else if((*temp).next == NULL){
            end = p;
            (*end).next = NULL;
            delete temp;
        }

        else{
            (*p).next = (*temp).next;
            delete temp;
        }
    }
    count--;
}

template <typename T> int LinkedList<T>::getCount(){
    return count;
}