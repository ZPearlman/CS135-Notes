#include <iostream>
#include "Counter.h"
using namespace std;

int main(){
    Counter c;

    cout << c.getCount() << endl;
    c.incrementBy(5);
    cout << c.getCount() << endl;

    c.incrementBy(-10);
    cout << c.getCount() << endl;
}