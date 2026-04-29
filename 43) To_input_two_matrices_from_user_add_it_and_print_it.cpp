#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the value of n and m for a matrix of size n X m \n";
    cin>>n;
    cin>>m;
    int a[n][m],b[n][m],i=0,j=0;
    cout<<"Enter elements into the first matrix\n ";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"Enter "<<i+1<<j+1<<"th element\n";
            cin>>a[i][j];
        }
    }
     cout<<"Enter elements into the second matrix\n ";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"Enter "<<i+1<<j+1<<"th element\n";
            cin>>b[i][j];
        }
    }
     
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j]+=b[i][j];
        }
    }
    cout<<"Printing the added matrix : \n";
      for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}