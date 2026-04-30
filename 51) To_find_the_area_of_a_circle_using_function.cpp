#include<iostream>
using namespace std;
#define pi 3.1415
float area(float r){
    return pi*r*r;
}
int main()
{
    float r;
    cout<<"Enter the radius of given circle : ";
    cin>>r;
    cout<<"The area of the given circle is "<<area(r);
}