#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"the gcd is"<<a<<endl;
    return 0;
}