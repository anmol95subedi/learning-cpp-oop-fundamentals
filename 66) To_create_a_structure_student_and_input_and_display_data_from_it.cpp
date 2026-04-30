#include<iostream>
using namespace std;
struct student{
    string name;
    int id;
    int age;
};
int main()
{
    struct student s;
    cout<<"Enter name of a student : ";
    cin>>s.name;
    cout<<"Enter id : ";
    cin>>s.id;
    cout<<"Enter age : ";
    cin>>s.age;
    cout<<"Name : "<<s.name<<" Id : "<<s.id<<" Age : "<<s.age;
}