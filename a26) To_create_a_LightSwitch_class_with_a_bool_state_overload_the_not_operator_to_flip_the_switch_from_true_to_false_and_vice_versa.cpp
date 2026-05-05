#include<iostream>
using namespace std;
class lightbulb{
    private :
        bool state;
    public :
    lightbulb(){
        state=false;
    }
    lightbulb(bool state){
        this->state=state;
    }
    void checkstate(){
        if(state){
            cout<<"The light bulb is on ";
        }else{
            cout<<"The light bulb is off ";
        }
    }
    void operator !(){
        if(state){
            state=false;
        }else{
            state=true;
        }
    }
    void setstate(bool s1){
        state=s1;
    }
};
int main()
{
    int n;
    cout<<"Enter 0 for light bulb to be on \nOr 1 for lightbulb to be off :\n\n";
    cin>>n;
    lightbulb l;
    if(n==0){
        l.setstate(false);
    }else if(n==1){
        l.setstate(true);
    }else{
        cout<<"Invalid input !!";
        return 0;
    }
    cout<<"Before flipping the switch \n\n";
    l.checkstate();
    !l;
    cout<<"\n\nAfter flipping the switch \n\n";
    l.checkstate();
}