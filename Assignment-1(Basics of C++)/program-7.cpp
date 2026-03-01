/* 
Problem-7: Write a C++ program  to calculate the square of a number.
*/

#include<iostream>
using namespace std;

inline float calculateSquare(int);

int main(){
    float n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Square is "<<calculateSquare(n)<<"!";
    return 0;
}

float calculateSquare(int n){
    return n*n;
}