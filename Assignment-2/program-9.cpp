/* 
Problem-9: Write functions using function overloading to finda  maximum of two numbers and both the numbers can be integer or real.
*/

#include<iostream>

using namespace std;
int findMax(int, int);
float findMax(float, float);

int main(){
    int a, b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Maximum number is "<<findMax(a,b)<<endl;
    float x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Maximum number is "<<findMax(x,y);
    return 0;
}

int findMax(int a, int b){
    if(a>b) return a;
    return b;
}
float findMax(float x, float y){
    if(x>y) return x;
    return y;
}