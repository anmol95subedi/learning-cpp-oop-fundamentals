#include<iostream>
using namespace std;
int main()
{
    int i=0;
    string s1;
    cout<<"Enter a string = ";
    cin>>s1;
    while(s1[i]!='\0'){
        i++;
    }
    char s2[i+1];
    int j=0;
    while(s1[j]!='\0'){
        s2[i-j-1]=s1[j];
        j++;
    }
    cout<<"The reversed string is ";
    for(j=0;j<=i;j++){
        cout<<s2[j];
    }
}