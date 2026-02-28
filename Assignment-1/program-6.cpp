/* 
Problem-3: Write a C++ program to calculate average of 3 numbers.
*/

#include<iostream>
using namespace std;

float average(float a, float b, float c);

int main(){
    float a,b,c;
    cout<<"Enter three values: ";
    cin>>a>>b>>c;
    cout<<"Average is "<<average(a,b,c)<<"!";
    return 0;
}

float average(float a, float b, float c){
    return (a+b+c)/3.0;
}