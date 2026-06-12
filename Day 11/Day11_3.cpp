#include<iostream>
using namespace std;
int prime(int x){
    int prime=1;
    for(int i=1;i<=x/2;i++){
        if(x/i==0){
            return (prime=1);
        }
        else {
            return (prime=0);
        }
    }
}
int main(){
    int x,result;
    cout<<"enter th number";
    cin>>x;
    result=prime(x);
    return 0;
}