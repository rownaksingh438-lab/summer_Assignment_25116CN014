#include<iostream>
using namespace std;
int main(){
    int n,p,i,c=1,temp;
    cout<<"enter the numbr";
    cin>>n;
    cout<<"enter power";
    cin>>p;
    for(int i=1;i<=p;i++)
    {
        temp=n;
        c=c*temp;
    }
    cout<<"the result is "<<c;
    return 0;
}