#include <iostream>
#include <fstream>
#include "LinkedList.h"

using namespace std;

int main(){
    ofstream outfile;
    outfile.open("Data.txt"); //Open for writing file
    
    outfile << "Hello World!" << endl;


    outfile.close();

    ifstream infile;
    infile.open("Data.txt");
    string str;
    //str >> infile;

    return 0;
}