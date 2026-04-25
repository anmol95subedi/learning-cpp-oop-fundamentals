#include<iostream>
using namespace std;
int main()
{
    int n,r=0,s=0,a;
    cout<<"Enter a number = ";
    cin>>n;
    a=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(a==s){
        cout<<a<<" is a palindrome number";
    }else{
        cout<<a<<" is not a palindrome number";
    }
}