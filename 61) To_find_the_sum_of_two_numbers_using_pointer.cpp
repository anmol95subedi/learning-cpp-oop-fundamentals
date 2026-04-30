#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int *p,*q;
    cout<<"Enter any two numbers : ";
    cin>>a;
    cin>>b;
    p=&a;
    q=&b;
    cout<<"The sum of "<<*p<<" and "<<*q<<" is "<<*p+*q;

}