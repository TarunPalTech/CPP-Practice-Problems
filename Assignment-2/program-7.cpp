/* 
Problem-7: Write a function using default argument that is able to add 2 or 3 numbers.
*/

#include<iostream>

using namespace std;
int add(int,int,int=0);

int main(){
    int a,b,c;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b,c);
    return 0;
}

int add(int a, int b, int c){
    return a+b+c;
}