#include<iostream>
using namespace std;
int main(){
    int rem,binary,base=1,decimal=0;
    cout<<"the binary no is ";
    cin>>binary;
    while(binary!=0)
    {
       rem=binary%10;
       decimal=decimal+rem*base;
       binary=binary/10;
       base=base*2;
    }
    cout<<"the decimal no is "<<decimal<<endl;
    return 0;
}