#include<iostream>
using namespace std;
class user{
    private :
       float balance;
    public:
        user(){
            balance=0;
        }
        user(float B){
            balance=B;
        }
        void deposit(float B){
            balance=balance+B;
        }
        float checkbalance(){
            return balance;
        }
};
int main()
{
    float b;
    cout<<"Enter the initial balance of the user : ";
    cin>>b;
    user u=user(b);
    cout<<"Initial balance of the User before Depositing : "<<u.checkbalance();
    cout<<"\n\n Enter amount to deposit to your account : ";
    cin>>b;
    u.deposit(b);
    cout<<"Balance after depositing is : "<<u.checkbalance();
}