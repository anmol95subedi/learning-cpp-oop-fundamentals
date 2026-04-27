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
        student(string Name,int Id,int Grade){
            name=Name;
            id=Id;
            grade=Grade;
        }
};
int main()
{
    student s=student("Anmol Subedi",12,10);
    s.introduce();
}