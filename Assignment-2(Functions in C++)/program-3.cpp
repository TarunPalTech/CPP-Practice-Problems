/* 
Problem-3: Define a function to calculate x raised to the power y.
*/

#include<iostream>
#include<cstdlib>
using namespace std;

double calculatePower(double num, int p){
    if(num==0 && p<0){
        cerr<<"Error, Division by zero!";
        exit(EXIT_FAILURE);
    }
    
    int power = abs(p);
    double result = 1.0;
    while(power--){
        result*=num;
    }
    
    return p<0?1/result:result;
}

int main(){
    double n;
    int p;
    cout<<"Enter a number and its power: ";
    cin>>n>>p;
    double result = calculatePower(n,p);
    cout<<"Result is "<<result<<"!";
    return 0;
}
