#include<iostream>
using namespace std;
int fact(int x){
    int result=1;
    for(int i=1;i<=x;i++){
        result=result*i;
    }
    return result;
}
int main(){
    int x,result;
    cout<<"enter the number"<<endl;
    cin>>x;
    result=fact(x);
    cout<<result;
    return 0;
}