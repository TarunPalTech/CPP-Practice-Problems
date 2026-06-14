// Problem - 2:- Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display vlues of time.

#include<iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        void setData(int x, int y, int z){
            hours = x;
            minutes = y;
            seconds = z;
        }
        void showData(){
            cout<<hours<<" hr "<<minutes<<" min "<<seconds<<" sec ";
        }
};

int main(){
    Time time;
    time.setData(3, 42, 56);
    time.showData();
    return 0;
}