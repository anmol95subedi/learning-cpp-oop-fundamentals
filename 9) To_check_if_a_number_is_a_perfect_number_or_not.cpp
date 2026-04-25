#include<iostream>
using namespace std;
int main()
{
    int n,i=1,s=0;
    cout<<"Enter a number = ";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(n==s){
        cout<<n<<" is a perfect number";
    }else{
        cout<<n<<" is not a perfect number";
    }
}