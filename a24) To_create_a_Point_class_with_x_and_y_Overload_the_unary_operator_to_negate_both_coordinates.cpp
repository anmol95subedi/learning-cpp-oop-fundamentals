#include<iostream>
using namespace std;
class point {
    private:
        int x;
        int y;
    public:
    point(){
        x=0;
        y=0;
    }
    point(int x,int y){
        this->x=x;
        this->y=y;
    }
    point operator -(){
        point p1;
        p1.x=-x;
        p1.y=-y;
        return p1;
    }
    void showpoint(){
        cout<<"\nThe point is ("<<x<<","<<y<<")\n";
    }
};
int main()
{
    int x,y;
    cout<<"Enter value of x and y : ";
    cin>>x;
    cin>>y;
    point p=point(x,y);
    p.showpoint();
    p=-p;
    cout<<"\nThe point after performing p=-p is: \n";
    p.showpoint();
}