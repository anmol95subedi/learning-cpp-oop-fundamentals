#include<iostream>
using namespace std;
int main()
{
    int n,l;
    cout<<"Enter the value of n for a square matrix of size n X n \n";
    cin>>n;
    int a[n][n],i=0,j=0;
    cout<<"Enter elements into the array\n ";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"Enter "<<i+1<<j+1<<"th element\n";
            cin>>a[i][j];
        }
    }
    l=a[0][0];
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>l){
                l=a[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        a[i][i]=l;
    }
    cout<<"The end result of matrix printed with largest element as its diagonal is below \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
}