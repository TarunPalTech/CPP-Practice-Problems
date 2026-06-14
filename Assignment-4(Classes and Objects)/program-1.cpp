// Problem - 1:- Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.


#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        void setData(int a, int b){
            real = a;
            img = b;
        }
        void showData(){
            cout<<"Number: "<<real<<" + "<<img<<"j";
        }
};

int main(){
    Complex num1;
    num1.setData(3,4);
    num1.showData();
    return 0;
}