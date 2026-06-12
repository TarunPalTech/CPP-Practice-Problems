// Problem - 4:- Define a program to calculate LCM of three numbers.

// Important:- There, I defined two different methods to calculate lcmof three numbers. You can use built in gcd method to find greatest common divisor by including <numeric> header file.

#include<iostream>
#include<algorithm> // for std::max
using namespace std;

int lcm(int a, int b, int c){
    for(int  L= max(a, max(b, c)); L<=a*b*c; L++){
        if(L%a==0 && L%b==0 && L%c==0){
            return L;
        }
    }
    return -1;
}

int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int lcmTwo(int a, int b){
    return (a*b)/gcd(a,b);
}

int lcmThree(int a, int b, int c){
    int ab = lcmTwo(a,b);
    return lcmTwo(ab,c);
}

int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    
    cout<<"LCM is "<<lcm(a,b,c)<<"!";
    
    cout<<endl<<"LCM is "<<lcmThree(a,b,c)<<"!";
    
    return 0;
}