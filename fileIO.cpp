#include <iostream>
#include <fstream>
#include "LinkedLists.h"

using namespace std;

int main(){
    ofstream outfile;
    outfile.open("Data.txt"); //Open for writing file
    
    outfile << "Hello World!" << endl;


    outfile.close();
    return 0;
}