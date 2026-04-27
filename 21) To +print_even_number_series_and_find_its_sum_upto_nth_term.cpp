#include<iostream>
using namespace std;
int main()
{
    int n,i=1,s=0;
    cout<<"Enter the value of n = ";
    cin>>n;
    cout<<"Printing terms upto nth term of even number series below : \n\n";
    for(i=1;i<=n;i++){
        cout<<2*i<<"\t";
        s=s+2*i;
    }
    cout<<"\n\nThe sum of the above series is "<<s<<"\n";
}