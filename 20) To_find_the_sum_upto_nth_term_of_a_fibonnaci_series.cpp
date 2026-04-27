#include<iostream>
using namespace std;
int main()
{
    int n ,c=0,i=1,a=0,b=1,s=0;
    cout<<"Enter value of n = ";
    cin>>n;
    if(n==1){
        cout<<"The sum upto "<<n<<"th term of fibonacci series is "<<a;
    }else if(n==2){
        cout<<"The sum upto "<<n<<"th term of fibonacci series is "<<b;
    }else{
        for(i=1;i<n;i++){
            c=b;
            b=a+b;
            a=c;
            s=s+a;
        }
        cout<<"The sum upto "<<n<<"th term of fibonacci series is "<<s;
    }
}