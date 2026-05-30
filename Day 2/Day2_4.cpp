#include<iostream>
using namespace std;
int main(){
    int n,rev=0,d,original;
    cout<<"enter the number ";
    cin>>n;
    original=n;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==original){
        cout<<"the no is palindrm";
    }
    else{
        cout<<"th no is not pallindrome";
    }
    
    return 0;
}