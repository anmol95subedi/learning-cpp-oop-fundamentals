#include<iostream>
using namespace std;
int main()

{
    int d,m,yr;
    cout<<"Enter the no of days = ";
    cin>>d;
    m=d/30;
    d=d-m*30;
    yr=m/12;
    m=m-yr*12;
    cout<<"Year:months:days \n"<<yr<<" : "<<m<<" : "<<d;
}