#include<iostream>
using namespace std;
int main()
{
    const float pi=3.1415;
    float r,a;
    cout<<"Enter the radius of circle = ";
    cin>>r;
    a=pi*r*r;
    cout<<"The area of the given circle having radius "<<r<<" is "<<a;
}