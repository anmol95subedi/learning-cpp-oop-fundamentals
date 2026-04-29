#include<iostream>
using namespace std;
int main()
{
    string s1;
    int i=0,j=0,c=0;
    cout<<"Enter a string = ";
    cin>>s1;
    while(s1[i]!='\0'){i++;}
    char s2[i+1];
    for(j=0;j<=i;j++){
        s2[j]=s1[i-j-1];
    }
    j=0;
    s2[i]='\0';
    while(s2[j]!='\0'){
        if(s2[j]==s1[j]){
            c++;
            j++;
        }

    }
    if(c==i){
        cout<<"The given string is a palindrome";
    }else{
        cout<<"The given string isnt a palindrome";
    }
}