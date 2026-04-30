#include<iostream>
using namespace std;
int isprime(int n){
    int i=2;
    if(n==2||n==1){
        return 1;
    }else{
        for(i=2;i<n;i++){
            if(n%i==0){
                return 1;
            }
        }
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isprime(n)==0){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is not a prime number";
    }
}