#include<iostream>
using namespace std;
class student{
    public:
        string name;
        int id;
        int grade;
        void introduce(){
            cout<<"hi i am "<<name<<" from grade "<<grade<<" and my id number is "<<id;
        }
};
int main()
{
    student s;
    s.name="Anmol Subedi";
    s.id=10;
    s.grade=12;
    s.introduce();
}