#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the no";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
        
    } 
    cout<<"the sum of "<<n<<"is :"<<sum;
    return 0;
    
}