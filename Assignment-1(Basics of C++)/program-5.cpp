/* 
Problem-5: Write a C++ program to calculate the volume of cuboid.
*/

#include<iostream>

using namespace std;
inline int volume(int, int, int);

int main(){
    int l, b, h;
    cout<<"Enter length, breadth, and height:";
    cin>>l>>b>>h;
    cout<<"Volume is "<<volume(l,b,h)<<".";
}
int volume(int l, int b, int h){
    return l *b *h;
}