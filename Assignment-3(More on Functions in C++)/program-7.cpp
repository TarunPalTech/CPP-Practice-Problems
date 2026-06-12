// Problem - 7:- Define overloaded functions to calculate volume of a cuboid, cone and sphere.

#include<iostream>
using namespace std;

float volume(float a, float b, float c){
    return a*b*c;
}

float volume(float r, float h){
    return (float (1)/3)  *(3.14 * r *r * h);
}

float volume(float r){
    return (float (4)/3) * 3.14*r*r*r;
}

int main(){
    cout<<"Volume is "<<volume(3,4,5)<<endl;
    cout<<"Volume is "<<volume(2.5, 5)<<endl;
    cout<<"Volume is "<<volume(5);
    return 0;
}