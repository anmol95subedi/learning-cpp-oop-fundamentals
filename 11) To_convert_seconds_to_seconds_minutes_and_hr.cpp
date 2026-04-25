#include<iostream>
using namespace std;
int main()
{
    int s,min,hr;
    cout<<"Enter time in second = ";
    cin>>s;
    min=s/60;
    s=s-min*60;
    hr=min/60;
    min=min-hr*60;
    cout<<"hour:minutes:second"<<"\n"<<hr<<" : "<<min<<" : "<<s;
}