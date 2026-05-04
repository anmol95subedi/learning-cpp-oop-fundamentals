#include<iostream>
using namespace std;
class visitor{
    public :
    static int count;
    visitor(){
        count++;
    }
};
int visitor::count = 0;
int main()
{
    visitor t1;
    cout<<"When 1 visitor object is created : "<<visitor::count;
    visitor t2,t3,t4,t5;
    cout<<"When multiple visitor object are created : "<<visitor::count;

}