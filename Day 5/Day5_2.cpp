#include<iostream>
using namespace std;
int main(){
    int n,sum=0,rem;
    cout<<"enter the number";
    cin>>n;
     int E=n;
    while(n>0)
    {
        rem=n%10;
         int f=1;
         for(int i=1;i<=rem;i++)
         {
            f=f*i;
         }
         sum=sum+f;
         n=n/10;
    }
    if(E==sum)
    {
        cout<<"is a strong no";
    }
    else{
        cout<<"not a strong number";
    }
    return 0;
}