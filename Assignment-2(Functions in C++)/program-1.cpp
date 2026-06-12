
/* Problem-1: Define a function to check whether a given number is a prime number or not. */


// #include<iostream>
// #include<cmath>

// using namespace std;
// bool checkPrime(int);

// int main(){
//     int num;
//     cout<<"Enter a number:";
//     cin>>num;
//     if(checkPrime(num)){
//         cout<<"Number is prime!";
//     }else{
//         cout<<"Number isn't prime!";
//     }
//     return 0;
// }
// bool checkPrime(int num){
//     if(num<=1) return false;
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }