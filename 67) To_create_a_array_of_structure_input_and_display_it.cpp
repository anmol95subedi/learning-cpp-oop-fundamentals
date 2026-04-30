#include<iostream>
using namespace std;
struct student{
    string name;
    int id;
    int age;
};
int main()
{
    struct student s[10];
    int i=0;
    cout<<"Enter details of 10 students : \n";
    for(i=0;i<10;i++){
        cout<<"Enter details of "<<i+1<<" th student \n";
        cout<<"Name : ";
        cin>>s[i].name;
        cout<<"Id : ";
        cin>>s[i].id;
        cout<<"Age : ";
        cin>>s[i].age;
        cout<<"\n";
    }
    cout<<"Displaying details of the students \n\n";
    cout<<"Name \t\t Id\t Age\t\n";
    for(i=0;i<10;i++){
        cout<<s[i].name<<"\t"<<s[i].id<<"\t"<<s[i].age<<"\n";
    }
}