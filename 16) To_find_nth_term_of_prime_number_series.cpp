#include<iostream>
using namespace std;
int main()
{
    int n,j=1,c=0,p=0,i=1,a;
    cout<<"Enter value of n = ";
    cin>>n;
    while(c!=n){
        for(i=1;i<=j;i++){
            if(j%i==0){
                p=p+1;
            }
        }
            if(p==2){
                c++;
                a=j;
            }
        p=0;
        j++;
        
    }cout<<"The "<<n<<"th prime number is "<<a;
}