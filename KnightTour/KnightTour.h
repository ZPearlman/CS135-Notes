#ifndef _KnightTour_h
#define _KnightTour_h

#include "Stack.h"

class Board{
    public:
        Board();
        bool moveLegal(int row, int col, int dir, int board);
        void printBoard();
        //add set value


    private:
        static const int NUMROWS = 8;
        static const int NUMCOLUMNS = 8;
        int row;
        int col;
        int dir;
        int board[NUMROWS][NUMCOLUMNS];


};

class StackData{
    public:
        StackData(){
            getData(0,0,0);
        }
        void getData(int r, int c, int d){
            int row = r;
            int col = c;
            int dir = d;
        }
        void printData(){
            cout << r << endl;
            cout << c << endl;
            cout << d << endl;
        }

    private:
        int r;
        int c;
        int d;

};



#include "KnightTour.cpp"
#endif