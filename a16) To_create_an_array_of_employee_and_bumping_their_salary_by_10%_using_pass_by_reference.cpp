#include<iostream>
using namespace std;
class employee{
    public : 
        string name;
        float salary;
    employee(){
        name="Unknown";
        salary=0;
    }
    employee(string Name,float Salary){
        name=Name;
        salary=Salary;
    }
};
void raise(employee *e){
    int i=0;
    for(i=0;i<3;i++){
        (*(e+i)).salary*=1.1;
    }
}
int main()
{
    employee e[3];
    int i=0;
    cout<<"Enter details of 3 employee in format \n\n Name \t Salary \n";
    for(i=0;i<3;i++){
        cin>>e[i].name;
        cin>>e[i].salary;
    }
    raise(e);
    cout<<"Printing updated salary : \n\n";
    cout<<"Name\tSalary \n";
    for(i=0;i<3;i++){
        cout<<e[i].name<<"\t"<<e[i].salary<<"\n";
    }
}