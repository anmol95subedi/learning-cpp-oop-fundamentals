#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of elements to enter in an array : ";
    cin>>n;
    int a[n],i=0,j=0,t;
    cout<<"Enter the "<<n<<" elements : \n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    t=a[0];
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[j]<a[i]){
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    cout<<"Printing all the elements in the array \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}