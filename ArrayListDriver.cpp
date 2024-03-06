#include <iostream>
#include "ArrayList.h"

using namespace std;

int main(){
    int item;

    ArrayList myAL = initialize();
    
    addItem(myAL, 5);
    addItem(myAL, 6);
    addItem(myAL, 3);
    addItem(myAL,6);
    addItem(myAL, 8);
    addItem(myAL, 7);

    /*printList(myAL);
    item = pop(myAL, 4);
    cout << "Popped: " <<item <<endl;
    cout <<"The list is now:" <<endl;
    printList(myAL);*/
    printList(myAL);
    cout << "Removing the first instance of 6" << endl << endl;
    remove(myAL,0);
    printList(myAL);
}