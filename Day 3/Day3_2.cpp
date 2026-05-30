#include<iostream>
using namespace std;
int main(){
    int n,flag=1;
    
    for(int n=2;n<=100;n++)
    {
        flag=1;
        for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
              flag =0;
              
              break;
        }
       
    }
    if(flag ==1){
        cout<<n<<" ";
    }
}
    
    return 0;
}