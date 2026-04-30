#include<iostream>
using namespace std;
struct marks{
    int marks1;
    int marks2;
    int marks3;
};
struct student{
    string name;
    int id;
    int age;
    struct marks m;
};
int main()
{
    struct student s[10];
    int i=0;
    cout<<"Enter details of 3 students : \n";
    for(i=0;i<3;i++){
        cout<<"Enter details of "<<i+1<<" th student \n";
        cout<<"Name : ";
        cin>>s[i].name;
        cout<<"Id : ";
        cin>>s[i].id;
        cout<<"Age : ";
        cin>>s[i].age;
        cout<<"Marks in first subject : ";
        cin>>s[i].m.marks1;
        cout<<"Marks in second subject : ";
        cin>>s[i].m.marks2;
        cout<<"Marks in third subject : ";
        cin>>s[i].m.marks3;
        cout<<"\n";

    }
    cout<<"Displaying details of the students \n\n";
    cout<<"Name \t Id\t Age\t Marks1\t Marks2\t Marks3\t\n";
    for(i=0;i<3;i++){
        cout<<s[i].name<<"\t"<<s[i].id<<"\t"<<s[i].age<<"\t"<<s[i].m.marks1<<"\t"<<s[i].m.marks2<<"\t"<<s[i].m.marks3<<"\n";
    }
}