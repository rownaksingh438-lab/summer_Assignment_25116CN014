#include<iostream>
using namespace std;
int countNumDigit(int n){
    if(n==0){
        return 1;
    }
    int numdigit=0;
    while(n!=0){
        int remainder = n%10;
        n=n/10;
        numdigit++;

    }
    
    return numdigit;
}

