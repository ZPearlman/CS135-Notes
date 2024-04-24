#ifndef _Customer_h
#define _Customer_h


class Customer{
    public:
        Customer();
        int getItemCount();
        int getArrivalTime();


    private:
        int time = 0;
        int items;
        int arrival;

};


#endif