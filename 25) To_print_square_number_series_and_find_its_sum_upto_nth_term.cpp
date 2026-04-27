#include<iostream>
using namespace std;
int main()
{
    int n,s=0,i=1;
    cout<<"Enter the value of n = ";
    cin>>n;
    cout<<"Printing the square number series :";
    for(i=1;i<=n;i++){
        cout<<i*i<<"\t";
        s=s+i*i;
    }
    cout<<"The sum upto "<<n<<"th term in above series is "<<s;
}