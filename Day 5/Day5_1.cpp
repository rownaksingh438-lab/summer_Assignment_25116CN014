#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        cout<<"it is a perfect no";
    }
    else{
        cout<<"not a perfect number";
    }
    return 0;
}