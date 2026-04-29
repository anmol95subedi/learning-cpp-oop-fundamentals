#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int i=0,j=0,c=0;
    cout<<"Enter a string : ";
    cin>>s1;
    cout<<"Enter another string : ";
    cin>>s2;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        j++;
    }
    if(i!=j){
        cout<<"The strings arent same";
    }else{
        for(i=0;i<j+1;i++){
            if(s1[i]==s2[i]){
                c++;
            }
        }
        if(c==j+1){
            cout<<"The strings are same";
        }else{
            cout<<"The strings arent same";
        }
    }
}