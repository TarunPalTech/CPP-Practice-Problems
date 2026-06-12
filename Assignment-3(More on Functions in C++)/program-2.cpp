// Problem - 1: Define a program to sort an array of strings in ascending or descending order depending on bool type argument(true for ascending and false for descensing). Use default argument to implement it.

// Key Difference
// C-style (char[]) → must use strcmp.
// C++ std::string → can use comparison operators directly.
// Important: You can use compare two strings directly because while comparing two strings c++ uses the concept of function overloading.

// Important: string data type works like int data type so you can use string array like an int array.


#include<iostream>
#include<cstring>
using namespace std;

void sortStrings(string p[], int n, bool dir = true){
    for(int round=1;round<n;round++){
        for(int i=0;i<n-round;i++){
            if((dir && p[i] > p[i+1]) || (!dir && p[i]<p[i+1])){
                swap(p[i],p[i+1]); // part of the standard library....
            }
        }
    }
}

void printArrayOfStrings(string p[], int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
}

int main(){
    // 5 strings, each max length 20 characters
    string fruits[5]  = {
        "Mango",
        "Apple",
        "Orange",
        "Banana",
        "Cherry"
    };
    
    cout<<"Ascending order: "<<endl;
    sortStrings(fruits, 5);
    printArrayOfStrings(fruits, 5);
    cout<<endl<<"Descending order: "<<endl;
    sortStrings(fruits, 5, false);
    printArrayOfStrings(fruits, 5);
}