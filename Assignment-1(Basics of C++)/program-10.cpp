/* 
Problem-10: Write a program to add all the numbers of an array of the size 10.
*/
#include<iostream>

using namespace std;
inline int calculateSum(int *);

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Sum is "<<calculateSum(arr)<<".";
    return 0;
}

int calculateSum(int *p){
    int sum = 0;
    for(int i=0;i<10;i++){
        sum+=*(p+i);
    }
    return sum;
}