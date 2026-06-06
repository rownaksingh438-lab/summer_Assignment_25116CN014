#include<iostream>
using namespace std;
    int fibonacci(int i){
    if(i==0){
        return (0);
    }
    if(i==1){
        return (1);
    }
    else {
        return (fibonacci(i-1)+fibonacci(i-2));
    }
}
int main(){
    int n,i,result;
    cout<<("enter the number");
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        result = fibonacci(i);
    }
    cout<<result;
    return 0;
}