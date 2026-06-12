// Problem - 8:- Define a function to print a substring from startIndex(inclusive) to endIndex(exclusive). Define function in such a way that if second argument is not provided, string wll print till the last possible index.

#include<iostream>
#include<cstring>
using namespace std;

void substring(char *p, int startIndex, int endIndex = -1){
    int len = strlen(p);
    if(endIndex == -1){
        endIndex = len;
    }
    
    if(startIndex<0 || endIndex<startIndex || startIndex>=len || endIndex>len){ // endIndex must be greater that from len...
        cout<<"Index values are not correct!";
        return;
    }
    
    while(startIndex<endIndex){
        cout<<p[startIndex++];
    }
}

int main(){
    char str[] = "My dream is to visit scotland!";
    
    substring(str,5, 13);
    cout<<endl;
    substring(str, 7);
    return 0;
}