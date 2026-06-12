// Problem - 9: Define a function to swap two arrays.


#include<iostream>
using namespace std;

void swapArrays(int *p, int *q, int size){
    for(int i=0;i<size;i++){
        swap(p[i],q[i]);
    }
}

void printArray(int *p, int size){
    for(int i=0;i<size;i++){
        cout<<p[i]<<"\t";
    }
}

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {10,20,30,40,50};
    
    swapArrays(a,b,5);
    cout<<"Array-a:\n";
    printArray(a,5);
    cout<<"\nArray-b:\n";
    printArray(b,5);
    return 0;
}