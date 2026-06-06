#include<iostream>
using namespace std;
int main(){
    int count=0,n;
    while(n){
        int bit=n&1;
        if(bit)
        count++;
        n=n>>1;
    }
    return count;
}