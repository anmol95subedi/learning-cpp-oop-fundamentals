#include<iostream>
using namespace std;
class student{
    public: 
        string name;
        int id;
        int age;
        void introduction(){
            cout<<"\nName : "<<name<<"\nId : "<<id<<"\nAge : "<<age;
        }
        student(string Name,int Id,int Age){
            name=Name;
            id=Id;
            age=Age;
        }
};
int main()
{
    student s=student("Anmol",12,19);
    s.introduction();
}