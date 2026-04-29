#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of elements to enter in an array : ";
    cin>>n;
    int a[n],i=0;
    cout<<"Enter the "<<n<<" elements : \n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Printing all the elements in the array \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}