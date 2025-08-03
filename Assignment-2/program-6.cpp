/* 
Problem-6: Write a function to swap data of two int variables using call by reference.
*/

#include<iostream>

using namespace std;
void swap(int &, int  &);

int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Values before swapping:"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    swap(a,b);
    cout<<"Values after swapping:"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b;
    return 0;
}

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
