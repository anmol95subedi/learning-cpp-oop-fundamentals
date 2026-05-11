#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    while(cin.fail()){
        cout<<"You entered data of wrong data type : \n";
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"Enter your age : ";
        cin>>age;
    }
    return 0;
}