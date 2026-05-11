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
    friend istream& operator>>(istream& input,complex& comp);
    friend ostream& operator<<(ostream& output,complex& comp);
};
ostream& operator<<(ostream& output,complex& comp){
    output<<comp.real<<" + "<<comp.img<<"i";   
    return output; 
}
istream& operator>>(istream& input,complex& comp){
    input>>comp.real>>comp.img;
    return input;
}
int main()
{
    complex c;
    cout<<"Enter real and imaginaro parts of a complex number : ";
    cin>>c;
    cout<<"The complex number is : ";
    cout<<c;
}