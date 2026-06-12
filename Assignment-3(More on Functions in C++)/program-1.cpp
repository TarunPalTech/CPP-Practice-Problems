// Problem - 1: Define a program to sort an array of integers in ascending or descending order depending on bool type argument(true for ascending and false for descensing). Use default argument to implement it.

#include<iostream>
using namespace std;

void sorting(int *p, int size, bool dir = true){
    if(dir){
        cout<<"Ascending order:"<<endl;
        for(int round=1;round<size;round++){
            for(int i=0;i<size-round;i++){
                if(p[i]>p[i+1]){
                    int temp = p[i];
                    p[i] = p[i+1];
                    p[i+1] = temp;
                }
            }
        }
    }else{
        cout<<"Descending order: "<<endl;
        for(int round=1;round<size;round++){
            for(int i=0;i<size-round;i++){
                if(p[i]<p[i+1]){
                    int temp = p[i];
                    p[i] = p[i+1];
                    p[i+1] = temp;
                }
            }
        }
    }
}

void printArray(int *p, int size){
    for(int i=0;i<size;i++){
        cout<<p[i]<<"\t";
    }
}

int main(){
    int arr[10] = {12, 45, 67, 23, 89, 34, 56, 78, 90, 11};
    
    sorting(arr,10);
    printArray(arr,10);
    cout<<endl;
    sorting(arr,10,false);
    printArray(arr,10);
    
    return 0;
}