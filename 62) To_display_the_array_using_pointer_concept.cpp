#include<iostream>
using namespace std;
int main()
{
    int a[10],i=0;
    cout<<"Enter 10 elements into the array : ";
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"\n Printing the elements using pointer \n";
    for(i=0;i<10;i++){
        cout<<*(a+i)<<"\n";
    }
}