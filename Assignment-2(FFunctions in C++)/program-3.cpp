/* 
Problem-3: Define a function to calculate x raised to the power y.
*/

#include<iostream>

using namespace std;
void calculatePower(int, int, int &);
void calculatePower(int, int, float &);

int main(){
    int x, y;
    int posResult;
    float negResult;
    cout<<"Enter a number:";
    cin>>x;
    cout<<"Enter a power:";
    cin>>y;
    if(y>=0){
        calculatePower(x,y,posResult);
        cout<<"Value is "<<posResult;
    }else{
        calculatePower(x,y,negResult);
        cout<<"Value is "<<negResult;
    }
    return 0;
}

void calculatePower(int x, int y, int &posResult){
    if(y==0) posResult =1;
    else{    
        posResult=x;
        while(y>1){
            posResult*=x;
            y--;
        }
    }
}
void calculatePower(int x, int y, float &negResult){
    negResult = 1.0;
    while(y<0){
        negResult/=x;
        y++;
    }
}