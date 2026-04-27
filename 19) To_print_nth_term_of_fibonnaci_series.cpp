#include<iostream>
using namespace std;
int main()
{
    int n ,c=0,i=1,a=0,b=1;
    cout<<"Enter value of n = ";
    cin>>n;
    if(n==1){
        cout<<"The "<<n<<"th term of fibonacci series is "<<a;
    }else if(n==2){
        cout<<"The "<<n<<"th term of fibonacci series is "<<b;
    }else{
        for(i=1;i<n;i++){
            c=b;
            b=a+b;
            a=c;
        }
        cout<<"The "<<n<<"th term of fibonacci series is "<<a;
    }
}