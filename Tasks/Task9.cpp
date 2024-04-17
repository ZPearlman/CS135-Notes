#include <iostream>
#include "Stack.h"

using namespace std;
int postFix(string);

int main(){
    string pF = "1853+-/";
    int total = 0;

    // for(int i = 0; i < eq.length(); i++){
    //     cout << "'"<< eq[i] << "'" << endl;
    //     int x = int(eq[i]) - 48; //Quick and dirty solution using ascii values
    //     cout << x << endl;
    //     total += x;
    //     cout << total << endl;
    // }
    total = postFix(pF);
    cout << total << " = " << pF << endl;

    return 0;
}

int postFix(string postFix){
    Stack<int> eq;
    int x;
    int y;
    bool divide = true;
    for(int i= 0; i < postFix.length(); i++){
        if(postFix[i] == '+'){
            y = eq.pop();
            x = eq.pop();
            eq.push((x+y));        
        }
        else if(postFix[i] == '-'){
            y = eq.pop();
            x = eq.pop();
            eq.push((x-y));
        }
        else if(postFix[i] == '/'){
            y = eq.pop();
            x = eq.pop();
            if(y)
                eq.push((x/y));
            else{
                divide = false;
                break;
            }
        }
        else if(postFix[i] == '*'){
            y = eq.pop();
            x = eq.pop();
            eq.push((x*y));

        }
        else{
            int num = int(postFix[i]) - 48; //Takes the ascii value of the character int and turns it into actual int value
            eq.push(num);
        }
    }

    if(divide)
        return eq.pop();
    else{
        cout << "Your equation divides by 0 and is therefore invalid." << endl;
        return 0;
    }
}