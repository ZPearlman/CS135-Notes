#include <iostream>
#include "LinkedLists.h"
using namespace std;

LinkedList initialize(){
    LinkedList ll;
    ll.count = 0;
    ll.start = NULL;
    ll.end = NULL;
    return ll;
}

void addItem(LinkedList &ll, int item){
    node *newNode = new node;
    // newNode.calue = item; // illegal
    //(*newNode).value = item; // legal but ugly
    newNode -> value = item; // Better Looking -> means pointer
    if(ll.count == 0){
        ll.start = newNode;
        ll.end = newNode;
    }
    else{
        ll.end->next = newNode;
        ll.end = newNode;
    }
    ll.count++;
}

void printList(LinkedList ll){
    node *p = ll.start;
    for(int i = 0; i < ll.count; i++){
        cout << p->value << endl;
        p = p->next;
    }
}

int getItem(LinkedList &ll, int index){
    node *p;
    p = ll.start;

    if(index < 0 || index >= ll.count)
        throw out_of_range("");

    else{
        for(int i = 0; i < index; i++)
            p = (*p).next;
    }
    return (*p).value;
}

void insertItem(LinkedList &ll, int item, int index){
    node *p;
    p = ll.start;

    if(index < 0 || index > ll.count)
        throw out_of_range("");

    node *newNode = new node;
    (*newNode).value = item;

    if(index == 0){
        (*newNode).next = ll.start;
        ll.start = newNode; 
        if(ll.count == 0)
            ll.end = newNode;
    }

    else if(index == ll.count){
        (*ll.end).next = newNode;
        ll.end = newNode;
        (*ll.end).next = NULL;
    }

    else{
        for(int i = 0; i < index - 1; i++)
            p = (*p).next;
        
        (*newNode).next = (*p).next;
        (*p).next = newNode;
    }
    ll.count++;
}

int pop(LinkedList &ll){
    node *p;
    int item;

    if(ll.count == 0)
        throw out_of_range("");

    else if(ll.count-- == 1){
        p = ll.start;
        item = (*p).value;
        ll.start = NULL;
        ll.end = NULL;
        delete p;
    }
    
    else{
        p = ll.start;
        for(int i = 0; i < ll.count; i++)
            p = (*p).next;

        ll.end = p;
        p = (*p).next;
        (*ll.end).next = NULL; //ll.end->next = NULL

        item = (*p).value;
        delete p;
    }

    return item;
}

int pop(LinkedList &ll, int index){
    node *p;
    int item;

    if (ll.count == 0 || index < 0 || index >= ll.count)
        throw out_of_range("");

    else if(ll.count == 1 || index == --ll.count){
        ll.count++;
        item = pop(ll);
    }
    else if (index == 0){
        p = ll.start;
        ll.start = (*p).next;
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
void remove(LinkedList &ll, int item){
    node *p;
    node *temp;

    p = ll.start;
    if((*p).value == item){
        ll.start = (*p).next;
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
            ll.end = p;
            delete temp;
        }

        else{
            (*p).next = (*temp).next;
            delete temp;
        }
    }
}