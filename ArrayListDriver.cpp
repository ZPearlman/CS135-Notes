#include <iostream>
#include "ArrayList.h"

using namespace std;

int main(){
    int item;

    ArrayList<int> myAL;

    myAL.addItem(5);
    myAL.addItem(6);
    myAL.addItem(3);
    myAL.addItem(6);
    myAL.addItem(6);
    myAL.addItem(7);

    myAL.printList();
    item = myAL.pop(4);
    cout << "Popped: " << item <<endl;
    cout <<"The list is now:" <<endl;
    myAL.printList();

    myAL.printList();
    cout << "Removing the first instance of 6" << endl << endl;
    myAL.remove(6);
    myAL.printList();
}