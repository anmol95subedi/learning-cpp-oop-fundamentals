#include<iostream>
using namespace std;
class circle{
    private : 
        float r;
        const float pi=3.1415;
    public:
    circle(){
        r=0;
    }
    circle(float R){
        r=R;
    }
    const float getarea(){
        return pi*r*r;
    }
};
int main()
{
    float r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    circle c=circle(r);
    cout<<"The area of the given circle is "<<c.getarea();
    
}