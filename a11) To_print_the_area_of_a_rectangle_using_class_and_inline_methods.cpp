#include<iostream>
using namespace std;
class area{
    public: 
    int length;
    int breadth;
    area(){
        length=0;
        breadth=0;
    }
    area(int l, int b){
        length=l;
        breadth=b;
    }
    void showarea(){
        cout<<"\nArea : "<<length*breadth;
    }
};
int main(){
    int l,b;
    cout<<"Enter length and breadth of rectangle : ";
    cin>>l;
    cin>>b;
    area a=area(l,b);
    a.showarea();
}