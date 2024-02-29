#include <iostream>
#include "LinkedLists.h"
using namespace std;

int main(){
    LinkedList myList;
    myList = initialize();
    addItem(myList,5);
    addItem(myList,10);
    addItem(myList,3);
    addItem(myList,6);
    addItem(myList,93);

    printList(myList);

    return 0;
}