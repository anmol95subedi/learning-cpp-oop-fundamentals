#include<iostream>
using namespace std;
class session{
    public:
        session(){
            cout<<"Welcome !!!\n";
        }
        ~session(){
            cout<<"Bye Bye !!!";
        }
};
int main()
{
    cout<<"This is outside the block of code where object is created \n";
    {
        session s1;
    };
    cout<<"\nThis block ended ";
}