#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    int l,i,c=0;
    cout<<"Enter a string = ";
    getline(cin,s1);
    l=s1.length();
    for(i=0;i<=l;i++){
        if(s1[i]==' '){
            c++;
        }
    }
    cout<<"The no of words in the given sentence is "<<c+1;
}