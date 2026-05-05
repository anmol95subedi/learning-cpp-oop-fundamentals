#include<iostream>
using namespace std;
class complex{
    private :
        int real;
        int img;
    public :
        complex(){
            real=0;
            img=0;
        }
        complex(int real,int img){
            this->real=real;
            this->img=img;
        }
        complex operator +(const complex& comp){
            complex temp;
            temp.real=real+comp.real;
            temp.img=img+comp.img;
            return temp;
        }
        void showcomplex(){
            cout<<real<<" + "<<img<<"i\n";
        }
};
int main()
{
    int r,i;
    cout<<"Enter value of real and imaginary \npart for complex no C1 :\n ";
    cin>>r;
    cin>>i;
    complex c1=complex(r,i);
    cout<<"Enter value of real and imaginary \npart for complex no C2 :\n ";
    cin>>r;
    cin>>i;
    complex c2=complex(r,i);
    complex c3;
    c3=c1+c2;
    cout<<"Adding C1 and C2 : C3=C1+C2 \n\nThe value of C3 is :\n\n";
    c3.showcomplex();

}