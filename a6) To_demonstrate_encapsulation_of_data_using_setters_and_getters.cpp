#include<iostream>
using namespace std;
class student{
    string name;
    int id;
    int age;
public:
    string getname(){
        return name;
    }
    int getid(){
        return id;
    }
    int getage(){
        return age;
    }
    void putname(string Name){
        name=Name;
    }
    void putid(int Id){
        id=Id;
    }
    void putage(int Age){
        age=Age;
    }
    void introduce()
    {
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
    student s=student("Anmol",12,18);
    cout<<"Displaying name , id and age using method :\n";
    s.introduce();
    cout<<"\nUsing getters to display name id and age : \n";
    cout<<"\nName : "<<s.getname();
    cout<<"\nId : "<<s.getid();
    cout<<"\nAge : "<<s.getage();
    cout<<"\nSetting new names using setters : \n\n";
    s.putname("Subedi");
    s.putid(10);
    s.putage(15);
    cout<<"Displaying name , id and age using method after using putters :\n";
    s.introduce();

}