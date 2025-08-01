/* 
Problem-3: Write a C++ program to calculate sum of two numbers.
*/

#include<iostream>

using namespace std;
inline int sum(int ,int);
int main(){
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Sum  is "<<sum(x,y)<<".";
    return 0;
}
int sum(int x, int y){
    return x + y;
}