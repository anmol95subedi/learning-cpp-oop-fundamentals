#include<iostream>
using namespace std;
int main()
{
    int n,s=0,r=0,a;
    cout<<"Enter a number = ";
    cin>>n;
    a=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r;
    }
    cout<<"The sum of digits of number "<<a<<" is "<<s;

}