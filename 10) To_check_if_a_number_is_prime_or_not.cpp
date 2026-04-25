#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter a number = ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is a composite number";
            return 0;
        }
        
    }
    cout<<n<<" is a prime number";
    return 0;

}