// Problem - 6:- Define a function to calculate hcf of two numbers...

#include<iostream>
using namespace std;

int hcf(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"HCF is "<<hcf(a,b);
    return 0;
}