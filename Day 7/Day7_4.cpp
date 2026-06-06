#include<iostream>
using namespace std;
int reverse(int n){
    int d,reverse=0;
    while (n>0){
        d=n%10;
        reverse=reverse*10+d;
        n=n/10;      
}
return reverse;
}
int main(){
    int result,n;
    cout<<"enter the number";
    cin>>n;
    result = reverse(n);
    cout<<result;
    return 0;
}