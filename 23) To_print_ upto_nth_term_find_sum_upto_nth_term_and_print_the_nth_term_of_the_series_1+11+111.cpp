#include<iostream>
using namespace std;
int main()
{
    int n,s=0,i=1,j=1;
    cout<<"Enter the value of N = ";
    cin>>n;
    cout<<"Printing the series 1 + 11 + 111 upto "<<n<<"th term\n\n";
    for(i=0;i<n;i++){
        cout<<j<<"\t";
        j=j*10+1;
        s=s+j;
    }cout<<"\n\nThe "<<j<<" th term of the given series is "<<j<<" \nand\nits sum upto this term is "<<s;

}