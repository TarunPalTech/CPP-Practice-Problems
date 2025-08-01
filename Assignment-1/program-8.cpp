/* 
Problem-8: Write a c++ program to swap values of two int variables without using third variable.
*/

#include<iostream>

using namespace std;
inline void swap(int &,int &);

int main(){
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Values before swapping:"<<endl;
    cout<<"x="<<x<<" y="<<y;
    swap(x,y);
    cout<<endl;
    cout<<"After swapping:"<<endl;
    cout<<"x="<<x<<" y="<<y;
    return 0;
}
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}