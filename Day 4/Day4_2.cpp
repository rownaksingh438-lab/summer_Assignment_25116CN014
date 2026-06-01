#include<iostream>
using namespace std;
int main(){
    int num,first=0,second=1,next;
    cout<<"enter the number";
    cin>>num;
    cout<<"fibonacci series"<<endl;
    for(int i=1;i<num;i++)
    {
        cout<<first<<endl;
        next = first+second;
        first = second;
        second = next;
    }
    cout<<second;
    return 0;

}