#include<iostream>
#include<cmath>
using namespace std;
class vector{
    private :
        float x;
        float y;
    public :
    vector(){
        x=0;
        y=0;
    }
    vector(float x,float y){
        this->x=x;
        this->y=y;
    }
    float operator ~(){
        return pow(pow(x,2.00)+pow(y,2.00),0.5);
    }
};
int main()
{
    float x,y,m;
    cout<<"Enter the x and y coordinate for a vector : ";
    cin>>x;
    cin>>y;
    vector v=vector(x,y);
    m=~v;
    cout<<"The magnitude of the given vector is : "<<m;
}