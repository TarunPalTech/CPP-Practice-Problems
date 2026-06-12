/* 
Problem-2: Write a function to find the highest value digit in a given number.
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int highestDigit(int n){
    n = abs(n);
    int digit = n%10;
    n/=10;
    while(n){
        if(n%10>digit){
            digit=n%10;
        }
        n/=10;
    }
    return digit;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result = highestDigit(n);
    
    cout<<"Highest digit is "<<result<<"!";
    return 0;
}



