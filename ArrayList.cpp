#include <iostream>
#include "ArrayList.h"
using namespace std;

template <typename T> ArrayList<T>::ArrayList(){
    capacity = 8;
    a = new T[capacity];
    count = 0;
    // for (int i = 0; i < capacity; i++)
    //     a[i] = 0;

}

template <typename T> void ArrayList<T>::addItem(T item){
    if (count + 1 >= capacity){
        grow();
    }
    a[count++] = item;
}

template <typename T> void ArrayList<T>::printList(){
    for(int i = 0; i < count; i++){
        cout << a[i] << endl;
    }
}

template <typename T> T ArrayList<T>::getItem(int index){
    if (index < 0 || index > count+1) {
        throw out_of_range("");
    }
    else{
        return a[index];
    }
}


template <typename T> T ArrayList<T>::pop(){
    //Removes the last element of the list
    //T result;

    if (count == 0){
        throw out_of_range("List is empty");
        //return 0;  // Or throw exception.
    }
    else{
        // result = a[--count];
        // return result;

        return a[--count];
    }
}

template <typename T> T ArrayList<T>::pop(int index){

    T result;

    if (index < 0 || index >= count){
        throw out_of_range("Out of Bounds");
    }
    result = a[index];
    for (int i = index; i< count; i++){
        a[i] = a[i+1];
    }
    count --;
    return result;


}

template <typename T> void ArrayList<T>::remove(T item){
    //Variable list
    int loc = 0; //Acts as "0" to avoid off by 1 error later on

    while (loc <= count && (a[loc++] != item));

    if(loc > count){
        throw out_of_range("Item not in List");
    }
    else{
        for (int i = loc - 1; i < count; i++){
            a[i] = a[i+1];
        }
        count--;
    }
}

template <typename T> void ArrayList<T>::insert(T item, int index){
    if(index < 0 || index > count)
        throw out_of_range("Index Out of Bouonds");
    if(++count == capacity)
        grow();
        
    for(int i = count; index < i; i--)
        a[i] = a[i-1];
}

template <typename T> void ArrayList<T>::grow(){
    T* old = a;
    a = new T[capacity*2];
    for (int i = 0; i < count; i ++){
        a[i] = old[i];
    }
    capacity *= 2;
    delete old;

}

template <typename T> int ArrayList<T>::getCount(){
    return count;
}
