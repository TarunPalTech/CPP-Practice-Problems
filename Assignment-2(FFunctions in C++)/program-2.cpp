/* 
Problem-2: Write a function to find the highest value digit in a given number.
*/

#include<iostream>

using namespace std;
int findGreatestDigit(int);

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Greatest number is "<<findGreatestDigit(num);
    return 0;
}
int findGreatestDigit(int num){
    int greatest = num%10;
    num/=10;
    while(num>=1){
        if(num%10>greatest){
            greatest=num%10;
        }
        num/=10;
    }
    return greatest;
}


