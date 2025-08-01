/* 
Problem-4: Write a C++ program to calculate the area of circle.
*/

#include<iostream>

using namespace std;
inline float area(float);
int main(){
    float r;
    cout<<"Enter radious:";
    cin>>r;
    cout<<"Area of circle is "<<area(r)<<".";
    return 0;
}
float area(float r){
    return 3.14*r*r;
}