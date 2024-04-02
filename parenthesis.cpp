#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    Stack<char> s;
    string eq = "(5+10(2) / 13(6-1))";
    
    try{
        char close;
        for(int i = 0; i < eq.length(); i++){
        if(eq[i] == '(')
            s.push('(');
        if(eq[i] == '[')
            s.push('[');
        if(eq[i] == ')')
            s.pop();
        if(eq[i] == ']')
            s.pop();
        }

        if(s.getCount())
            cout << "Bad" << endl;
        else
            cout << "Good" << endl;
    }
    catch(out_of_range e){
        cout << "Bad" << endl;
    }

    return 0;
}