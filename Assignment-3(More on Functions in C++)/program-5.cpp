// Problem - 5:- Define a function to print all the prime factors of a given number. [for example num=36, prime factors are 2 3]

#include<iostream>
using namespace std;

// void printPrimeFactors(int num){  // In this version there is so many unneccessary checks...
//     if(num<2) return;
    
//     int i=2;
//     while(num>1){
//         if(num%i==0){
//             cout<<i<<<<"\t";
//             while(num%i==0){
//                 num/=i;
//             }
//         }
//         i++;
//     }
// }

void printPrimeFactors(int num){ // This avoids unnecessary iterations once the number is reduced.
    if(num<2) return;

    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            cout<<i<<"\t";
            while(num%i==0){
                num/=i;
            }
        }
    }
    if(num>1) cout<<num; // to print rest of the prime number..(if there)
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    printPrimeFactors(num);
    return 0;
}