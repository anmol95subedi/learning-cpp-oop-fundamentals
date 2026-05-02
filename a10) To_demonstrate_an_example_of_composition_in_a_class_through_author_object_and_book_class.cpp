#include<iostream>
using namespace std;
class author{
    public :
        string name;
        int age;
    author(string Name, int Age){
        name=Name;
        age=Age;
    }
    author(){
        name="Unknown";
        age=0;
    }
};
class book{
    public : 
        string b_name;
        int b_price;
        author a;
    book(string B_name,int B_price, author A){
        b_name=B_name;
        b_price=B_price;
        a=A;
    }
    void introduce(){
        cout<<"Book Name : "<<b_name;
        cout<<"\nBook price : "<<b_price;
        cout<<"\nAuthor name : "<<a.name;
        cout<<"\nAuthor age : "<<a.age;
    }
};
int main()
{
    string a_name,b_name;
    int price,age;
    cout<<"Enter book name : ";
    cin>>b_name;
    cout<<"Enter author name : ";
    cin>>a_name;
    cout<<"Enter price of book : ";
    cin>>price;
    cout<<"Enter age of author : ";
    cin>>age;
    author a1=author(a_name,age);
    book b=book(b_name,price,a1);
    b.introduce();
}