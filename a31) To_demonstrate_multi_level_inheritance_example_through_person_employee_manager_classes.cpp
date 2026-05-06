#include<iostream>
using namespace std;
class person{
    public : 
    string name;
    person(){
        name="Unknown";
    }
    person(string name){
        this->name=name;
    }
};
class employee:public person{
    public :
    int employee_id;
    employee(){
        employee_id=0;
    }
    employee(int employee_id,string name):person(name){
        this->employee_id=employee_id;
    }
};
class manager:public employee{
    public :
    string department;
    manager(){
        department="Unknown";
    }
    manager(string department,int employee_id,string name):employee(employee_id,name){
        this->department=department;
    }
    void introduce(){
        cout<<"\nEmployee name : "<<name<<"\nEmployee Id : "<<employee_id<<"\nDepartment : "<<department;
    }
};
int main()
{
    string name,depart;
    int id;
    cout<<"Enter name of manager : ";
    cin>>name;
    cout<<"Enter employee id : ";
    cin>>id;
    cout<<"Enter depart : ";
    cin>>depart;
    manager m=manager(depart,id,name);
    cout<<"The details of the employee we registered are : ";
    m.introduce();
    cout<<"When no employee is registered then their default details are : ";
    manager m1;
    m1.introduce();

}