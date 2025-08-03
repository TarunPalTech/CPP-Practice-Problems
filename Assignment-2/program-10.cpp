/* 
Problem-10: Write functions using function overloading to add two numbers having different data types.
*/

#include<iostream>

using namespace std;
int add(int, int);
float add(float, float);
float add(int, float);
float add(float, int);

int main(){
    int a, b;
    cout<<"Enter two integer numbers:";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    float x,y;
    cout<<"Enter two real numbers:";
    cin>>x>>y;
    cout<<"Sum is "<<add(x,y)<<endl;
    cout<<"Enter an integer or a real number:";
    cin>>a;
    cin>>x;
    cout<<"Sum is "<<add(a,x)<<endl;
    cout<<"Enter a real number and an integer:";
    cin>>a;
    cin>>x;
    cout<<"Sum is "<<add(x,a)<<endl;
    return 0;
}

int add(int a, int b){
    return a+b;
}
float add(float x, float y){
    return x+y;
}
float add(int x, float y){
    return x+y;
}
float add(float x, int y){
    return x+y;
}