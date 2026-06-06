#include<iostream>
using namespace std;
int factorial(int n){
   if(n==0){
    return (1);
   }
   else {
    return (n*factorial(n-1));
   }
}
int main(){
    int n,result;
    cout<<"enter the number";
    cin>>n;
    result = factorial(n);
    cout<<"the result is"<<result;
    return 0;
}

