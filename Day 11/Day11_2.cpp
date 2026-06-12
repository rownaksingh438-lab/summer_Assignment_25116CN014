#include<iostream>
using namespace std;
int max(int x,int y){
    if(x>y){
        return (x);
    }
    else {
        return(y);
    }
}
int main(){
    int x,y,result;
    cout<<"enter first number "<<endl;
    cin>>x;
    cout<<"enter second number"<<endl;
    cin>>y;
    result = max(x,y);
    cout<<"the greater no is"<<result;
    return 0;
}