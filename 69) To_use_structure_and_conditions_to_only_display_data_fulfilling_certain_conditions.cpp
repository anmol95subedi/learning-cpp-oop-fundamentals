#include<iostream>
using namespace std;
struct student{
    string name;
    int mark;
    int age;
};
int main()
{
    struct student s[5];
    int i=0;
    cout<<"Enter details of 5 students : \n";
    for(i=0;i<5;i++){
        cout<<"Enter details of "<<i+1<<" th student \n";
        cout<<"Name : ";
        cin>>s[i].name;
        cout<<"Marks : ";
        cin>>s[i].mark;
        cout<<"Age : ";
        cin>>s[i].age;
        cout<<"\n";
    }
    cout<<"Displaying details of the students who passed : \n\n";
    cout<<"Name \t Marks\t Age\t\n";
    for(i=0;i<5;i++){
        if(s[i].mark>=24){
            cout<<s[i].name<<"\t"<<s[i].mark<<"\t"<<s[i].age<<"\n";
        }
    }
}