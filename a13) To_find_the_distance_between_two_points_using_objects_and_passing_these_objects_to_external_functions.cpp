#include<iostream>
#include<cmath>
using namespace std;
class point{
    public : 
        float x;
        float y;
    point(){
        x=0;
        y=0;
    }
    point(int X,int Y){
        x=X;
        y=Y;
    }
};
float distance(point p1,point p2){
    float distanct;
    distanct =pow(pow((p1.x-p2.x),2.0)+pow((p1.y-p2.y),2.0),0.5);
    return distanct;
}
int main()
{
    int x,y;
    cout<<"Enter Point 1 (x,y) : ";
    cin>>x;
    cin>>y;
    point p1=point(x,y);
    cout<<"Enter Point 2 (x,y) : ";
    cin>>x;
    cin>>y;
    point p2=point(x,y);
    cout<<"The distance between\n("<<p1.x<<","<<p1.y<<")  and ("<<p2.x<<","<<p2.y<<") is\n\n"<<distance(p1,p2);
}