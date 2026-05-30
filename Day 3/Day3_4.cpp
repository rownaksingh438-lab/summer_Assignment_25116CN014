#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    for (int i=1;i>0;i++){
        if(i%a==0 && i%b==0)
        {
            cout<<"lcm is"<<i<<endl;
            break;
        }

    }
    return 0;
    
}