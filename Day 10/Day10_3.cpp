#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cout<<i;  
        for(int j=i-1;j>=1;j--){

            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}