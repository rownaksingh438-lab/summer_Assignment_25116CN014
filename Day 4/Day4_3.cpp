#include<iostream>
using namespace std;
int main(){
    int n,d,som=0,temp;
    cout<<"ther the number";
    cin>>n;
    temp=n;
    while(n!=0)
    {
        d=n%10;
        som=som+d*d*d;
        n=n/10;
    }
    if(temp==som)
    {
        cout<<"number is armstrong";
    }
    else{
        cout<<"not armstrong";
    }
     return 0;
}