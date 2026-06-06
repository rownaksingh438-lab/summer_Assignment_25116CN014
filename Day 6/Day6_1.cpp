#include<iostream>
using namespace std;
int main(){
    int decimalnum,r,i=0;
    int binarynum[32];
    cout<<"entrthe dedimal num ";
    cin>>decimalnum;
    while(decimalnum!=0)
    {
        binarynum[i]=decimalnum%2;
        decimalnum=decimalnum/2;
        i++;
    }
    cout<<"binary num is ";
    for(int j=i-1;j>=0;j--){
        cout<<binarynum[j];

    }
    cout<<endl;
    return 0;
}
