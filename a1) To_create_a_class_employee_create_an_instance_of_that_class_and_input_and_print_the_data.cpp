#include<iostream>
using namespace std;
class employee{
public:
    string name;
    string company;
    int age;
};
int main()
{
    employee e;
    e.name="Anmol Subedi";
    e.company="Google";
    e.age=18;
    cout<<"Name: "<<e.name<<"\nCompany: "<<e.company<<"\nAge: "<<e.age<<"\n";
}