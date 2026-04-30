#include<iostream>
using namespace std;
int gcd(int a ,int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
int main()
{
    int a ,b;
    cout<<"Enter two numbers : ";
    cin>>a;
    cin>>b;
    cout<<"The gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
}