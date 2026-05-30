#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter a number";
    cin>>a;
    cout<<"enter b number";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"the value of a is"<<a;
    cout<<"the value of b is"<<b;
    return 0;
}