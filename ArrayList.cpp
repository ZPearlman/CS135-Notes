#include <iostream>
#include "ArrayList.h"
using namespace std;

ArrayList initialize(){

    ArrayList al;
    al.capacity = 8;
    al.a = new int[al.capacity];
    al.count = 0;
    for (int i = 0; i < al.capacity; i++){
        al.a[i] = 0;
    }
    return al;
}

void grow (ArrayList &al){
    int* old = al.a;
    al.a = new int[al.capacity*2];
    for (int i = 0; i <al.count; i ++){
        al.a[i] = old[i];
    }
    al.capacity *=2;

    delete old;

}

void addItem(ArrayList &al, int num){
    if (al.count + 1 >= al.capacity){
        grow(al);
    }
    al.a[al.count++] = num;
}

void printList(ArrayList al){
    for(int i = 0; i<al.count; i++){
        cout << al.a[i] << endl;
    }
}

int getItem(ArrayList al, int index){
    if (index < 0 || index > al.count+1) {
        throw out_of_range("");
    }
    else{
        return al.a[index];
    }
}


int pop(ArrayList &al){
    //Removes the last element of the list

    int lastCount;
    int result;

    if (al.count == 0){
        throw out_of_range("List is empty");
        //return 0;  // Or throw exception.
    }
    else{
        lastCount = al.count -1;
        result = al.a[lastCount];
        al.count--;
        return result;
    }
}

int pop(ArrayList &al, int index){

    int result;

    if (index < 0 || index >=al.count){
        throw out_of_range("Out of Bounds");
    }
    result = al.a[index];
    for (int i = index; i< al.count; i++){
        al.a[i] = al.a[i+1];
    }
    al.count --;
    return result;


}

void remove(ArrayList &al, int item){
    //Variable list
    int loc = 0; //Acts as "0" to avoid off by 1 error later on

    while (loc <= al.count && (al.a[loc++] != item));

    if(loc > al.count){
        throw out_of_range("Item not in List");
    }
    else{
        for (int i = loc - 1; i < al.count; i++){
            al.a[i] = al.a[i+1];
        }
        al.count--;
    }
}

void insert(ArrayList &al, int item, int index){
    if(index < 0 || index > al.count)
        throw out_of_range("Index Out of Bouonds");
    if(++al.count == al.capacity)
        grow(al);
        
    for(int i = al.count; index < i; i--)
        al.a[i] = al.a[i-1];
}