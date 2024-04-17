#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){
    LinkedList<int> myList;
    

    cout << myList.getCount() << endl << endl;
    myList.addItem(5);
    myList.addItem(10);
    myList.addItem(3);
    myList.addItem(6);
    myList.addItem(93);
    myList.insertItem(16, 2);
    myList.printList();
    cout << "Count after added" << endl;
    cout << myList.getCount() << endl << endl;

    int item = myList.pop();
    cout << item << " was removed from the list" << endl;
    myList.printList();
   
    item = myList.pop(0);
    cout << item << " was removed from the list" << endl;
    myList.printList();

    cout << "Removing 6 from the list" << endl;
    myList.remove(6);

    myList.printList();
    cout << "Count after 3 items removed" << endl;
    cout << myList.getCount() << endl << endl;


    return 0;
}