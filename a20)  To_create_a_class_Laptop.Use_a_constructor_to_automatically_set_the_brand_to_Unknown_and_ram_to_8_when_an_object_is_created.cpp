#include<iostream>
#include<string>
using namespace std;
class laptop{
    public :
        string brand;
        int ram;
    laptop(){
        brand="Unknown";
        ram=8;
    }     
    laptop(string Name,int Ram){
        brand=Name;
        ram=Ram;
    }
    void introduce(){
        cout<<"Brand : "<<brand<<"\nRam : "<<ram<<"\n";
    }
};
int main()
{
    laptop l;
    cout<<"The default value stored in member of object of laptop class is below \n\n";
    l.introduce();
}