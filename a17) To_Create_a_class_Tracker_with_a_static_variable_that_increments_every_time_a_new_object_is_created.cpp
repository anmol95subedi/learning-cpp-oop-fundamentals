#include<iostream>
using namespace std;
class tracker{
    public :
    static int count;
    tracker(){
        count++;
    }
};
int tracker::count = 0;
int main()
{
    tracker t1;
    cout<<"When 1 object is created : "<<tracker::count;
    tracker t2,t3,t4,t5;
    cout<<"When multiple object are created : "<<tracker::count;

}