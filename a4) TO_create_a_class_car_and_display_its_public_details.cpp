#include<iostream>
using namespace std;
class car{
    public: 
        string color;
        int length;
        int speed;
    
        void vroom(){
            cout<<"\nVroom!! Vroom !!";
        }
};
int main()
{
    car c;
    c.color="red";
    c.length=10;
    c.speed=15;
    cout<<"Color : "<<c.color<<"\nLength : "<<c.length<<"\nSpeed : "<<c.speed;
    c.vroom();
    return 0;
}