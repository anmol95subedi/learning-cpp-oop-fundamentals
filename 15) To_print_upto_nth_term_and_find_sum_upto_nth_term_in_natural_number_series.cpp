#include<iostream>
using namespace std;
int main()
{
    int n,i=1,s=0;
    cout<<"Enter the value of n = ";
    cin>>n;
    for(i=1;i<=n;i++){
        s=s+i;
        cout<<i<<"\t";
    }
    cout<<"\n";
    cout<<"The sum upto "<<n<<"th term of series of natural number is "<<s;
    return 0;
}