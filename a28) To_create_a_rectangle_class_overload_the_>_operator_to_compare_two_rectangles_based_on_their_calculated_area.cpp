#include<iostream>
using namespace std;
class rectangle{
    private : 
        float len;
        float bred;
        float area;
    public :
    rectangle(){
        len=0;
        bred=0;
        area=0;
    }
    rectangle(float Len, float Bred){
        len=Len;
        bred=Bred;
        area=len*bred;        
    }
    bool operator >(rectangle& r2){
        if(area>r2.area){
            return true;
        }else if(area<r2.area){
            return false;
        }
    }
};
int main()
{
    int l,b;
    cout<<"Enter length and breadth of first rectangle : ";
    cin>>l;
    cin>>b;
    rectangle r1=rectangle(l,b);
    cout<<"Enter length and breadth of second rectangle : ";
    cin>>l;
    cin>>b;
    rectangle r2=rectangle(l,b);
    bool x=r1>r2;
    if(x){
        cout<<"Area of rectangle 1>rectangle 2 is true";
    }else{
        cout<<"Area of rectangle 1>rectangle 2 is false";
    }
    return 0;
}    