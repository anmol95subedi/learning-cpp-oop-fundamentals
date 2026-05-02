#include<iostream>
using namespace std;
class multiply{
    public: 
        int x,y,z;
    multiply(int X,int Y,int Z){
        x=X;
        y=Y;
        z=Z;
    }
    int product();

};
inline int multiply::product(){
    return x*y*z;
}
int main()
{
    int x,y,z;
    cout<<"Enter three numbers : ";
    cin>>x;
    cin>>y;
    cin>>z;
    multiply m=multiply(x,y,z);
    cout<<"The product of "<<x<<" , "<<y<<" and "<<z<<" is "<<m.product();
}