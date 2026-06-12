// Problem - 10:- Define a function to merge two sorted arrays of the same size.

#include<iostream>
using namespace std;

void mergeArrays(int *p, int *q, int *m, int size){
    int i=0, j=0, k=0;
    
    while(i<size && j<size){
        if(p[i]<q[j]){
            m[k++] = p[i++];
        }else if(p[i]>q[j]){
            m[k++] = q[j++];
        }else{
            m[k++] = p[i++];
            m[k++] = q[j++];
        }
    }
    
    while(i<size){ // remainig variables of the first array...
        m[k++] = p[i++];
    }
    
    while(j<size){ // remaing variables of the second array...
        m[k++] = q[j++];
    }
}

int main(){
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 3, 6, 8, 10};
    int merged[10];
    
    mergeArrays(arr1,arr2,merged,5);
    
    for(int i=0;i<10;i++){
        cout<<merged[i]<<"\t";
    }
}