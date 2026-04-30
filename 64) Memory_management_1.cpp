#include<iostream>
using namespace std;
int main()
{
    int *p = new int;
    cout<<"Enter a number : ";
    cin>>*p;
    cout<<"The value of *p before clearing memory: "<<*p;
    delete p;
    p=NULL;
    
}