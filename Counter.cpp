#include <iostream>
#include "Counter.h"
using namespace std;

Counter::Counter(){
    count = 0;
}

int Counter::getCount(){
    return count;
}

void Counter::incrementBy(int x){
    if(x>0)
        count += x;
}