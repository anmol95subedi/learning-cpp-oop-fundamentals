#include<iostream>
using namespace std;
int sum(int a ,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter Any Two numbers : ";
    cin>>a;
    cin>>b;
    cout<<"The Sum of "<<a<<" and "<<b<<" is "<<sum(a,b);
}