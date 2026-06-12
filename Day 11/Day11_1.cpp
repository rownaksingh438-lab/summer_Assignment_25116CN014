#include<iostream>
using namespace std;
int sum(int x,int y){
    int z=x+y;
    return (z);
}
int main(){
    int x,y,result;
    cout<<"enter two number"<<endl;
    cin>>x>>y;
    result = sum(x,y);
    cout<<result;
    return 0;
}


