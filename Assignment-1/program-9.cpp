/* 
Program-9: Write a C++ program to find the maximum of two numbers.
*/

#include<iostream>

using namespace std;
inline int findMax(int, int);

int main(){
    int x, y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Maximum number is "<<findMax(x,y)<<".";
    return 0;
}

int findMax(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}