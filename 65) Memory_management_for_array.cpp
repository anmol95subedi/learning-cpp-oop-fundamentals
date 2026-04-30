#include<iostream>
using namespace std;
int main()
{
    int *a= new int(12);
    int i=0;
    cout<<"Enter elements into an array : ";
    for(i=0;i<10;i++){
        cin>>*(a+i);
    }
    cout<<"Displaying elements from an array and deleteing the array for manual memory handling \n";
    for(i=0;i<10;i++){
        cout<<*(a+i)<<"\n";
    }
    delete[] a;
}