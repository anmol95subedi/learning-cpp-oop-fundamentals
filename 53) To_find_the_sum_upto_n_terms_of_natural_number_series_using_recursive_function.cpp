#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }else{
        return n+sum(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"The sum of natural numbers upto "<<n<<" terms is "<<sum(n);
    
}