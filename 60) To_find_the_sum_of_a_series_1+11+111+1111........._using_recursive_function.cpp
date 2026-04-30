#include<iostream>
using namespace std;
int sum(int n){
    int i=1,s=0;
    if(n==1){
        return 1;
    }else{
        for(i=0;i<n;i++){
            s=s*10+1;
        }
        return s+sum(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the nth term upto to which the sum is to be found \nfor the series : 1 + 11 + 111 + 1111 ..... : ";
    cin>>n;
    cout<<"The sum of above series upto"<<n<<"terms is "<<sum(n);
}