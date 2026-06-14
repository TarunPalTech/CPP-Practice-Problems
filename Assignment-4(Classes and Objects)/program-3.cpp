// Problem - 3:- Define a class Date to represent date (like d=31, m=12, y=2022). Declare appropriate number of instance member variables and also define instance member functions to set date and get date.

#include<iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        void setDate(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }
        void getDate(){
            cout<<"d="<<day<<", "<<"m="<<month<<", "<<"y="<<year;
        }
};

int main(){
    Date date;
    date.setDate(13, 8, 2024);
    date.getDate();
    return 0;
}