#include <iostream>
#include "Stack.h"

using namespace std;

int main(){

    Stack<int> s;

    for(int i = 0; i < 5; i++)
        s.push(i);

    s.printStack();

    cout << s.peek() << endl;

    int num;
    while(s.getCount() > 0){
        num = s.pop();
        cout << num << endl;
    }
    
    cout << s.peek() << endl;

    return 0;
}