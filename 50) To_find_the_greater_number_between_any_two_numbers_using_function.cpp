#include<iostream>
using namespace std;
int gret(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main()
{
    int a ,b,g;
    cout<<"Enter any two numbers : ";
    cin>>a;
    cin>>b;
    cout<<gret(a,b)<<" is the greater number among "<<a<<" and "<<b;
}