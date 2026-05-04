#include<iostream>
using namespace std;
class employee{
    private: 
        string name;
        int salary;
    public:
        employee(){
            name="Unknown";
            salary=0;
        }
        employee(string Name,int Salary){
            name=Name;
            salary=Salary;
        }
        void setsalary(int sal){
            if(sal>0){
                salary=sal;
                cout<<"Successful !!!";
            }else{
                cout<<"Error Salary not possible !!!!";
            }

        }
        int getsalary(){
            return salary;
        }
};
int main()
{
    string name;
    int salary;
    cout<<"Enter employee name and salary : \n";
    cin>>name;
    cin>>salary;
    employee e=employee(name,salary);
    cout<<"Initial Salary : "<<e.getsalary();
    cout<<"\n\nEnter how much to update the salary to : ";
    cin>>salary;
    e.setsalary(salary);
    cout<<"\nAfter updating salary : "<<e.getsalary();
}