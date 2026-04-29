#include<iostream>
using namespace std;
int main()
{
    int n,l;
    cout<<"Enter the no of elements to enter in an array : ";
    cin>>n;
    int a[n],i=0;
    cout<<"Enter the "<<n<<" elements : \n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    l=a[0];
    for(i=0;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
    }
    cout<<"The largest element in the given array is "<<l;
}