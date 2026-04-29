#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int i=0,j=0;
    cout<<"Enter first string = ";
    cin>>s1;
    cout<<"Enter second string = ";
    cin>>s2;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        j++;
    }
    char s3[i+j+1];
    i=0;
    j=0;
    while(s1[i]!='\0'){
        s3[i]=s1[i];
        i++;
    }
    while(s2[j]!='\0'){
        s3[i]=s2[j];
        i++;
        j++;
    }
    i=0;
    cout<<"The concatinated string is ";
    while(s3[i]!='\0'){
        cout<<s3[i];
        i++;
    }

}