#include<iostream>
using namespace std;
int palindrom(int x){
    int rev=0,d,temp;
    temp=x;
    while(x>0){
        d=x%10;
        rev=rev*10+d;
        x=x/10;   
    }
    if(rev==temp){
        cout<<"no is palindrom";
    }
    else{
        cout<<"no is not palindrom";
    }
    return rev;
}
int main(){
    int x,result;
    cout<<"enter the number";
    cin>>x;
    result=palindrom(x);
    return 0;
}
