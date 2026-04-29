#include<iostream>
using namespace std;
int main()
{
    int i=1,j=4;
    for(i=1;i<=5;i++){
        for(j=4;j>=i;j--){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}