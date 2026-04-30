#include<iostream>
using namespace std;
int area(int *l,int *b,int *a,int *p){\
    (*a)=*l*(*b);
    (*p)=2*(*l+*b);
    return 0;
}
int main()
{
    int l,b,a,p;
    cout<<"Enter length and breadth of a rectangle : ";
    cin>>l;
    cin>>b;
    area(&l,&b,&a,&p);
    cout<<"The area of the given rectangle is : \n"<<a;
    cout<<"The perimeter of the given rectangle is : "<<p;

}