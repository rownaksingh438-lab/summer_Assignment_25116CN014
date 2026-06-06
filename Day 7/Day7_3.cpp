#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return(0);
    }
    else{
        return(n+sum(n-1));
    }
}
int main(){
    int n,result;
    cout<<"enter the number";
    cin>>n;
    result=sum(n);
    cout<<"the sum is "<<result;
    return 0;
}