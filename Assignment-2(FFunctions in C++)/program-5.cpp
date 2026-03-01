/* 
Problem-5: Define a function to check whether a given number is a term in a fibonacci series or not.
*/

#include<iostream>

using namespace std;
void findNumInFibonacciSeries(int,int &);

int main(){
    int n, result;
    cout<<"Enter a number:";
    cin>>n;
    findNumInFibonacciSeries(n, result);
    if(result){
        cout<<"Number is in the fibonacci series!";
    }else{
        cout<<"Number is not in the fibonacci series!";
    }
    return 0;
}

void findNumInFibonacciSeries(int n, int &result){
    int a=-1, b=1, c;
    while(true){
        c=a+b;
        if(c==n){
            result = true;
            break;
        }else if(c>n){
            result = false;
            break;
        }
        a=b;
        b=c;
    }
}