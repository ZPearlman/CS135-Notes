#include <iostream>
#include "KnightTour.h"

using namespace std;

Board::Board(){
    for(int i = 0; i < NUMROWS; i++){
        for(int j = 0; j < NUMCOLUMNS; j++)
            board[i][j] = 0;
    }
}

void Board::printBoard(){
    for(int i = 0; i < NUMROWS; i++){
        for(int j = 0; j < NUMCOLUMNS; j++)
            cout << board[i][j] << " ";
        
        cout << endl;
    }
    cout << endl;
}