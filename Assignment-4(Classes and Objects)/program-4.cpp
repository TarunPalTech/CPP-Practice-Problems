// Problem - 4:- In question 3, define methods to display date in the following pattern

// 1. 31-12-2022
// 2. 31-Dec-2022

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
        void getDateMethod1();
        string getMonth();
        void getDateMethod2();
};

void Date::getDateMethod1(){
    cout<<day<<"-"<<month<<"-"<<year<<endl;
}

string Date::getMonth(){
    switch(month){
        case 1:
            return "Jan";
        case 2:
            return "Feb";
        case 3:
            return "Mar";
        case 4:
            return "Apr";
        case 5:
            return "May";
        case 6:
            return "Jun";
        case 7:
            return "Jul";
        case 8:
            return "Aug";
        case 9:
            return "Sep";
        case 10:
            return "Oct";
        case 11:
            return "Nov";
        case 12:
            return "Dec";
        default:
            cout<<"Month value is wrong!";
            return "";
    }
}

void Date::getDateMethod2(){
    cout<<day<<"-"<<getMonth()<<"-"<<year<<endl;
}

int main(){
    Date date;
    date.setDate(13, 8, 2024);
    date.getDateMethod1();
    date.getDateMethod2();
    return 0;
}