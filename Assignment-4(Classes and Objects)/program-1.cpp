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