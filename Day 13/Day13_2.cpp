#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of character ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    double average = (double)sum/n;
    cout<<"average : "<<average<<endl;
    return 0;
}