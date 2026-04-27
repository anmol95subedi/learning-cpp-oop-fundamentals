#include<iostream>
using namespace std;
int main()
{
    int n,f=1,s=0,j=1,i=1;
    cout<<"Enter the value of n = ";
    cin>>n;
    cout<<"Printing natural number factorial series : \n\n";
    for(i=1;i<=n;i++){
        cout<<i<<"! +"<<"\t";
        for(j=1;j<=i;j++){
            f=f*j;
        }
        s=s+f;
        f=1;
    }
    cout<<"\nThe sum upto "<<n<<"th term of the factorial series is "<<s;
}