#include<iostream>
using namespace std;
int main()
{
    string anystring;
    int i=0;
    cout<<"Enter a string = ";
    cin>>anystring;
    while(anystring[i]!='\0'){
        i++;
    }
    cout<<"The length of the given string is "<<i;
}