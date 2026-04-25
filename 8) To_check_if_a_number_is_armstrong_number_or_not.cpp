#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0,a;
    cout<<"Enter a number = ";
    cin>>n;
    a=n;
    while(n!=0){
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(a==s){
        cout<<a<<" is a armstrong number";
    }else{
        cout<<a<<" is not a armstrong number";
    }
}