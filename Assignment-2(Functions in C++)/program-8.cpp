/* 
Problem-8: Define overloaded functions to calculate area of circle, area of rectangle, and area of triangle.
*/


#include<iostream>

using namespace std;
float area(float r);
float area(float l, float b);
float area(int b, int h);

int main(){
    float r;
    cout<<"Enter radius:";
    cin>>r;
    cout<<"Area is "<<area(r)<<"!"<<endl;
    float l, b;
    cout<<"Enter length and breadth:";
    cin>>l>>b;
    cout<<"Area is "<<area(l,b)<<"!"<<endl;
    int base, height;
    cout<<"Enter base and hegiht:";
    cin>>base>>height;
    cout<<"Area is "<<area(base,height)<<"!";
    return 0;
}


// Area of circle
float area(float r){
    return 3.14*r*r;
}
// Area of rectangle
float area(float l, float b){
    return l*b;
}
// Area of triangle
float area(int b, int h){
    return 0.5*b*h;
}