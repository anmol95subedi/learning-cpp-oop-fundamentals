#include<iostream>
using namespace std;
class student{
    public:
        string name;
        int id;
        int age;
    student(){
        name="Unknown";
        id=0;
        age=0;
    }
    student(string Name,int Id,int Age){
        name=Name;
        id=Id;
        age=Age;
    }
};
int main()
{
    student s[10];
    int i=0;
    cout<<"Enter details of 10 students in the objects \n\n";
    for(i=0;i<10;i++){
        cout<<"Enter details of "<<i+1<<"th student : \n\n";
        cout<<"Name : ";
        cin>>s[i].name;
        cout<<"Id : ";
        cin>>s[i].id;
        cout<<"Age : ";
        cin>>s[i].age;
        cout<<"\n\n";
    }
    cout<<"Printing details from the array of objects :\n";
    cout<<"Name\t Id\t Age\n\n";
    for(i=0;i<10;i++){
        cout<<s[i].name<<"\t"<<s[i].id<<"\t"<<s[i].age<<"\n";
    }
}