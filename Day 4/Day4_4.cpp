#include<iostream>
using namespace std;
int main(){
    int n,d,som,temp,i;
    cout<<"ther the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        temp=i;
        som=0;
    while(temp!=0)
    {
        d=temp%10;
        som=som+d*d*d;
        temp=temp/10;
    }

    if(i==som)
    {
        cout<<i<<" ";
    }
    }
    cout<<endl<<" ";
     return 0;
}