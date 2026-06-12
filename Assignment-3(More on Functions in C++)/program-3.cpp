// Problem - 3:- Define a function to rotate an array by n positions in the d direction. Implement position and direction using default arguments. Argument d can be -1 or 1 denoting left or right direction. Argument n should be the last argument with default value 1.

#include<iostream>
#include<cstring>
using namespace std;

void rotateArray(int *p, int size, int dir = 1, int n = 1){
    int i, temp;
    if(dir==1){
        while(n){
            i = size-1;
            temp = p[size-1];
            while(i>0){
                p[i]=p[i-1];
                i--;
            }
            p[0] = temp;
            n--;
        }
    }else if(dir==-1){
        while(n){
            i = 0;
            temp = p[0];
            while(i<size-1){
                p[i] = p[i+1];
                i++;
            }
            p[size-1] = temp;
            n--;
        }
    }else{
        cout<<"You entered a wrong value for the direction!";
    }
}

void displayArray(int *p, int size){
    for(int i=0;i<size;i++){
        cout<<p[i]<<"\t";
    }
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    
    cout<<"Left rotation: ";
    rotateArray(arr, 7);
    displayArray(arr, 7);
    
    cout<<endl<<"Right rotation: ";
    rotateArray(arr, 7, -1, 3);
    displayArray(arr, 7);
    
    return 0;
}