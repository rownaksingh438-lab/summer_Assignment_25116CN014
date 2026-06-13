#include<iostream>
using namespace std;
int armstrong(int x){
    int s=0,d,temp;
    temp=x;
    while(x>0){
        d=x%10;
        s=s+d*d*d;
        x=x/10;   
    }
    if(s==temp){
        cout<<"no is armstrong";
    }
    else{
        cout<<"no is not armstrong";
    }
    return s;
}
int main(){
    int x,result;
    cout<<"enter the number";
    cin>>x;
    result=armstrong(x);
    return 0;
}