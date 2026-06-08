#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter line";
    cin>>m;
    for(int i=m;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}