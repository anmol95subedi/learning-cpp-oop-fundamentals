#include<iostream>
using namespace std;
class device{
    protected :
        bool state;
    public :
        device(){
            state=false;
        }
        device(bool state){
            this->state=state;
        }
        void d_state(){
            if(state){
               cout<<"Device is turning on ";
            }else{
                cout<<"Device is off ";
            }
        }
        void setstate(bool state){
            this->state=state;
        }
};
class lightbulb:public device{
    public :
        void d_state(){
            if(state){
               cout<<"Light on ";
            }else{
                cout<<"Light off ";
            }
        }
};
int main()
{
    int i;
    cout<<"Enter 1 for device on and 0 for off : ";
    cin>>i;
    lightbulb d;
    if(i==0){
        d.setstate(false);
    }else{
        d.setstate(true);
    }
    cout<<"Printing state without using function overriding : ";
    d.device::d_state();
    cout<<"Printing state with sfunction overriding : ";
    d.d_state();
    return 0;
}