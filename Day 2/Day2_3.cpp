#include<iostream>
using namespace std;
int main(){
    int n,product=1,r;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
   {
     r=n%10;
    product=product*r;
    n=n/10;
    }
    cout<<"the product of th number is "<<product;
    return 0;

}
