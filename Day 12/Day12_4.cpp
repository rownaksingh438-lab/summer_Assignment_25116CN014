#include<iostream>
using namespace std;
int perfectno(int n){
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int result,n;
    cout<<"enter the number";
    cin>>n;
    result = perfectno(n);
    cout<<result;
    return 0;
}
