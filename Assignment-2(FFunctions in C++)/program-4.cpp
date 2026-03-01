/* 
Problem-4: Define a function to pint Pascal Triangle up to N lines.
*/

#include<iostream>

using namespace std;
void printPattern(int);
int combinations(int, int);
int factorial(int);

int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    printPattern(n);
    return 0;
}

void printPattern(int n){
    int k, temp;
    for(int i=1;i<=n;i++){
        k=1;
        temp=0;
        for(int j=1;j<=n*2-1;j++){
            if(j>=n+1-i && j<=n-1+i){
                k?cout<<combinations(i-1, temp++):cout<<" ";
                k=1-k;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int combinations(int n, int r){
    return factorial(n)/(factorial(r) * factorial(n-r));
}

int factorial(int n){
    if(n==0) return 1;
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}