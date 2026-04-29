#include<iostream>
using namespace std;
int main()
{
    int i=1,m=4,j,k=1,z=1;
    for(i=1;i<=9;i++){
        for(j=1;j<=m;j++){
            cout<<" ";
        }
        for(k=1;k<=z;k++){
            cout<<"*";
        }
        cout<<"\n";
        if(i<5){
            m=m-1;
            z=z+2;
        }else{
            m=m+1;
            z=z-2;
        }
    }
}