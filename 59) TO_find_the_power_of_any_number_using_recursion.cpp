#include<iostream>
using namespace std;
int pow(int b,int e){
    if(e==0){
        return 1;
    }else{
        return b*pow(b,e-1);
    }
}
int main()
{
    int b,e;
    cout<<"Enter base and exponent : ";
    cin>>b;
    cin>>e;
    cout<<b<<"^"<<e<<" = "<<pow(b,e);
}